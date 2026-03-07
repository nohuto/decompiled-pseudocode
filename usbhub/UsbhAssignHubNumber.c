LONG __fastcall UsbhAssignHubNumber(__int64 a1)
{
  _DWORD *v1; // rbx
  void **CurrentIrp; // rax
  void ***v3; // rbx

  v1 = FdoExt(a1);
  v1[344] = USBD_AllocateHubNumber();
  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  CurrentIrp = (void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  v3 = (void ***)(v1 + 1288);
  if ( *(struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    __fastfail(3u);
  *v3 = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v3[1] = CurrentIrp;
  *CurrentIrp = v3;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = v3;
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
