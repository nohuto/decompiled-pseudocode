/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1407CCAC0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x1407C9E94 (AlpcpTrackPortReferences.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessage @ 0x1407CCD50 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        HANDLE Handle,
        int a2,
        __m256i *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile void *Address,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edi
  KPROCESSOR_MODE PreviousMode; // r14
  int v15; // esi
  int v16; // r9d
  PVOID v17; // rbx
  struct _KTHREAD *v19; // rax
  bool v20; // zf
  int v22; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  v13 = a2 & 0xFFFF0000;
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences((__int64)Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( a3 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( a5 )
        {
          LOBYTE(v22) = PreviousMode;
          v15 = AlpcpProcessSynchronousRequest((int)v17, v13, (int)a3, a4, a5, a6, Address, a8, v22);
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
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v15 = AlpcpReceiveMessage(v24, a5, a6, Address, a8);
        if ( _bittestandreset((signed __int32 *)&v24[6], 2u) )
        {
          AlpcpSignal((__int64)v24, 0, 0, v16);
          if ( v24[4] )
            ObfDereferenceObject((PVOID)v24[4]);
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
        v15 = AlpcpSendMessage((__int64)v24, a3, a4, PreviousMode);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v17);
  }
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable++ == -1;
  if ( v20
    && ($C71981A45BEB2B45F82C232A7085991E *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v15;
}
