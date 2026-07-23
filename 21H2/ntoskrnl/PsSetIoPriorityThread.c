/*
 * XREFs of PsSetIoPriorityThread @ 0x140302040
 * Callers:
 *     CmpSetIoPriorityThread @ 0x1402509A4 (CmpSetIoPriorityThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x140301058 (CcApplyLowIoPriorityToThread.c)
 *     IoApplyPriorityInfoThread @ 0x140302290 (IoApplyPriorityInfoThread.c)
 *     IoSetIoPriorityHintIntoThread @ 0x140303160 (IoSetIoPriorityHintIntoThread.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1403020C0 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x1405A80D4 (EtwTracePriority.c)
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
