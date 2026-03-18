/*
 * XREFs of SetProtocolType @ 0x1C000FA60
 * Callers:
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 * Callees:
 *     RetrieveCurrentDisplayState @ 0x1C000FB18 (RetrieveCurrentDisplayState.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00114C0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 */

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
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      9LL);
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    result = SGDGetUserSessionState(v7, v6, v8, v9);
    *(_DWORD *)(result + 2988) = v5;
  }
  return result;
}
