__int64 __fastcall UsbhRegisterBootDeviceNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebx
  _DWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 (__fastcall *v9)(__int64, __int64 (*)(void)); // [rsp+38h] [rbp-20h]
  char (__fastcall *v10)(__int64); // [rsp+40h] [rbp-18h]

  v6[1] = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v6[0] = 1;
  v7 = v3;
  v9 = ExIsBootDeviceReady;
  v8 = a1;
  v10 = UsbhPdoCheckBootDeviceReady;
  v4 = ExRegisterBootDevice(v6, a3);
  if ( v4 < 0 && !KdRefreshDebuggerNotPresent() )
  {
    DbgPrint("ExRegisterBootDevice failed with 0x%x\n", v4);
    __debugbreak();
  }
  return (unsigned int)v4;
}
