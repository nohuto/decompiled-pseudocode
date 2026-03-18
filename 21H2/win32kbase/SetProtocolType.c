/*
 * XREFs of SetProtocolType @ 0x1C007E790
 * Callers:
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DB30 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x1C007E83C (RetrieveCurrentDisplayState.c)
 *     SqmPowerState @ 0x1C0147FA0 (SqmPowerState.c)
 */

__int64 __fastcall SetProtocolType(unsigned __int16 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  if ( gSqmIsOptedIn && !gProtocolType )
    SqmPowerState();
  result = (unsigned int)(v1 + 1);
  gProtocolType = v1;
  if ( (((_WORD)v1 + 1) & 0xFFFE) == 0 )
  {
    gRemoteTerminalLuid = 0LL;
    if ( !(_WORD)v1 )
    {
      RetrieveCurrentDisplayState();
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        9u);
      result = MEMORY[0xFFFFF78000000320];
      dword_1C0296FE4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    }
  }
  return result;
}
