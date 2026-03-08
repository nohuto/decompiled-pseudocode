/*
 * XREFs of AlpciSendDeferredMessageBeforeWait @ 0x14033E1E0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x1407C9E94 (AlpcpTrackPortReferences.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 */

__int64 __fastcall AlpciSendDeferredMessageBeforeWait(
        __int64 a1,
        void *a2,
        int a3,
        __int64 a4,
        PVOID Object,
        KPROCESSOR_MODE a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  unsigned __int8 v12; // bp
  NTSTATUS v13; // edi
  PVOID v14; // rdi
  __int64 v15; // rdx
  PVOID v17[11]; // [rsp+30h] [rbp-58h] BYREF

  memset(v17, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  v11 = a3 & 0xFFFF0000;
  --CurrentThread->KernelApcDisable;
  *(_OWORD *)a1 = 0LL;
  if ( (v11 & 0x20000) != 0 )
  {
    v13 = -1073741811;
  }
  else
  {
    v12 = a6;
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(a2, 1u, AlpcPortObjectType, a6, &Object, 0LL);
    if ( v13 >= 0 )
    {
      v14 = Object;
      if ( (v11 & 0x40000) != 0 )
        AlpcpTrackPortReferences(Object);
      v17[0] = v14;
      LODWORD(v17[6]) = v11 | 4;
      memset(&v17[3], 0, 24);
      v13 = AlpcpSendMessage(v17, a4, 0LL, v12);
      if ( v13 < 0 )
      {
        ObfDereferenceObject(v17[0]);
      }
      else
      {
        *(PVOID *)a1 = v17[4];
        LOBYTE(v15) = 1;
        *(PVOID *)(a1 + 8) = v17[0];
        AlpcpSignal(v17, v15, 0LL);
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
