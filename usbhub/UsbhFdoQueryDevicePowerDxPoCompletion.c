void __fastcall UsbhFdoQueryDevicePowerDxPoCompletion(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _DWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *v7; // rbp
  __int64 Status; // rdi
  _DWORD *v9; // rax
  __int64 v10; // r14
  _DWORD *v11; // r11
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // r11

  v7 = FdoExt(DeviceObject);
  Status = IoStatus->Status;
  Context[12] = Status;
  Log(DeviceObject, 16, 1902409795, Status, (__int64)Context);
  v9 = FdoExt(DeviceObject);
  v10 = *((_QWORD *)Context + 23);
  v11 = v9;
  v12 = *(unsigned int *)(v10 + 16);
  if ( (unsigned int)v12 <= 1 )
  {
    Log(DeviceObject, 16, 1347374641, *(_QWORD *)&v11[2 * v12 + 210], (__int64)Context);
    Log(DeviceObject, 16, 1347374642, *(_QWORD *)(v14 + 8 * v13 + 856), v10);
    *(_QWORD *)(v16 + 8 * v15 + 840) = 0LL;
    *(_QWORD *)(v16 + 8 * v15 + 856) = 0LL;
    *(_DWORD *)(v16 + 4 * v15 + 872) = 1218;
    PoStartNextPowerIrp((PIRP)Context);
  }
  IofCompleteRequest((PIRP)Context, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 306), Context, 0x20u);
}
