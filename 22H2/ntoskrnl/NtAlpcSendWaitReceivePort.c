/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1405E79F0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x1402056F0 (AlpcpSignal.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     memset @ 0x140413800 (memset.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E6EE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1405E7C70 (AlpcpReceiveMessage.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x14069B178 (AlpcpTrackPortReferences.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v13; // edi
  char PreviousMode; // r14
  NTSTATUS v15; // esi
  int v16; // r9d
  struct _DMA_ADAPTER *v17; // rbx
  struct _KTHREAD *v19; // rax
  $C459BD0D405E8E46662177FB3D0A143F *v21; // rcx
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = Flags & 0xFFFF0000;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = (struct _DMA_ADAPTER *)Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( SendMessageA )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( ReceiveMessage )
        {
          v15 = AlpcpProcessSynchronousRequest(
                  (__int64)v17,
                  v13,
                  (__int128 *)&SendMessageA->u1.s1.DataLength,
                  (__int64)SendMessageAttributes,
                  (unsigned __int64)ReceiveMessage,
                  BufferLength,
                  (unsigned int *)ReceiveMessageAttributes,
                  Timeout,
                  PreviousMode);
        }
        else
        {
          v15 = -1073740027;
        }
      }
      else
      {
        v15 = -1073741584;
      }
    }
    else
    {
      v24[0] = v17;
      LODWORD(v24[6]) = v13;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v15 = AlpcpReceiveMessage(v24, ReceiveMessage, BufferLength, ReceiveMessageAttributes, Timeout);
        if ( _bittestandreset((signed __int32 *)&v24[6], 2u) )
        {
          AlpcpSignal((__int64)v24, 0LL, 0LL, v16);
          if ( v24[4] )
            HalPutDmaAdapter((PADAPTER_OBJECT)v24[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v24[6]) = v13 | 4;
        memset(&v24[3], 0, 24);
        v15 = AlpcpSendMessage((__int64)v24, (__m256i *)SendMessageA, (__int64)SendMessageAttributes, PreviousMode);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    HalPutDmaAdapter(v17);
  }
  v19 = KeGetCurrentThread();
  if ( v19->KernelApcDisable++ == -1 )
  {
    v21 = &v19->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v21->ApcState.ApcListHead[0].Flink != v21 && !v19->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v21);
  }
  return v15;
}
