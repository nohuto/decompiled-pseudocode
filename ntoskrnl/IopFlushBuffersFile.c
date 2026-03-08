/*
 * XREFs of IopFlushBuffersFile @ 0x14076DF74
 * Callers:
 *     NtFlushBuffersFileEx @ 0x14076DEE0 (NtFlushBuffersFileEx.c)
 *     IopIoRingDispatchFlush @ 0x1409463CC (IopIoRingDispatchFlush.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     IopExceptionFilter @ 0x1405530E8 (IopExceptionFilter.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x14076E298 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFlushBuffersFile(
        struct _FILE_OBJECT *Object,
        char a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        PVOID Objecta,
        _OWORD *a7,
        unsigned __int64 a8)
{
  struct _FILE_OBJECT *v8; // rsi
  struct _KEVENT *v9; // r12
  char v10; // r14
  PVOID v11; // r15
  unsigned __int64 v12; // r13
  bool v13; // dl
  __int64 v14; // rcx
  ULONG Flags; // edi
  char v16; // di
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v21; // rdx
  __int64 Irp; // rax
  __int64 v23; // r14
  char v24; // dl
  bool v25; // cl
  _OWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  struct _KEVENT *Pool2; // rax
  int v31; // [rsp+20h] [rbp-78h]
  bool v32; // [rsp+40h] [rbp-58h]
  char PreviousMode; // [rsp+41h] [rbp-57h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  _OWORD v35[4]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+18h] BYREF

  v8 = Object;
  v35[0] = 0LL;
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v37) = 0;
  if ( a3 || a4 )
    goto LABEL_47;
  v11 = Objecta;
  v12 = a8;
  if ( Objecta )
  {
    if ( !a8 )
      goto LABEL_5;
LABEL_47:
    v19 = -1073741811;
    goto LABEL_34;
  }
  if ( !a8 )
    goto LABEL_47;
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v13 = (Object->Flags & 2) != 0 && !Objecta;
  v32 = v13;
  if ( CurrentThread->PreviousMode && !Objecta )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( a8 < 0x7FFFFFFF0000LL )
      v14 = a8;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  Flags = v8->Flags;
  if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & a5) == 0 )
  {
    v19 = -1073741790;
    goto LABEL_34;
  }
  if ( !v13 )
  {
    if ( v11 )
    {
LABEL_24:
      RelatedDeviceObject = IoGetRelatedDeviceObject(v8);
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v21, 0LL);
      v23 = Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v8;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        v24 = PreviousMode;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_DWORD *)(Irp + 16) = 0;
        if ( v11 )
        {
          ObfReferenceObjectWithTag(v11, 0x49526F49u);
          *(_DWORD *)(v23 + 16) |= 0x200000u;
          *(_QWORD *)(v23 + 96) = v11;
          v26 = a7;
          v25 = v32;
          v24 = PreviousMode;
        }
        else
        {
          v25 = v32;
          if ( v32 )
          {
            *(_QWORD *)(Irp + 80) = 0LL;
            v26 = (_OWORD *)v12;
          }
          else
          {
            *(_QWORD *)(Irp + 80) = v9;
            *(_DWORD *)(Irp + 16) = 4;
            v26 = v35;
          }
        }
        *(_QWORD *)(v23 + 72) = v26;
        *(_QWORD *)(v23 + 88) = 0LL;
        v27 = *(_QWORD *)(v23 + 184);
        *(_BYTE *)(v27 - 72) = 9;
        *(_QWORD *)(v27 - 24) = v8;
        if ( (a2 & 1) != 0 )
        {
          *(_BYTE *)(v27 - 71) = 2;
        }
        else if ( (a2 & 2) != 0 )
        {
          *(_BYTE *)(v27 - 71) = 3;
        }
        else if ( (a2 & 4) != 0 )
        {
          *(_BYTE *)(v27 - 71) = 4;
        }
        LOBYTE(v31) = v24;
        v19 = IopSynchronousServiceTail(RelatedDeviceObject, v23, v8, 0LL, v31, v25, 2);
        v8 = 0LL;
        if ( !v32 && !v11 )
        {
          LOBYTE(v28) = PreviousMode;
          v19 = IopSynchronousApiServiceTail(v19, v9, v23, v28, v35, v12);
          v9 = 0LL;
        }
      }
      else
      {
        v19 = -1073741670;
      }
      v10 = v37;
      goto LABEL_34;
    }
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    v9 = Pool2;
    if ( !Pool2 )
    {
      v19 = -1073741670;
      goto LABEL_34;
    }
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
LABEL_21:
    if ( !v11 && (v8->Flags & 0x4000000) == 0 )
      KeResetEvent(&v8->Event);
    goto LABEL_24;
  }
  v16 = (Flags & 4) != 0;
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v18 = KeAbPreAcquire((__int64)&v8->Lock, 0LL);
  LOBYTE(v37) = 0;
  if ( _InterlockedExchange((volatile __int32 *)&v8->Busy, 1) )
  {
    v19 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&v8->Type, PreviousMode, v16, v18, &v37);
  }
  else
  {
    if ( v18 )
      *(_BYTE *)(v18 + 18) = 1;
    ObfReferenceObject(v8);
    v19 = 0;
  }
  if ( !(_BYTE)v37 )
  {
    LOBYTE(v37) = 1;
    goto LABEL_21;
  }
LABEL_34:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v8 )
  {
    if ( v10 )
      IopReleaseFileObjectLock((volatile __int32 *)&v8->Type);
    ObfDereferenceObject(v8);
  }
  return v19;
}
