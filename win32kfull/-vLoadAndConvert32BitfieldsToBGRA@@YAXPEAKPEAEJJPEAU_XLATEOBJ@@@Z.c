/*
 * XREFs of ?vLoadAndConvert32BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02E6C90
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vLoadAndConvert32BitfieldsToBGRA(char *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  ULONG *v5; // rbx
  ULONG *v6; // rsi
  char *v7; // rdi

  v5 = (ULONG *)&a2[4 * a3];
  v6 = &v5[a4];
  if ( v5 != v6 )
  {
    v7 = (char *)(a1 - (char *)v5);
    do
    {
      *(ULONG *)((char *)v5 + (_QWORD)v7) = XLATEOBJ_iXlate(pxlo, *v5) | 0xFF000000;
      ++v5;
    }
    while ( v5 != v6 );
  }
}
