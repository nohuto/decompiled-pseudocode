/*
 * XREFs of ?vConvertAndSaveBGRAToRGB32@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02E69A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vConvertAndSaveBGRAToRGB32(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int *v4; // r9
  __int64 result; // rax
  unsigned int *v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // [rsp+18h] [rbp+18h]

  v4 = (unsigned int *)(a1 + 4LL * a4);
  result = a3;
  v6 = &v4[a3];
  if ( v4 != v6 )
  {
    v7 = a2 - (_QWORD)v4;
    do
    {
      HIWORD(v8) = (unsigned __int8)*(unsigned int *)((char *)v4 + v7);
      BYTE1(v8) = BYTE1(*(unsigned int *)((char *)v4 + v7));
      LOBYTE(v8) = BYTE2(*(unsigned int *)((char *)v4 + v7));
      result = v8;
      *v4++ = v8;
    }
    while ( v4 != v6 );
  }
  return result;
}
