/*
 * XREFs of HUBFDO_EvtIoDeviceControl @ 0x1C007C520
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000E4EC (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C0079790 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C007996C (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0079B58 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C0079ED4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C007A114 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C007A2F0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C007A52C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C007A918 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C007AEC4 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C007B17C (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C007B55C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C007B988 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C007BE54 (HUBFDO_IoctlResetHub.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x1C007BFE4 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 */

__int64 __fastcall HUBFDO_EvtIoDeviceControl(__int64 a1, __int64 a2, size_t a3, unsigned __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // eax
  _DWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]

  if ( a5 > 0x220444 )
  {
    switch ( a5 )
    {
      case 0x220448u:
        return HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 1);
      case 0x22044Cu:
        return HUBFDO_IoctlResetHub(a1, a2);
      case 0x220450u:
        return HUBFDO_IoctlGetHubCapsEx(a1, a2, a3, a4);
      case 0x220454u:
        return HUBFDO_IoctlGetHubInformationEx(a1, a2, a3, a4);
      case 0x220458u:
        return HUBFDO_IoctlGetPortConnectorProperties(a1, a2, a3, a4);
      case 0x22045Cu:
        return HUBFDO_IoctlGetNodeConnectionInformationExV2(a1, a2, a3, a4);
      case 0x221000u:
        return HUBFDO_IoctlTestPortPLDRRecovery(a1, a2, a4);
    }
  }
  else
  {
    switch ( a5 )
    {
      case 0x220444u:
        return HUBFDO_IoctlCyclePort(a1, a2, a3, a4);
      case 0x220010u:
        return HUBFDO_IoctlGetPortStatus(a1, a2, a3, a4);
      case 0x220408u:
        return HUBFDO_IoctlGetNodeInformation(a1, a2, a3, a4);
      case 0x22040Cu:
        return HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 0);
      case 0x220410u:
        return HUBFDO_IoctlGetDescriptorFromNodeConnection(a1, a2, a3, a4);
      case 0x220414u:
        return HUBFDO_IoctlGetNodeConnectionName(a1, a2, a3, a4);
      case 0x220420u:
        return HUBFDO_IoctlGetNodeConnectionDriverKeyName(a1, a2, a3, a4);
      case 0x22043Cu:
        return HUBFDO_IoctlGetHubCaps(a1, a2, a3, a4);
      case 0x220440u:
        return HUBFDO_IoctlGetNodeConnectionAttributes(a1, a2, a3, a4);
    }
  }
  v11 = 0LL;
  v10[0] = 16;
  v10[1] = 8;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v7);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _DWORD *))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             a2,
             v8,
             v10);
  if ( !(_BYTE)result )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, a2);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a2,
             v9);
  }
  return result;
}
