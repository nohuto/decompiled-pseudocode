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

__int64 __fastcall NtFlushBuffersFileEx(void *a1, char a2, __int64 a3, int a4, unsigned __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v11; // rbx
  unsigned int v12; // edi
  bool v13; // di
  struct _KTHREAD *v14; // rax
  volatile __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  unsigned int v22; // edi
  char v23; // r15
  struct _KEVENT *v24; // rdi
  __int64 Irp; // rax
  IRP *v26; // rsi
  struct _IO_STATUS_BLOCK *v27; // rax
  struct _KEVENT *v28; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v30; // r9
  struct _KEVENT *Pool; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v33; // [rsp+48h] [rbp-40h] BYREF
  __int128 v34; // [rsp+50h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  Object = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( a3 || a4 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a5 < 0x7FFFFFFF0000LL )
      v9 = a5;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, &v33);
  if ( (int)result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v12 >> 5) & 4 | 2) & v33.GrantedAccess) != 0 )
    {
      if ( (v12 & 2) != 0 )
      {
        v13 = (v12 & 4) != 0;
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        v15 = (volatile __int32 *)Object;
        v16 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
        LOBYTE(DeviceObject) = 0;
        if ( _InterlockedExchange(v15 + 29, 1) )
        {
          LOBYTE(v18) = v13;
          LOBYTE(v17) = PreviousMode;
          v11 = (struct _FILE_OBJECT *)Object;
          v22 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v17, v18, v16, &DeviceObject);
        }
        else
        {
          if ( v16 )
            *(_BYTE *)(v16 + 26) |= 1u;
          v11 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v22 = 0;
        }
        if ( !(_BYTE)DeviceObject )
        {
          v23 = 1;
          v24 = 0LL;
          goto LABEL_16;
        }
      }
      else
      {
        Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
        v24 = Pool;
        if ( Pool )
        {
          KeInitializeEvent(Pool, SynchronizationEvent, 0);
          v23 = 0;
LABEL_16:
          IopResetEvent((__int64)v11, v19, v20, v21);
          DeviceObject = IoGetRelatedDeviceObject(v11);
          Irp = IopAllocateIrpExReturn();
          v26 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v23 )
            {
              v27 = (struct _IO_STATUS_BLOCK *)a5;
              v28 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v27 = (struct _IO_STATUS_BLOCK *)&v34;
              v28 = v24;
            }
            v26->UserEvent = v28;
            v26->UserIosb = v27;
            v26->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v26->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v11;
            if ( (a2 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (a2 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (a2 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v26, (__int64)v11, 0LL, PreviousMode, v23, 2u);
            if ( !v23 )
            {
              LOBYTE(v30) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v24, v26, v30, &v34, a5);
            }
          }
          else
          {
            if ( v24 )
              ExFreePoolWithTag(v24, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v11, 0LL);
            return 3221225626LL;
          }
          return result;
        }
        v22 = -1073741670;
      }
    }
    else
    {
      v22 = -1073741790;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v11);
    return v22;
  }
  return result;
}
