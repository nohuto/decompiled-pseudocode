/*
 * XREFs of BcpConvertProgressToString @ 0x14066FB5C
 * Callers:
 *     BcpDisplayProgress @ 0x140670320 (BcpDisplayProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140670928 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpConvertProgressToString(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rsi
  unsigned int i; // r11d
  unsigned int j; // r10d
  __int64 v6; // rax
  __int64 result; // rax

  v2 = 1000;
  v3 = *(_QWORD *)(a2 + 8);
  for ( i = *(unsigned __int16 *)(a2 + 2) >> 1; v2 > a1; v2 /= 0xAu )
  {
    if ( v2 <= 1 )
      break;
  }
  for ( j = 0; j < i; v2 /= 0xAu )
  {
    if ( !v2 )
      break;
    v6 = j++;
    *(_WORD *)(v3 + 2 * v6) = a1 / v2 % 0xA + 48;
  }
  *(_WORD *)(v3 + 2LL * j) = 0;
  result = 0LL;
  *(_WORD *)a2 = 2 * j;
  return result;
}
