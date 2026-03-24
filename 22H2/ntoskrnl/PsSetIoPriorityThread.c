/*
 * XREFs of PsSetIoPriorityThread @ 0x140277970
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140276988 (CcApplyLowIoPriorityToThread.c)
 *     IoApplyPriorityInfoThread @ 0x140277BC0 (IoApplyPriorityInfoThread.c)
 *     IoSetIoPriorityHintIntoThread @ 0x140278A90 (IoSetIoPriorityHintIntoThread.c)
 *     CmpSetIoPriorityThread @ 0x14032B854 (CmpSetIoPriorityThread.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1402779F0 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x1405A7DE4 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1296);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1296), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    KeAbProcessBaseIoPriorityChange(a1);
  return v6;
}
