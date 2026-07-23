/*
 * XREFs of NtRollbackRegistryTransaction @ 0x140733A80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406A5420 (CmpRollbackLightWeightTransaction.c)
 */

NTSTATUS __cdecl NtRollbackRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  volatile signed __int32 *v9; // rdi
  NTSTATUS v10; // ebx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v13, 0, sizeof(v13));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( Flags )
    {
      v10 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(
             RegistryTransactionHandle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v9 = (volatile signed __int32 *)Object;
      v10 = v5;
      if ( v5 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v13, v6, v7, v8);
        v10 = CmpRollbackLightWeightTransaction(v9);
        KiUnstackDetachProcess((__int64)v13, 0);
        if ( v10 >= 0 )
          v10 = 0;
      }
      if ( v9 )
        HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  return v10;
}
