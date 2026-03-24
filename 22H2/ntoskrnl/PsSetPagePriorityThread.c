/*
 * XREFs of PsSetPagePriorityThread @ 0x140277C64
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140277BC0 (IoApplyPriorityInfoThread.c)
 *     CcCompleteAsyncRead @ 0x140277CC0 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x1403135D0 (SmSetThreadPagePriority.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x1405A7DE4 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1296);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1296), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
