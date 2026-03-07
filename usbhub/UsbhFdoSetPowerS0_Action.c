__int64 __fastcall UsbhFdoSetPowerS0_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT *v7; // r15
  __int64 v8; // r9
  int v9; // r10d
  _DWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  _DWORD *v13; // rbx
  KIRQL v14; // dl
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v17; // rax

  v3 = Context[9];
  v7 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1350005355, 0LL, (__int64)Irp);
  Log((__int64)DeviceObject, v9, 1348824676, v8, (__int64)Irp);
  v10 = FdoExt((__int64)DeviceObject);
  v11 = ((unsigned __int8)v10[207] + 1) & 7;
  v10[207] = v11;
  v11 *= 32LL;
  *(_DWORD *)((char *)v10 + v11 + 284) = 104;
  v12 = v10[1043];
  *(_DWORD *)((char *)v10 + v11 + 296) = 0;
  *(_DWORD *)((char *)v10 + v11 + 288) = v12;
  *(_DWORD *)((char *)v10 + v11 + 292) = 208;
  v10[1043] = 208;
  v13 = FdoExt((__int64)DeviceObject);
  FdoExt(*(_QWORD *)(v3 + 8));
  *(_DWORD *)(v3 + 32) = 1734964085;
  v14 = *((_BYTE *)v13 + 5064);
  *((_QWORD *)v13 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v13 + 632, v14);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         Irp,
         (PIO_COMPLETION_ROUTINE)UsbhFdoS0IoComplete_Action,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoS0IoComplete_Action;
    v17[-1].Context = Context;
    v17[-1].Control = -32;
  }
  PoCallDriver(v7[151], Irp);
  return 259LL;
}
