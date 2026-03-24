/*
 * XREFs of ?_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z @ 0x1C02F5B88
 * Callers:
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0184440 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02F5C88 (-_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

bool __fastcall DXGMONITOR::_GetAppOverride(DXGMONITOR *this, HANDLE KeyHandle, GUID *Guid)
{
  bool result; // al
  ULONG ResultLength; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-91h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-89h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-79h] BYREF
  int v11; // [rsp+54h] [rbp-75h]
  int v12; // [rsp+58h] [rbp-71h]
  __int64 v13; // [rsp+5Ch] [rbp-6Dh]
  _BYTE v14[128]; // [rsp+70h] [rbp-59h] BYREF

  memset(v14, 0, sizeof(v14));
  *(_QWORD *)&GuidString.Length = 0x800000LL;
  GuidString.Buffer = (wchar_t *)v14;
  result = 0;
  if ( RtlStringFromGUID(Guid, &GuidString) >= 0 )
  {
    ResultLength = 0;
    if ( ZwQueryValueKey(KeyHandle, &GuidString, KeyValuePartialInformation, KeyValueInformation, 0x17u, &ResultLength) >= 0
      && v11 == 11
      && v12 == 8 )
    {
      v8 = 0LL;
      if ( (int)DXGMONITOR::_GetAppOverrideKey(this, &GuidString, &v8) >= 0 && v8 == v13 )
        return 1;
    }
  }
  return result;
}
