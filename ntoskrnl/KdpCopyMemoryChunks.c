/*
 * XREFs of KdpCopyMemoryChunks @ 0x140AAD0F4
 * Callers:
 *     KdpSetCommonState @ 0x14036B850 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140AAD6F0 (KdpReportLoadSymbolsStateChange.c)
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 *     KdpReadVirtualMemory @ 0x140AADB68 (KdpReadVirtualMemory.c)
 *     KdpCreateRemoteFile @ 0x140AADE64 (KdpCreateRemoteFile.c)
 *     KdpSysReadControlSpace @ 0x140AAEC50 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140AAEEE4 (KdpSysWriteControlSpace.c)
 *     KdpPrintString @ 0x140AAF4EC (KdpPrintString.c)
 *     KdpFillMemory @ 0x140AB0F00 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140AB1188 (KdpReadPhysicalMemory.c)
 *     KdpReportCommandStringStateChange @ 0x140AB1398 (KdpReportCommandStringStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140AB1530 (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x140AB1D94 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140AB1F58 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140AB2000 (KdLogDbgPrint.c)
 *     KdpCopyCodeStream @ 0x140AB2660 (KdpCopyCodeStream.c)
 *     KdpPromptString @ 0x140AB2D4C (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140346FE0 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(char *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v13; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v13 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)a1) != 0 )
          break;
        i *= 2;
      }
      while ( v13 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(a1, a2, i, i, a5) < 0 )
      break;
    a1 += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
