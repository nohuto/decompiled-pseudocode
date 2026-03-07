__int64 __fastcall SetProtocolType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  gProtocolType = a1;
  *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 508) = (unsigned __int16)a1;
  result = (unsigned int)(unsigned __int16)gProtocolType + 1;
  if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
    gRemoteTerminalLuid = 0LL;
  if ( !gProtocolType )
  {
    RetrieveCurrentDisplayState(0LL, 65534LL, 0LL);
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9LL);
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    result = SGDGetUserSessionState(v7, v6, v8, v9);
    *(_DWORD *)(result + 2988) = v5;
  }
  return result;
}
