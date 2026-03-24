/*
 * XREFs of ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C000B0C0
 * Callers:
 *     AccessPTPEnabledStatus @ 0x1C000AE70 (AccessPTPEnabledStatus.c)
 *     GetDWORDSettingValuesEx @ 0x1C000B020 (GetDWORDSettingValuesEx.c)
 *     WriteSettingValues @ 0x1C01279E0 (WriteSettingValues.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetPointerDeviceConfigurationKey(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v5; // eax

  v2 = a2;
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      366,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0258A98 )
    v5 = qword_1C0258A98();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0258AA0 )
    v3 = qword_1C0258AA0(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      367,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v3;
}
