/*
 * XREFs of WmipForwardWmiIrp @ 0x14069CE70
 * Callers:
 *     WmipQuerySetExecuteSI @ 0x14069C72C (WmipQuerySetExecuteSI.c)
 *     WmipSendWmiIrp @ 0x14069CD88 (WmipSendWmiIrp.c)
 *     WmipQueryAllData @ 0x14069DF2C (WmipQueryAllData.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140847A74 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipSetTraceNotify @ 0x140869620 (WmipSetTraceNotify.c)
 * Callees:
 *     WmipFindRegEntryByProviderId @ 0x140208D1C (WmipFindRegEntryByProviderId.c)
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     WmipUpdateDeviceStackSize @ 0x140869A6C (WmipUpdateDeviceStackSize.c)
 *     WmipTranslatePDOInstanceNames @ 0x14086C758 (WmipTranslatePDOInstanceNames.c)
 */

__int64 __fastcall WmipForwardWmiIrp(
        PIRP Irp,
        unsigned __int8 a2,
        unsigned int a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 RegEntryByProviderId; // rax
  __int64 v10; // rdi
  int v11; // eax
  PDEVICE_OBJECT v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  CCHAR v16; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  __int64 v20; // rdx
  NTSTATUS Status; // esi
  __int64 result; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  unsigned int v25; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  v6 = a2;
  memset(&Event, 0, sizeof(Event));
  RegEntryByProviderId = WmipFindRegEntryByProviderId(a3);
  v10 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
  {
    v11 = *(_DWORD *)(RegEntryByProviderId + 48);
    if ( (v11 & 0x20000000) == 0 )
    {
      v12 = *(PDEVICE_OBJECT *)(v10 + 16);
      if ( (v11 & 0x10000000) != 0 )
      {
        v25 = 0;
        v23 = (*(__int64 (__fastcall **)(_QWORD, UNICODE_STRING *, _QWORD, __int64, PDEVICE_OBJECT, unsigned int *))&v12->Type)(
                v6,
                a4,
                a5,
                a6,
                v12,
                &v25);
        Irp->IoStatus.Information = v25;
        Irp->IoStatus.Status = v23;
        WmipUnreferenceRegEntry(v10);
        return v23;
      }
      else
      {
        if ( (_BYTE)v6 != 11 && (_BYTE)v6 != 8 )
        {
          v13 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnpidGuid;
          if ( !v13 )
            v13 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
          if ( !v13 )
            goto LABEL_36;
          v14 = *(_QWORD *)(a6 + 24) - WmipDataProviderPnPIdInstanceNamesGuid;
          if ( !v14 )
            v14 = *(_QWORD *)(a6 + 32) - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
          if ( !v14 )
          {
LABEL_36:
            if ( *(_QWORD *)(v10 + 24) )
              v12 = WmipServiceDeviceObject;
          }
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v12);
        v16 = AttachedDeviceReference->StackSize + 1;
        if ( v16 <= WmipServiceDeviceObject->StackSize || AttachedDeviceReference == WmipServiceDeviceObject )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)CmpCompleteFlushAndPurgeIrp;
          CurrentStackLocation[-1].Context = &Event;
          CurrentStackLocation[-1].Control = -32;
          v18 = Irp->Tail.Overlay.CurrentStackLocation;
          v18[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)a6;
          v18[-1].MajorFunction = 23;
          v18[-1].MinorFunction = v6;
          v18[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v12;
          v18[-1].Parameters.QueryDirectory.FileName = a4;
          v18[-1].Parameters.Read.ByteOffset.LowPart = a5;
          v19 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Status = -1073741637;
          v19->Control |= 1u;
          Status = IofCallDriver(AttachedDeviceReference, Irp);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = Irp->IoStatus.Status;
          }
          if ( Status == -1073741637 )
          {
            Status = -1073741163;
            Irp->IoStatus.Status = -1073741163;
          }
          if ( ((_BYTE)v6 == 11 || (_BYTE)v6 == 8) && Status >= 0 && Irp->IoStatus.Information > 0x18 )
          {
            LOBYTE(v20) = v6;
            WmipTranslatePDOInstanceNames(Irp, v20, a5, v10);
          }
          WmipUnreferenceRegEntry(v10);
        }
        else
        {
          WmipUnreferenceRegEntry(v10);
          LOBYTE(v24) = v16;
          WmipUpdateDeviceStackSize(v24);
          Status = -1073741160;
        }
        ObfDereferenceObject(AttachedDeviceReference);
        return (unsigned int)Status;
      }
    }
    WmipUnreferenceRegEntry(v10);
  }
  result = 3221226134LL;
  if ( (unsigned __int8)(v6 - 1) > 1u )
    return 3221225473LL;
  return result;
}
