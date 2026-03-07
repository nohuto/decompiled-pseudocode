int __fastcall UpdateExternalMonitorConnectedStatus(char a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v15 = 0;
  v13[0] = 0;
  LODWORD(v2) = DrvIsExternalMonitorActive(v13);
  if ( (int)v2 >= 0 )
  {
    v7 = v13[0];
    v2 = SGDGetUserSessionState(v4, v3, v5, v6);
    if ( *(_DWORD *)(v2 + 784) != v7 || a1 )
    {
      *(_DWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 784) = v7;
      LODWORD(InputBuffer) = 23;
      LOBYTE(v15) = v7;
      LODWORD(v2) = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
    }
  }
  return v2;
}
