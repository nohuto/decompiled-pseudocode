/*
 * XREFs of IopSynchronousCall @ 0x14069DD78
 * Callers:
 *     PnpSendIrp @ 0x140202E04 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x1402FD3F8 (PnpIrpDeviceEnumerated.c)
 *     PpIrpQueryCapabilities @ 0x140682520 (PpIrpQueryCapabilities.c)
 *     IopQueryDeviceState @ 0x140683218 (IopQueryDeviceState.c)
 *     PnpQueryDeviceText @ 0x1406850F0 (PnpQueryDeviceText.c)
 *     PnpIrpQueryID @ 0x1406883A8 (PnpIrpQueryID.c)
 *     IopQueryDeviceResources @ 0x1406F6440 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x1406F6D48 (PpIrpQueryResourceRequirements.c)
 *     PnpQueryBusInformation @ 0x14078CB9C (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x14079344C (IopQueryLegacyBusInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x140805F74 (IopQueryResourceHandlerInterface.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     IopQueryDockRemovalInterface @ 0x140969FF4 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x14096A0F4 (IopQueryReconfiguration.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     IovUtilWatermarkIrp @ 0x1402092B8 (IovUtilWatermarkIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140240A5C (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1402FAAFC (IoGetLowerDeviceObjectWithTag.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopSynchronousCall(_QWORD *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v15 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    LODWORD(v18) = a3;
    Irp->IoStatus.Status = a3;
    *((_QWORD *)&v18 + 1) = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v18;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v13 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v12;
    v14 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v14;
    CurrentStackLocation[-1].Context = (PVOID)v13;
    v15 = IofCallDriver(v9, Irp);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v18;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v18 + 1);
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v15;
}
