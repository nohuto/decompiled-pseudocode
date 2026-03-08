/*
 * XREFs of HalpInterruptRestoreClock @ 0x140503318
 * Callers:
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x14028EEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403796D0 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x140518598 (HalpInterruptSetProblemEx.c)
 */

__int64 HalpInterruptRestoreClock()
{
  unsigned int v0; // ebx
  unsigned int v1; // esi
  __int64 *v2; // rdi
  _QWORD *Lines; // rax
  ULONG_PTR *v4; // rax
  __int64 v5; // r9
  int v6; // eax
  __int64 InternalData; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v0 = 0;
  v1 = HalpTimerCriticalClockSourceCount;
  if ( HalpTimerCriticalClockSourceCount )
  {
    v2 = &HalpTimerCriticalClockSource;
    while ( 1 )
    {
      v10 = *v2;
      HalpInterruptApplyOverrides(&v10, 0LL, 0LL);
      Lines = HalpInterruptFindLines((unsigned int *)&v10);
      if ( !Lines )
        break;
      v4 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
      if ( !v4 )
      {
        HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1927);
LABEL_10:
        v6 = -1073741810;
LABEL_11:
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 2uLL, v6);
      }
      v6 = HalpInterruptSetLineStateInternal((__int64)v4, (__int64)&v10, *(_QWORD *)(v5 + 40));
      if ( v6 < 0 )
        goto LABEL_11;
      ++v0;
      ++v2;
      if ( v0 >= v1 )
        goto LABEL_7;
    }
    HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1913);
    goto LABEL_10;
  }
LABEL_7:
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  return (*(__int64 (__fastcall **)(__int64))(v8 + 120))(InternalData);
}
