void reverse(char *s) {
    for (char *st = s, *nd = s+strlen(s)-1; st < nd; st++, nd--)
        swap(*st,*nd);
}
