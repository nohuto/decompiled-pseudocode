/*
 * XREFs of UsbhFdoSetPowerSx_Action @ 0x1C001D6D8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0007740 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSshEnterSx @ 0x1C001D88C (UsbhSshEnterSx.c)
 */

__int64 __fastcall UsbhFdoSetPowerSx_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  unsigned int LowPart; // ebx
  PDEVICE_OBJECT *v7; // rax
  __int64 v8; // rdi
  PDEVICE_OBJECT *v9; // r15
  _DWORD *v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // rbx
  KIRQL v13; // dl
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rax

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v7 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  v8 = Context[9];
  v9 = v7;
  Log((__int64)DeviceObject, 16, 1349283703, 0LL, (__int64)Irp);
  v10 = FdoExt((__int64)DeviceObject);
  v11 = ((unsigned __int8)v10[207] + 1) & 7;
  v10[207] = v11;
  v11 *= 32LL;
  *(_DWORD *)((char *)v10 + v11 + 284) = 103;
  *(_DWORD *)((char *)v10 + v11 + 288) = v10[1043];
  *(_DWORD *)((char *)v10 + v11 + 292) = 202;
  *(_DWORD *)((char *)v10 + v11 + 296) = LowPart;
  v10[1043] = 202;
  v12 = FdoExt((__int64)DeviceObject);
  FdoExt(*(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 32) = 1734964085;
  v13 = *((_BYTE *)v12 + 5064);
  *((_QWORD *)v12 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v12 + 632, v13);
  UsbhSshEnterSx(DeviceObject, v8);
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
         (PIO_COMPLETION_ROUTINE)UsbhFdoSxIoComplete_Action,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v16 = Irp->Tail.Overlay.CurrentStackLocation;
    v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoSxIoComplete_Action;
    v16[-1].Context = Context;
    v16[-1].Control = -32;
  }
  PoCallDriver(v9[151], Irp);
  Log((__int64)DeviceObject, 16, 1886156606, 0LL, 0LL);
  return 259LL;
}
