/*
 * XREFs of PsRemoveLoadImageNotifyRoutine @ 0x1409B2D60
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14034C120 (ExDereferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return -1073741702;
    }
  }
  if ( (PLOAD_IMAGE_NOTIFY_ROUTINE)v4[1].Count != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v5);
    goto LABEL_6;
  }
  _InterlockedAdd(&PspLoadImageNotifyRoutineCount, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspLoadImageNotifyRoutine.Ptr + v3, v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0;
}
