/*
 * XREFs of NtFlushBuffersFileEx @ 0x14067D120
 * Callers:
 *     NtFlushBuffersFile @ 0x14067D0F0 (NtFlushBuffersFile.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C350 (IopVerifierExAllocatePool.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // r12
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  unsigned int v12; // edi
  char v13; // di
  struct _KTHREAD *v14; // rax
  volatile __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  NTSTATUS v20; // edi
  char v21; // r15
  struct _KEVENT *v22; // rdi
  __int64 Irp; // rax
  IRP *v24; // rsi
  PIO_STATUS_BLOCK v25; // rax
  struct _KEVENT *v26; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v28; // r9
  struct _KEVENT *Pool; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v31; // [rsp+48h] [rbp-40h] BYREF
  __int128 v32; // [rsp+50h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  v5 = Flags;
  Object = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  if ( Parameters || ParametersSize )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v31);
  if ( result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v31.GrantedAccess) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        v13 = (v12 & 4) != 0;
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = (volatile __int32 *)Object;
        v16 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(DeviceObject) = 0;
        if ( _InterlockedExchange(v15 + 29, 1) )
        {
          v11 = (struct _FILE_OBJECT *)Object;
          v20 = IopWaitAndAcquireFileObjectLock(
                  (volatile signed __int32 *)Object,
                  PreviousMode,
                  v13,
                  v16,
                  &DeviceObject);
        }
        else
        {
          if ( v16 )
            *(_BYTE *)(v16 + 26) |= 1u;
          v11 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v20 = 0;
        }
        if ( !(_BYTE)DeviceObject )
        {
          v21 = 1;
          v22 = 0LL;
          goto LABEL_16;
        }
      }
      else
      {
        Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
        v22 = Pool;
        if ( Pool )
        {
          KeInitializeEvent(Pool, SynchronizationEvent, 0);
          v21 = 0;
LABEL_16:
          IopResetEvent((__int64)v11, v17, v18, v19);
          DeviceObject = IoGetRelatedDeviceObject(v11);
          Irp = IopAllocateIrpExReturn();
          v24 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v21 )
            {
              v25 = IoStatusBlock;
              v26 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v25 = (PIO_STATUS_BLOCK)&v32;
              v26 = v22;
            }
            v24->UserEvent = v26;
            v24->UserIosb = v25;
            v24->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v11;
            if ( (v5 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (v5 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (v5 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v24, (__int64)v11, 0LL, PreviousMode, v21, 2u);
            if ( !v21 )
            {
              LOBYTE(v28) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v22, v24, v28, &v32, IoStatusBlock);
            }
          }
          else
          {
            if ( v22 )
              ExFreePoolWithTag(v22, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v11, 0LL);
            return -1073741670;
          }
          return result;
        }
        v20 = -1073741670;
      }
    }
    else
    {
      v20 = -1073741790;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    return v20;
  }
  return result;
}
