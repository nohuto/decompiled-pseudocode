/*
 * XREFs of PiSwIrpSetLifetime @ 0x140858894
 * Callers:
 *     PiSwDispatch @ 0x140785720 (PiSwDispatch.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405613D4 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405614A4 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzqq_EtwWriteTransfer @ 0x140561674 (McTemplateK0zzqq_EtwWriteTransfer.c)
 *     PiSwDeviceOperationsAllowed @ 0x140785C78 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpSetLifetime(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v4; // ebx
  struct _IRP *MasterIrp; // r14
  __int64 FsContext2; // rdi
  const wchar_t **v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v8 = (const wchar_t **)(FsContext2 + 16);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChange_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *v8);
  if ( CurrentStackLocation->Parameters.Create.Options == 4 && *(_DWORD *)&MasterIrp->Type <= 1u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      if ( (byte_140C0E10C & 8) != 0 )
        McTemplateK0zzqq_EtwWriteTransfer(
          v11,
          v10,
          v12,
          *(const wchar_t **)(FsContext2 + 8),
          *v8,
          *(_DWORD *)(FsContext2 + 180),
          *(_DWORD *)&MasterIrp->Type);
      *(_DWORD *)(FsContext2 + 180) = *(_DWORD *)&MasterIrp->Type;
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741811;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)*v8,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChange_Stop,
      v13,
      *(const wchar_t **)(FsContext2 + 8),
      *v8,
      v4);
  return v4;
}
