/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x1402C1AA8
 * Callers:
 *     FsRtlAddToTunnelCacheEx @ 0x1407524E0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140752810 (FsRtlFindInTunnelCacheEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3, char a4)
{
  LONG result; // eax

  if ( *(_QWORD *)(a1 + 48) > a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 48) < a2 )
    return -1;
  result = RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 8 * (*(_DWORD *)(a1 + 56) & 2 | 8LL)), a3, 1u);
  if ( !result )
  {
    if ( a4 )
      return RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 8 * (*(_DWORD *)(a1 + 56) & 2 | 8LL)), a3, 0);
  }
  return result;
}
