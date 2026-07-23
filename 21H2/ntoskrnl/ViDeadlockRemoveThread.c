/*
 * XREFs of ViDeadlockRemoveThread @ 0x1409E0BE8
 * Callers:
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405A25B8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DF338 (VfDeadlockReleaseResource.c)
 *     ViDeadlockEmptyDatabase @ 0x1409E0314 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x1409C7384 (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x1409E0818 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockRemoveThread(ULONG_PTR a1, int a2)
{
  _QWORD *v3; // r9
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r8
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((int *)ViDeadlockGlobals + 8282) > 1024 )
    a2 = 1;
  if ( !a2 && *(_DWORD *)(a1 + 40) )
  {
    ViDeadlockPreprocessOptions(byte_140C12F50, "Terminated thread 0x%p owns lock.", 4106LL, *(_QWORD *)a1, a1, 0LL);
    VfReportIssueWithOptions(0xC4u, 0x100AuLL, *(_QWORD *)a1, a1, 0LL, byte_140C12F50);
  }
  v3 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 2051);
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v4 + 8) != a1 + 24 || (v5 = *(_QWORD **)(a1 + 32), *v5 != a1 + 24) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_QWORD *)a1 >> 12;
  result = 1023 * (v6 / 0x3FF);
  v8 = 16 * (v6 % 0x3FF);
  v9 = 2 * (v6 % 0x3FF + 1026);
  if ( *(_QWORD *)(v8 + v3[2050]) != v8 + v3[2050] )
    return VfUtilAddressRangeRemove(&v3[v9], *(_QWORD *)a1, 2200LL);
  v3[v9] = 0LL;
  v3[v9 + 1] = 0LL;
  return result;
}
