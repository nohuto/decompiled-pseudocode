/*
 * XREFs of IopFreeBandwidthContract @ 0x14094E9BC
 * Callers:
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x14030F2F0 (IopAllocateIrpMustSucceed.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 MustSucceed; // rax
  IRP *v8; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = 0LL;
  v16 = 0;
  v15 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v16 = 0;
      v15 = 0LL;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v6);
      v8 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = Object;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        p_Event = &Event;
      }
      *(_QWORD *)(MustSucceed + 80) = p_Event;
      *(_QWORD *)(MustSucceed + 72) = &v14;
      v10 = *(_QWORD *)(MustSucceed + 184);
      v8->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v10 - 72) = 6;
      *(_QWORD *)(v10 - 24) = Object;
      *(_DWORD *)(v10 - 64) = 20;
      *(_DWORD *)(v10 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)&v15;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v8);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        v11 = &Object->Event;
        if ( !v4 )
          v11 = &Event;
        KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
      }
      result = (unsigned int)v14;
      if ( (_DWORD)v14 != -1073741670 && (_DWORD)v14 != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
