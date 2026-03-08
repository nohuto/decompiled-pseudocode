/*
 * XREFs of HUBID_BuildCompatibleID @ 0x1C001E9A8
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0016420 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x1C007EB7C (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x1C001DBCC (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x1C001DFAC (HUBID_GetUnknownId.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x1C001E220 (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildHubCompatibleID @ 0x1C001E488 (HUBID_BuildHubCompatibleID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C001E568 (HUBID_BuildClassCompatibleID.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildCompatibleID(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // r10
  const void **UnknownId; // rcx
  int v6; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v8[4]; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+70h] [rbp-28h]

  v3 = a2;
  v8[0] = *(_OWORD *)L"USB\\Class_11&SubClass_00&Prot_00";
  v8[1] = *(_OWORD *)L"s_11&SubClass_00&Prot_00";
  v9 = *(_DWORD *)L"";
  v8[2] = *(_OWORD *)L"Class_00&Prot_00";
  v8[3] = *(_OWORD *)L"&Prot_00";
  v7[0] = 4456514LL;
  v7[1] = v8;
  if ( a3 )
    *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 1636) & 0x2002) == 0 )
  {
    UnknownId = (const void **)HUBID_GetUnknownId(a1);
    return HUBID_AssignIDString(UnknownId, 2, v3, (__int64)a3);
  }
  v6 = *(_DWORD *)(a1 + 1632);
  if ( (v6 & 4) != 0 )
    return HUBID_BuildDeviceCompatibleID(a1, a2, a3);
  if ( (v6 & 2) != 0 )
    return HUBID_BuildHubCompatibleID(a1, a2, a3);
  if ( (v6 & 0x20000) != 0 )
  {
    UnknownId = (const void **)v7;
    return HUBID_AssignIDString(UnknownId, 2, v3, (__int64)a3);
  }
  return HUBID_BuildClassCompatibleID(a1, a2, a3);
}
