__int64 RetrieveCurrentDisplayState()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  NTSTATUS v2; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  _BYTE *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+40h] [rbp+8h] BYREF

  v19 = 0;
  v2 = ZwPowerInformation(SystemVideoState, 0LL, 0, &v19, 4u);
  if ( v2 < 0 )
  {
    *(_DWORD *)(SGDGetUserSessionState(v1, v0, v3, v4) + 2952) = 0;
    *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 3080) = 0;
  }
  else
  {
    v6 = *(_BYTE **)(SGDGetUserSessionState(v1, v0, v3, v4) + 2896);
    v9 = v19;
    if ( *v6 )
      v9 = 0;
    v19 = v9;
    *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 3080) = v9;
    if ( v19 )
      *(_DWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 2952) = 1;
    else
      *(_DWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 2952) = 0;
  }
  return (unsigned int)v2;
}
