/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x140808FD8
 * Callers:
 *     PiSwDispatch @ 0x140785720 (PiSwDispatch.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405613D4 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     PiSwDeviceOperationsAllowed @ 0x140785C78 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140808C48 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceInterfaceSetState @ 0x140808E84 (PiSwDeviceInterfaceSetState.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  __int64 *InterfaceEntry; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v16 = FsContext2;
  v15 = 0LL;
  P = 0LL;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceState_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_20;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v15);
  if ( v7 < 0 )
    goto LABEL_11;
  NdrMesTypeDecode3(v15, "TP 3\a", &off_140A751A8, &off_140C02F18, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(v9, *(const wchar_t **)P);
      if ( InterfaceEntry )
        v7 = PiSwDeviceInterfaceSetState(FsContext2, (__int64)InterfaceEntry, *((_BYTE *)P + 8));
      else
        v7 = -1073741275;
    }
    else
    {
      v7 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_20:
    v7 = -1073741811;
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v15 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceState_Stop,
      v12,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v7);
  return (unsigned int)v7;
}
