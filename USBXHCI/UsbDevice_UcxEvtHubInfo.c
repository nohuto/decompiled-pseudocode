/*
 * XREFs of UsbDevice_UcxEvtHubInfo @ 0x1C001D220
 * Callers:
 *     <none>
 * Callees:
 *     Etw_DeviceUpdate @ 0x1C001D724 (Etw_DeviceUpdate.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_UcxEvtHubInfo(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  LOWORD(v6[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(WdfDriverGlobals, a2, v6);
  v3 = (_DWORD *)*((_QWORD *)&v6[0] + 1);
  v4 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(*((_QWORD *)&v6[0] + 1) + 16LL),
                   off_1C00632C0);
  v4[35] = v3[6];
  v4[36] = v3[7];
  v4[37] = v3[8];
  Etw_DeviceUpdate(0LL, v4);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           0LL);
}
