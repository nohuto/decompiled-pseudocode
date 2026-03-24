/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x1402F81F8
 * Callers:
 *     FsRtlFindInTunnelCacheEx @ 0x140668870 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406689E0 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1405EE320 (RtlCompareUnicodeString.c)
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3, char a4)
{
  const UNICODE_STRING *v6; // rsi
  LONG result; // eax

  if ( *(_QWORD *)(a1 + 48) < a2 )
    return -1;
  if ( *(_QWORD *)(a1 + 48) > a2 )
    return 1;
  v6 = (const UNICODE_STRING *)(a1 + 8 * (*(_DWORD *)(a1 + 56) & 2 | 8LL));
  result = RtlCompareUnicodeString(v6, a3, 1u);
  if ( !result )
  {
    if ( a4 )
      return RtlCompareUnicodeString(v6, a3, 0);
  }
  return result;
}
