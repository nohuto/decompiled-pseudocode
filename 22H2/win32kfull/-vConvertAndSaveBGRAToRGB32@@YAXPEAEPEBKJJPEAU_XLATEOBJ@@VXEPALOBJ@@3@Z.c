/*
 * XREFs of ?vConvertAndSaveBGRAToRGB32@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02C4BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vConvertAndSaveBGRAToRGB32(__int64 a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned int v10; // [rsp+18h] [rbp+18h]

  v4 = a3;
  v5 = 0LL;
  v4 *= 4LL;
  v6 = a1 + 4LL * a4;
  result = v4 + v6;
  v8 = v4 >> 2;
  if ( v6 > result )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = v6 - (_QWORD)a2;
    do
    {
      ++v5;
      HIWORD(v10) = (unsigned __int8)*a2;
      BYTE1(v10) = BYTE1(*a2);
      LOBYTE(v10) = BYTE2(*a2);
      result = v10;
      *(_DWORD *)((char *)a2++ + v9) = v10;
    }
    while ( v5 != v8 );
  }
  return result;
}
