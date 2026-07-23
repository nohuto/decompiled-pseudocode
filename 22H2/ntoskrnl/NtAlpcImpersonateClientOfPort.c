/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x1405E9A10
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1408C2030 (NtImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     AlpcpImpersonateMessage @ 0x1405E9BE0 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1405E9E40 (AlpcpCaptureIdMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1405E9F00 (AlpcpReferenceConnectedPort.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     SeImpersonateClientEx @ 0x140714780 (SeImpersonateClientEx.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2C24 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _DMA_ADAPTER *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned int v9; // r15d
  unsigned __int64 v10; // rdi
  int v11; // r12d
  BOOL v12; // r13d
  __int64 v13; // r9
  NTSTATUS v14; // r14d
  struct _DMA_ADAPTER *v15; // rsi
  ULONG_PTR v16; // rdi
  __int64 v18; // rax
  int Object; // [rsp+20h] [rbp-A8h]
  int v20; // [rsp+30h] [rbp-98h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-90h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-88h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-78h] BYREF
  PVOID v24; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+E8h] [rbp+20h] BYREF

  v6 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = 0;
  v20 = 0;
  DmaAdapter = 0LL;
  BugCheckParameter2[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v24) = PreviousMode;
  if ( Message )
  {
    AlpcpCaptureIdMessage(Message, &v25, &v20);
    v9 = v25;
    if ( !v25 )
    {
LABEL_28:
      v15 = DmaAdapter;
      v14 = -1073741811;
      goto LABEL_11;
    }
    PreviousMode = (char)v24;
  }
  else
  {
    v9 = v25;
  }
  v10 = (unsigned __int64)Flags >> 2;
  if ( (unsigned int)((unsigned __int64)Flags >> 2) > 3 )
    goto LABEL_28;
  v11 = (unsigned __int8)Flags & 1;
  v12 = (((4 * (_DWORD)v10) | 2) & (unsigned int)Flags) != 0LL;
  v24 = 0LL;
  v14 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &v24, 0LL);
  v15 = (struct _DMA_ADAPTER *)v24;
  if ( v14 < 0 )
    goto LABEL_11;
  if ( v9 )
  {
    v14 = AlpcpLookupMessage((__int64)v24, v9, v20, v13, BugCheckParameter2);
    if ( v14 >= 0 )
    {
      Object = v10;
      v16 = BugCheckParameter2[0];
      v14 = AlpcpImpersonateMessage((_DWORD)v15, BugCheckParameter2[0], v11, v12, Object);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v16);
      AlpcpUnlockBlob(v16);
    }
  }
  else
  {
    v18 = AlpcpReferenceConnectedPort(v24);
    v6 = (struct _DMA_ADAPTER *)v18;
    if ( !v18 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 256) & 0x10000) == 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 416) & 0x400) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    ClientContext = *(struct _SECURITY_CLIENT_CONTEXT *)(v18 + 64);
    if ( v12 )
    {
      if ( (int)v10 > ClientContext.SecurityQos.ImpersonationLevel )
      {
        v14 = -1073741790;
        goto LABEL_11;
      }
      ClientContext.SecurityQos.ImpersonationLevel = v10;
    }
    v14 = SeImpersonateClientEx(&ClientContext, 0LL);
  }
LABEL_11:
  if ( v6 )
    HalPutDmaAdapter(v6);
  if ( v15 )
    HalPutDmaAdapter(v15);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v14;
}
