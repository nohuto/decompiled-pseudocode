/*
 * XREFs of HalpInterruptRestoreClock @ 0x1403861C8
 * Callers:
 *     HalpPostSleepMP @ 0x140995854 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037861C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x140378710 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378770 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x140378894 (HalpInterruptApplyOverrides.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptRestoreClock()
{
  unsigned int v0; // ebx
  unsigned int v1; // esi
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 *v5; // rdi
  _QWORD *Lines; // rax
  ULONG_PTR *v7; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v0 = 0;
  v1 = HalpTimerCriticalClockSourceCount;
  if ( HalpTimerCriticalClockSourceCount )
  {
    v5 = &HalpTimerCriticalClockSource;
    while ( 1 )
    {
      v10 = *v5;
      HalpInterruptApplyOverrides((unsigned int *)&v10, 0LL, 0LL);
      Lines = HalpInterruptFindLines((unsigned int *)&v10);
      if ( !Lines )
        break;
      v7 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
      if ( !v7 )
      {
        HalpInterruptLastProblem = 17;
LABEL_11:
        v9 = -1073741810;
LABEL_12:
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 2uLL, v9);
      }
      v9 = HalpInterruptSetLineStateInternal((__int64)v7, (__int64)&v10, *(_QWORD *)(v8 + 40));
      if ( v9 < 0 )
        goto LABEL_12;
      ++v0;
      ++v5;
      if ( v0 >= v1 )
        goto LABEL_2;
    }
    HalpInterruptLastProblem = 18;
    goto LABEL_11;
  }
LABEL_2:
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  return (*(__int64 (__fastcall **)(__int64))(v3 + 120))(InternalData);
}
