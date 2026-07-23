/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x1406A1120
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRegisterThreadTerminatePort(HANDLE PortHandle)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v4; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             PortHandle,
             1u,
             LpcPortObjectType,
             CurrentThread->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  if ( result >= 0 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x70547350u);
    v4 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      PoolWithQuotaTag[1] = DmaAdapter;
      *PoolWithQuotaTag = CurrentThread[1].InitialStack;
      result = 0;
      CurrentThread[1].InitialStack = v4;
    }
    else
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741670;
    }
  }
  return result;
}
