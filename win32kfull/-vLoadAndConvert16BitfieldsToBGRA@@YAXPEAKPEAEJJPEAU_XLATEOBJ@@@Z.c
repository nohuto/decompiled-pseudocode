void __fastcall vLoadAndConvert16BitfieldsToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rsi

  v6 = &a2[2 * a3];
  v7 = &v6[2 * a4];
  while ( v6 != v7 )
  {
    *a1 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v6) | 0xFF000000;
    v6 += 2;
    ++a1;
  }
}
