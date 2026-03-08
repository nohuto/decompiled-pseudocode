/*
 * XREFs of ?vLoadAndConvertRGB32ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02E71C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB32ToBGRA(char *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 *v4; // r8
  unsigned __int8 *v5; // rdx
  signed __int64 v6; // r10
  int v7; // [rsp+18h] [rbp+18h]

  v4 = &a2[4 * a3];
  v5 = &v4[4 * a4];
  if ( v4 != v5 )
  {
    v6 = a1 - (char *)v4;
    do
    {
      BYTE2(v7) = *(_DWORD *)v4;
      BYTE1(v7) = BYTE1(*(_DWORD *)v4);
      LOBYTE(v7) = BYTE2(*(_DWORD *)v4);
      HIBYTE(v7) = -1;
      *(_DWORD *)&v4[v6] = v7;
      v4 += 4;
    }
    while ( v4 != v5 );
  }
}
