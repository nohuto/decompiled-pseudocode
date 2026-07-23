/*
 * XREFs of NtOpenRegistryTransaction @ 0x1408685D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ObOpenObjectByName @ 0x1406CEA10 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v7; // di
  NTSTATUS v8; // ebx
  char PreviousMode; // r14
  __int64 v10; // rax
  HANDLE Handle[5]; // [rsp+40h] [rbp-28h] BYREF

  Handle[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v7 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)RegistryTransactionHandle < 0x7FFFFFFF0000LL )
        v10 = (__int64)RegistryTransactionHandle;
      *(_QWORD *)v10 = 0LL;
    }
    else
    {
      *RegistryTransactionHandle = 0LL;
    }
    v8 = ObOpenObjectByName(
           (__int64)ObjAttributes,
           (__int64)CmRegistryTransactionType,
           PreviousMode,
           0LL,
           DesiredAccess,
           0LL,
           (__int64)Handle);
    if ( v8 >= 0 )
    {
      *RegistryTransactionHandle = Handle[0];
      Handle[0] = 0LL;
      v8 = 0;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = -1073741431;
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  if ( v7 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v8;
}
