/*
 * XREFs of PsRemoveCreateThreadNotifyRoutine @ 0x14090C510
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14027BF80 (ExDereferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExCompareExchangeCallBack @ 0x1403A8BFC (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall PsRemoveCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *v8; // rbx
  volatile signed __int32 *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3);
    v8 = v4;
    if ( v4 )
      break;
LABEL_6:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6, v7);
      return -1073741702;
    }
  }
  if ( (PCREATE_THREAD_NOTIFY_ROUTINE)v4[1].Count != NotifyRoutine
    || !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v8);
    goto LABEL_6;
  }
  v10 = &PspCreateThreadNotifyRoutineNonSystemCount;
  if ( !v8[2].Count )
    v10 = &PspCreateThreadNotifyRoutineCount;
  _InterlockedAdd(v10, 0xFFFFFFFF);
  ExDereferenceCallBackBlock((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v3, v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12, v13);
  ExWaitForRundownProtectionRelease(v8);
  ExFreePoolWithTag(v8, 0);
  return 0;
}
