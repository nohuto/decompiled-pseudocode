bool __fastcall UsbhPdo_IsDeviceExternal(struct _DEVICE_OBJECT *a1)
{
  char v1; // bl
  char v3; // [rsp+58h] [rbp+10h] BYREF
  ULONG v4; // [rsp+60h] [rbp+18h] BYREF
  ULONG v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v4 = 0;
  v1 = 1;
  v3 = 0;
  if ( IoGetDevicePropertyData(a1, &DEVPKEY_Device_InLocalMachineContainer, 0, 0, 1u, &v3, &v5, &v4) >= 0 )
    return v3 == 0;
  return v1;
}
