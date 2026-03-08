/*
 * XREFs of ?vLoadAndConvertBGR24ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C01504E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertBGR24ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 *v4; // r8
  unsigned __int8 *v5; // rdx
  unsigned __int8 v6; // al
  unsigned int v7; // [rsp+18h] [rbp+18h]

  v4 = &a2[3 * a3];
  v5 = &v4[3 * a4];
  while ( v4 != v5 )
  {
    LOWORD(v7) = *(_WORD *)v4;
    v6 = v4[2];
    v4 += 3;
    BYTE2(v7) = v6;
    HIBYTE(v7) = -1;
    *a1++ = v7;
  }
}
