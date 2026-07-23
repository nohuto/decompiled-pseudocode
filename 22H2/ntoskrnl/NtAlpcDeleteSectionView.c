/*
 * XREFs of NtAlpcDeleteSectionView @ 0x140681B70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     AlpcpDereferenceBlobEx @ 0x1405E9FC0 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     AlpcpEnumerateResourcesPort @ 0x1406DAF48 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDeleteView @ 0x1406DB348 (AlpcpDeleteView.c)
 */

NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  struct _KTHREAD *CurrentThread; // rax
  signed int v5; // ebx
  PADAPTER_OBJECT v6; // rdi
  signed __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  ULONG_PTR v11; // rdi
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v5 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v5 = ObReferenceObjectByHandle(
           PortHandle,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v5 >= 0 )
    {
      BugCheckParameter2[0] = (ULONG_PTR)ViewBase;
      v6 = DmaAdapter;
      BugCheckParameter2[1] = 0LL;
      v7 = (signed __int64 *)&DmaAdapter[22];
      while ( 1 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)v7, 0LL);
        v10 = AlpcpEnumerateResourcesPort(v6, v8, v9, BugCheckParameter2);
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        if ( v10 != -1073741267 )
          break;
        v6 = DmaAdapter;
      }
      v11 = BugCheckParameter2[1];
      if ( BugCheckParameter2[1] )
      {
        v5 = (unsigned __int8)AlpcpDeleteView(BugCheckParameter2[1]) == 0 ? 0xC0000056 : 0;
        AlpcpDereferenceBlobEx(v11, 1);
      }
      else
      {
        v5 = -1073741503;
      }
      HalPutDmaAdapter(DmaAdapter);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
