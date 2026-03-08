/*
 * XREFs of Controller_RetrievePciData @ 0x1C0074ACC
 * Callers:
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     Controller_PopulatePciDeviceInformation @ 0x1C0074CAC (Controller_PopulatePciDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrievePciData(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  unsigned __int16 v13; // r14
  unsigned int v14; // esi
  int v16; // r9d
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[256]; // [rsp+90h] [rbp-70h] BYREF

  v20 = 0;
  v19 = 0;
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, int *, int *))(WdfFunctions_01023 + 648))(
         WdfDriverGlobals,
         a1,
         14LL,
         4LL,
         &v21,
         &v19);
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(a2, v9, 4, 135, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v8);
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, unsigned int *, int *))(WdfFunctions_01023 + 648))(
          WdfDriverGlobals,
          a1,
          16LL,
          4LL,
          &v20,
          &v19);
  v12 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v16 = 136;
LABEL_11:
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(a2, v11, 4, v16, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v10);
    return v12;
  }
  v13 = v20;
  LOWORD(v18) = 1;
  LOWORD(v17) = 64;
  v14 = HIWORD(v20);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD *, int, int, _QWORD))(WdfFunctions_01023 + 1048))(
          WdfDriverGlobals,
          a1,
          &GUID_BUS_INTERFACE_STANDARD,
          v22,
          v17,
          v18,
          0LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v16 = 137;
    goto LABEL_11;
  }
  memset(v23, 0, sizeof(v23));
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, _QWORD, int))v22[7])(v22[1], 0LL, v23, 0LL, 256);
  if ( v10 != 256 )
  {
    v12 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v12;
    v16 = 138;
    goto LABEL_11;
  }
  Controller_PopulatePciDeviceInformation(a2, v21, (unsigned __int16)v14, v13, (__int64)v22, (__int64)v23, a3, a4);
  return v12;
}
