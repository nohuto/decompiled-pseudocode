/*
 * XREFs of HalpQueryPccInterface @ 0x140932B30
 * Callers:
 *     HalpAcquirePccInterface @ 0x1409328F4 (HalpAcquirePccInterface.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1407F8DE0 (IopBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall HalpQueryPccInterface(
        PDEVICE_OBJECT DeviceObject,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v8; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v10; // ebx
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  memset(a6, 0, 0x80uLL);
  a6[8] = a5;
  *a6 = 65664;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v8 = (IRP *)IopBuildSynchronousFsdRequest(
                0x1Bu,
                (__int64)AttachedDeviceReference,
                0LL,
                0,
                0LL,
                (__int64)&Event,
                (__int64)&v12);
  if ( v8 )
  {
    CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
    v8->RequestorMode = 0;
    v8->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_PCC_INTERFACE_STANDARD;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65664;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    v10 = IofCallDriver(AttachedDeviceReference, v8);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v12;
    }
  }
  else
  {
    v10 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v10;
}
