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
