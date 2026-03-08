/*
 * XREFs of PsSetIoPriorityThread @ 0x1403579A4
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140219DB8 (CcApplyLowIoPriorityToThread.c)
 *     CmpSetIoPriorityThread @ 0x140357520 (CmpSetIoPriorityThread.c)
 *     IoSetIoPriorityHintIntoThread @ 0x140357980 (IoSetIoPriorityHintIntoThread.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x140357A24 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x14045EE2A (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1376);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1376), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    KeAbProcessBaseIoPriorityChange(a1, v6, a2);
  return v6;
}
