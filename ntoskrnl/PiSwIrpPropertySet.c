/*
 * XREFs of PiSwIrpPropertySet @ 0x1407857F8
 * Callers:
 *     PiSwDispatch @ 0x140785720 (PiSwDispatch.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405613D4 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     PiSwValidatePropertyArray @ 0x1407859F8 (PiSwValidatePropertyArray.c)
 *     PiSwUpdateArrayProperties @ 0x140785A58 (PiSwUpdateArrayProperties.c)
 *     PiSwPropertySet @ 0x140785B60 (PiSwPropertySet.c)
 *     PiSwDeviceOperationsAllowed @ 0x140785C78 (PiSwDeviceOperationsAllowed.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const wchar_t **FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int updated; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  PVOID v12; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v14 = 0LL;
  v12 = 0LL;
  P = 0LL;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetDeviceProperty_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_24;
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v14);
  if ( updated < 0 )
    goto LABEL_14;
  NdrMesTypeDecode3(v14, "TP 3\a", &off_140A751A8, &off_140C02F18, 1, &v12);
  if ( v12 && *((_QWORD *)v12 + 1) && *(_DWORD *)v12 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v12 + 1));
    if ( updated >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      {
        updated = PnpAllocatePWSTR(FsContext2[10], 0xC8uLL, 0x57706E50u, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      FsContext2[21],
                      *((unsigned int *)FsContext2 + 44),
                      *((_QWORD *)v12 + 1),
                      *(unsigned int *)v12);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      if ( updated >= 0 )
        updated = PiSwPropertySet(P, 1LL, *((_QWORD *)v12 + 1), *(unsigned int *)v12);
    }
  }
  else
  {
LABEL_24:
    updated = -1073741811;
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x6370726Bu);
  if ( v14 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v9,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetDeviceProperty_Stop,
      v10,
      FsContext2[1],
      FsContext2[2],
      updated);
  return (unsigned int)updated;
}
