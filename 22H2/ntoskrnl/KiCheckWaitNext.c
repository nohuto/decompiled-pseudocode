/*
 * XREFs of KiCheckWaitNext @ 0x1402571D0
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x140256B90 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KiWaitForAllObjects @ 0x1402ED1E0 (KiWaitForAllObjects.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int8 v6; // cf
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // r10
  LARGE_INTEGER v11; // rcx
  _DWORD *v12; // rax
  _DWORD *SchedulerAssist; // r9
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v6 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  PerformanceCounter.QuadPart = 0LL;
  v7 = v6;
  if ( !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        v11 = (LARGE_INTEGER)(*(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - MEMORY[0xFFFFF780000003B0]);
      else
        v11.QuadPart = KiQueryUnbiasedInterruptTime();
      v12 = a5;
      *a4 = v11.QuadPart - *(_QWORD *)(a1 + 248) - *(_QWORD *)a2;
      *v12 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
