/*
 * XREFs of PiSwIrpGetLifetime @ 0x1409645C0
 * Callers:
 *     PiSwDispatch @ 0x140785720 (PiSwDispatch.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     PiSwDeviceOperationsAllowed @ 0x140785C78 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpGetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  struct _IRP *MasterIrp; // r14
  __int64 FsContext2; // rsi
  struct _KTHREAD *CurrentThread; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Read.Length >= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      *(_DWORD *)&MasterIrp->Type = *(_DWORD *)(FsContext2 + 180);
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v2 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
    v2 = -1073741811;
  }
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
