/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x140227260
 * Callers:
 *     KiIdleSchedule @ 0x140228140 (KiIdleSchedule.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140228820 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     PpmCheckCustomRun @ 0x1402D1B4C (PpmCheckCustomRun.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14035867C (KiCaptureTotalCyclesCurrentThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036A030 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSelectIdleProcessor @ 0x14057528C (KiSelectIdleProcessor.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v7 = __rdtsc();
  v8 = v7 - *(_QWORD *)(a1 + 33152);
  v9 = v8 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v9;
  v10 = *(unsigned int *)(a1 + 33208);
  v11 = *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a1 + 33152) = v7;
  v12 = v11 + ((v8 * v10) >> 16);
  if ( v12 > 0xFFFFFFFF )
    LODWORD(v12) = -1;
  v13 = (*(_BYTE *)(a2 + 2) & 0xBE) == 0;
  *(_DWORD *)(a2 + 80) = v12;
  if ( !v13 )
    KiEndThreadAccountingPeriodEx(a1, a2, v8, a4);
  result = v9;
  if ( a3 )
    *a3 = v7;
  return result;
}
