/*
 * XREFs of ?RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z @ 0x1C00A2348
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00A20A0 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMQueryWakeCapableProperty(struct RIMDEV *a1)
{
  int DeviceInterfacePropertyData; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  char v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 17;
  v6 = 0;
  v8 = 1;
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  (char *)a1 + 208,
                                  &DEVPKEY_DeviceInterface_HID_WakeCapable,
                                  0LL,
                                  0LL,
                                  1,
                                  &v6,
                                  &v8,
                                  &v7);
  v3 = *((_DWORD *)a1 + 47);
  if ( DeviceInterfacePropertyData >= 0 )
  {
    *((_DWORD *)a1 + 47) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(2 * v6)) & 2;
  }
  else
  {
    v4 = *((_DWORD *)a1 + 50);
    v5 = v3 | 2;
    *((_DWORD *)a1 + 47) = v5;
    if ( (v4 & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL) - 1) <= 3 )
      *((_DWORD *)a1 + 47) = v5 & 0xFFFFFFFD;
  }
}
