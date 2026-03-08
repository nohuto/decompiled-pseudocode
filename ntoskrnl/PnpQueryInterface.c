/*
 * XREFs of PnpQueryInterface @ 0x1407F8C60
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x140560CA8 (PnprQueryReplaceFeatures.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1407F8574 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x1407F8628 (PnpGetDeviceLocationStrings.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140821C18 (PiGetDmaAdapterFromBusInterface.c)
 *     IoQueryInterface @ 0x140822260 (IoQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x1408222B0 (IopQueryInterfaceRecurseUp.c)
 *     PnprIdentifyUnits @ 0x1409630EC (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140969F68 (IopQueryBusResourceUpdateInterface.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14096C598 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipUnprotectDevice @ 0x14096C668 (PipUnprotectDevice.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140240A5C (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopBuildSynchronousFsdRequest @ 0x1407F8DE0 (IopBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall PnpQueryInterface(
        _QWORD *Object,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rdi
  IRP *v11; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v13; // ebx
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x49706E50u);
  v11 = (IRP *)IopBuildSynchronousFsdRequest(
                 27,
                 (_DWORD)AttachedDeviceReferenceWithTag,
                 0,
                 0,
                 0LL,
                 (__int64)&Event,
                 (__int64)&v15,
                 retaddr);
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->RequestorMode = 0;
    v11->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    v13 = IofCallDriver(AttachedDeviceReferenceWithTag, v11);
    if ( v13 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = v15;
    }
  }
  else
  {
    v13 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return v13;
}
