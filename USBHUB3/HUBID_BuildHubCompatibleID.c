__int64 __fastcall HUBID_BuildHubCompatibleID(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // ecx
  const void **v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-9h] BYREF
  __int128 v11; // [rsp+40h] [rbp+7h] BYREF
  __int64 v12; // [rsp+50h] [rbp+17h]
  int v13; // [rsp+58h] [rbp+1Fh]
  __int128 v14; // [rsp+60h] [rbp+27h] BYREF
  __int64 v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]

  v4 = 0;
  v13 = *(_DWORD *)L"B";
  v10[1] = &v11;
  v16 = *(_DWORD *)L"B";
  v12 = *(_QWORD *)L"0_HUB";
  v9[1] = &v14;
  v10[0] = 1835034LL;
  v15 = *(_QWORD *)L"0_HUB";
  v9[0] = 1835034LL;
  v11 = *(_OWORD *)L"USB\\USB20_HUB";
  v14 = *(_OWORD *)L"USB\\USB30_HUB";
  if ( a3 )
    *a3 = 0LL;
  v5 = *(_DWORD *)(a1 + 172) - 1;
  if ( !v5 || (v6 = v5 - 1) == 0 )
  {
    v7 = (const void **)v10;
    return (unsigned int)HUBID_AssignIDString(v7, 2, a2, (__int64)a3);
  }
  if ( v6 == 1 )
  {
    v7 = (const void **)v9;
    return (unsigned int)HUBID_AssignIDString(v7, 2, a2, (__int64)a3);
  }
  return v4;
}
