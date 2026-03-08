/*
 * XREFs of ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C009D4F4
 * Callers:
 *     AccessPTPEnabledStatus @ 0x1C009D120 (AccessPTPEnabledStatus.c)
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x1C009D2B0 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1C009D450 (GetDWORDSettingValuesEx.c)
 *     WriteSettingValues @ 0x1C01681F0 (WriteSettingValues.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1C020B7DC (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetPointerDeviceConfigurationKey(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  PDEVICE_OBJECT v6; // rcx
  char v7; // bl
  void *v8; // r9
  void *v10; // r8

  v3 = a2;
  v4 = 0LL;
  v6 = WPP_GLOBAL_Control;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v8 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      358,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( qword_1C02D7EC8 && (int)qword_1C02D7EC8(v6, a2, a3, v8) >= 0 && qword_1C02D7ED0 )
    v4 = qword_1C02D7ED0(a1, v3);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)a2 || v7 )
  {
    v10 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
    LOBYTE(v10) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      359,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return v4;
}
