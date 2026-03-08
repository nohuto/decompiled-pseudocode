/*
 * XREFs of PsSetPagePriorityThread @ 0x14020AA94
 * Callers:
 *     CcCompleteAsyncRead @ 0x14020A77C (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14020B9E0 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x140356A74 (SmSetThreadPagePriority.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x14045EE2A (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1376);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1376), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
