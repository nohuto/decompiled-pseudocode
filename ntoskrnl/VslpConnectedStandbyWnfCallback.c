__int64 __fastcall VslpConnectedStandbyWnfCallback(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  char v4; // al
  unsigned int v5; // [rsp+20h] [rbp-69h] BYREF
  int v6; // [rsp+28h] [rbp-61h] BYREF
  __int128 v7; // [rsp+30h] [rbp-59h] BYREF
  __int64 v8; // [rsp+40h] [rbp-49h]
  _QWORD v9[14]; // [rsp+50h] [rbp-39h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  memset(v9, 0, 0x68uLL);
  v5 = 24;
  result = ExQueryWnfStateData(a1, &v6, &v7, &v5);
  if ( (int)result >= 0 )
  {
    v3 = v7 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( (_QWORD)v7 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v3 = *((_QWORD *)&v7 + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    v4 = v9[1];
    if ( !v3 )
      v4 = 1;
    LODWORD(v9[3]) = 0;
    LOBYTE(v9[1]) = v4;
    v9[2] = v8;
    return VslpEnterIumSecureMode(2u, 62, 0, (__int64)v9);
  }
  return result;
}
