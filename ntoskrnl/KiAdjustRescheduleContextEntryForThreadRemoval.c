/*
 * XREFs of KiAdjustRescheduleContextEntryForThreadRemoval @ 0x1402AE004
 * Callers:
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiSearchForNewThread @ 0x140260460 (KiSearchForNewThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiSetSystemAffinityThread @ 0x1402AC3AC (KiSetSystemAffinityThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402ADC48 (KiDeferGroupSchedulingPreemption.c)
 *     KiHandleDeferredPreemption @ 0x1402AE8D0 (KiHandleDeferredPreemption.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039979C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiAdjustRescheduleContextForParking @ 0x14057DB98 (KiAdjustRescheduleContextForParking.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAdjustRescheduleContextEntryForThreadRemoval(__int64 *a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( a3 && (a1[4] & 0x20) == 0 )
    *((_BYTE *)a1 + 34) |= 1u;
  *((_BYTE *)a1 + 34) ^= (*((_BYTE *)a1 + 34) ^ (2 * a4)) & 2;
  a1[2] = *(_QWORD *)(v4 + 24);
  *((_BYTE *)a1 + 32) = a1[4] & 0xC0 | 5;
  result = *(_QWORD *)(v4 + 24);
  *((_BYTE *)a1 + 33) &= ~1u;
  a1[3] = result;
  return result;
}
