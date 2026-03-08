/*
 * XREFs of HUBREG_IsPortPLDRCapable @ 0x1C00895D4
 * Callers:
 *     HUBPDO_HandlePLDRRecovery @ 0x1C001A06C (HUBPDO_HandlePLDRRecovery.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007BFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x1C0081350 (HUBPDO_UnregisterPortPLDRCapability.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenPortSubkey @ 0x1C00892DC (HUBREG_OpenPortSubkey.c)
 */

bool __fastcall HUBREG_IsPortPLDRCapable(__int64 a1, unsigned __int16 a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // eax
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  v2 = a2;
  v4 = HUBREG_OpenPortSubkey(a1, a2, 0x20019u, &v11);
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v11,
           &g_PortPLDRCapabilityValueName,
           4LL,
           &v10,
           0LL,
           0LL);
    if ( (int)(v5 + 0x80000000) >= 0
      && v5 != -1073741772
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        5u,
        0xA4u,
        (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
        v8);
    }
  }
  else if ( v4 != -1073741772 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v4;
    v7 = v2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 2520),
      3u,
      5u,
      0xA3u,
      (__int64)&WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
      v7,
      v9);
  }
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v11);
  return v10 != 0;
}
