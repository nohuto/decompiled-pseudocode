/*
 * XREFs of UsbhFdoSetPowerS0_Action @ 0x1C000437C
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0007740 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 */

__int64 __fastcall UsbhFdoSetPowerS0_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v3; // rdi
  __int64 v7; // r15
  int v8; // r9d
  int v9; // r10d
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rbx
  KIRQL v14; // dl
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v17; // rax

  v3 = Context[9];
  v7 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1350005355, 0, (__int64)Irp);
  Log((_DWORD)DeviceObject, v9, 1348824676, v8, (__int64)Irp);
  v10 = FdoExt(DeviceObject);
  v11 = ((unsigned __int8)*(_DWORD *)(v10 + 828) + 1) & 7;
  *(_DWORD *)(v10 + 828) = v11;
  v11 *= 32LL;
  *(_DWORD *)(v11 + v10 + 284) = 104;
  v12 = *(_DWORD *)(v10 + 4172);
  *(_DWORD *)(v11 + v10 + 296) = 0;
  *(_DWORD *)(v11 + v10 + 288) = v12;
  *(_DWORD *)(v11 + v10 + 292) = 208;
  *(_DWORD *)(v10 + 4172) = 208;
  v13 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v3 + 8));
  *(_DWORD *)(v3 + 32) = 1734964085;
  v14 = *(_BYTE *)(v13 + 5064);
  *(_QWORD *)(v13 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 5056), v14);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhFdoS0IoComplete_Action, Context, 1u, 1u, 1u) < 0 )
  {
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoS0IoComplete_Action;
    v17[-1].Context = Context;
    v17[-1].Control = -32;
  }
  PoCallDriver(*(PDEVICE_OBJECT *)(v7 + 1208), Irp);
  return 259LL;
}
