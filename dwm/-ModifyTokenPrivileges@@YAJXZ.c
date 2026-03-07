__int64 ModifyTokenPrivileges(void)
{
  signed int v0; // ebx
  HANDLE CurrentProcess; // rax
  signed int v3; // eax
  signed int LastError; // eax
  unsigned int v5; // [rsp+20h] [rbp-60h]
  void *TokenHandle; // [rsp+38h] [rbp-48h] BYREF
  _TOKEN_PRIVILEGES NewState; // [rsp+40h] [rbp-40h] BYREF
  __int64 v8; // [rsp+50h] [rbp-30h]
  int v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+5Ch] [rbp-24h]
  int v11; // [rsp+64h] [rbp-1Ch]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]

  v0 = 0;
  TokenHandle = 0LL;
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle) )
  {
    NewState.Privileges[0].Luid = (LUID)30LL;
    v8 = 23LL;
    v10 = 33LL;
    NewState.Privileges[0].Attributes = 2;
    v9 = 2;
    v11 = 2;
    v13 = 2;
    v12 = 14LL;
    NewState.PrivilegeCount = 4;
    SetLastError(0);
    if ( AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x34u, 0LL, 0LL) )
      goto LABEL_3;
    LastError = GetLastError();
    v0 = LastError;
    if ( LastError > 0 )
      v0 = (unsigned __int16)LastError | 0x80070000;
    v5 = 77;
  }
  else
  {
    v3 = GetLastError();
    v0 = v3;
    if ( v3 > 0 )
      v0 = (unsigned __int16)v3 | 0x80070000;
    v5 = 60;
  }
  if ( v0 >= 0 )
    v0 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v0, v5);
LABEL_3:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)v0;
}
