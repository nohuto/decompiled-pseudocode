char __fastcall SetSwapMouseButton(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = *((_DWORD *)gpsi + 497) != 0;
  if ( v4 != a1 )
  {
    *((_DWORD *)gpsi + 497) = a1;
    v5 = *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 15992) == 0;
    *(_BYTE *)(SGDGetUserSessionState(v7, v6, v8, v9) + 15992) = v5;
    BroadcastSettingsUpdateToAllContainers(v11, v10, v12, v13);
  }
  return v4;
}
