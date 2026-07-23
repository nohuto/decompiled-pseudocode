/*
 * XREFs of NtOpenKeyTransactedEx @ 0x14066DC10
 * Callers:
 *     NtOpenKeyTransacted @ 0x1408685B0 (NtOpenKeyTransacted.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x14066E000 (CmpTransDereferenceTransaction.c)
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebp
  int v9; // r15d
  BOOLEAN v10; // al
  struct _KTHREAD *v11; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rbx
  NTSTATUS v15; // edi
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v19; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = (int)ObjectAttributes;
  v9 = (int)KeyHandle;
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v11 = KeGetCurrentThread();
  if ( !v10 )
  {
    KeLeaveCriticalRegionThread((__int64)v11);
    return -1073741431;
  }
  PreviousMode = v11->PreviousMode;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v14 = (__int64)Object;
  v15 = v13;
  if ( v13 == -1073741788 )
  {
    v19 = 0LL;
    v16 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v19,
            0LL);
    v14 = (__int64)v19;
    v15 = v16;
    goto LABEL_4;
  }
  if ( v13 >= 0 )
  {
    v14 = (unsigned __int64)Object | 1;
LABEL_4:
    if ( v15 >= 0 )
      v15 = CmOpenKey(v9, DesiredAccess, v7, OpenOptions, v14);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v15;
}
