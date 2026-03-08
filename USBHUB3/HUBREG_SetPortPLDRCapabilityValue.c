/*
 * XREFs of HUBREG_SetPortPLDRCapabilityValue @ 0x1C00894E4
 * Callers:
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C0080B64 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x1C0081350 (HUBPDO_UnregisterPortPLDRCapability.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenPortSubkey @ 0x1C00892DC (HUBREG_OpenPortSubkey.c)
 */

__int64 __fastcall HUBREG_SetPortPLDRCapabilityValue(__int64 a1, unsigned __int16 a2, int a3)
{
  int v4; // ebx
  int *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v7 = a3;
  v8 = 0LL;
  v4 = HUBREG_OpenPortSubkey(a1, a2, 0x2001Fu, &v8);
  if ( v4 >= 0 )
  {
    v6 = &v7;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1928))(
           WdfDriverGlobals,
           v8,
           &g_PortPLDRCapabilityValueName);
    if ( v4 >= 0 )
    {
      v4 = 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        5u,
        0xA2u,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v6);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v8);
  return (unsigned int)v4;
}
