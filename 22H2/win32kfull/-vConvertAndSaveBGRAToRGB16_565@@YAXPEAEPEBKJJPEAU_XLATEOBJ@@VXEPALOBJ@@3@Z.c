/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_565@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02C4B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vConvertAndSaveBGRAToRGB16_565(__int64 a1, int *a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  _WORD *v7; // r10
  unsigned __int64 v8; // r8
  _WORD *v9; // rax
  unsigned __int64 v10; // r8
  int v11; // ecx

  v4 = a4;
  v6 = 0LL;
  v7 = (_WORD *)(a1 + 2 * v4);
  v8 = a3;
  v9 = &v7[v8];
  v10 = (v8 * 2) >> 1;
  if ( v7 > v9 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      LODWORD(v9) = *a2;
      v11 = *a2++;
      ++v6;
      LOWORD(v11) = ((unsigned int)v9 >> 8) & 0xFC;
      LOBYTE(v9) = (unsigned __int8)v9 >> 3;
      *v7++ = (unsigned __int8)v9 | (unsigned __int16)(8 * (v11 | (32 * (BYTE2(v11) & 0xF8))));
    }
    while ( v6 != v10 );
  }
  return (char)v9;
}
