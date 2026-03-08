/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x1407041D4
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140775FD8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCheckNotifyForDelete @ 0x14093CF20 (FsRtlCheckNotifyForDelete.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14093CF84 (FsRtlCheckNotifyForDeleteLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x140704270 (FsRtlNotifyCompleteIrp.c)
 */

__int64 __fastcall FsRtlNotifyCompleteIrpList(__int64 a1, int a2)
{
  __int64 **v2; // rbx
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 result; // rax

  v2 = (__int64 **)(a1 + 48);
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 72) &= ~2u;
  *(_DWORD *)(a1 + 108) = 0;
  do
  {
    v4 = *v2;
    if ( (__int64 **)(*v2)[1] != v2 || (v5 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *v2 = v5;
    v5[1] = (__int64)v2;
    *v4 = 0LL;
    result = FsRtlNotifyCompleteIrp((PIRP)(v4 - 21), 1);
  }
  while ( a2 && *v2 != (__int64 *)v2 );
  return result;
}
