/*
 * XREFs of QueryDeviceResetInterface @ 0x1C008F7E8
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C0080B64 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C0081794 (HUBPDO_InvokePortPLDRRecovery.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall QueryDeviceResetInterface(__int64 a1, _DWORD *a2)
{
  struct _DEVICE_OBJECT *v4; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v11[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v12[18]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v13[9]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v14; // [rsp+138h] [rbp+38h] BYREF

  v10 = 0LL;
  v14 = 0LL;
  memset(v11, 0, 24);
  memset(v13, 0, sizeof(v13));
  memset(v12, 0, 0x88uLL);
  v9 = 0LL;
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  a1);
  AttachedDeviceReference = IoGetAttachedDeviceReference(v4);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1336))(
         WdfDriverGlobals,
         a1,
         0LL,
         &v10);
  if ( v6 >= 0 )
  {
    v12[0] = 0x100000088LL;
    v12[4] = AttachedDeviceReference;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1344))(
           WdfDriverGlobals,
           v10,
           v12);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
             WdfDriverGlobals,
             0LL,
             v10,
             &v9);
      if ( v6 >= 0 )
      {
        *(_QWORD *)((char *)v11 + 12) = 0LL;
        DWORD1(v11[1]) = 0;
        *(_QWORD *)&v11[0] = 24LL;
        DWORD2(v11[0]) = -1073741637;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          v9,
          v11);
        memset(a2, 0, 0x50uLL);
        v13[4] = 0LL;
        v7 = v9;
        *a2 = 65616;
        v13[1] = &GUID_DEVICE_RESET_INTERFACE_STANDARD;
        LOWORD(v13[0]) = 2075;
        LODWORD(v13[2]) = 65616;
        v13[3] = a2;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
          WdfDriverGlobals,
          v7,
          v13);
        v14 = 0x200000010uLL;
        if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
                WdfDriverGlobals,
                v9,
                v10,
                &v14) )
          v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                 WdfDriverGlobals,
                 v9);
      }
    }
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)v6;
}
