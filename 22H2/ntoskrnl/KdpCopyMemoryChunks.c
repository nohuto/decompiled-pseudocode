/*
 * XREFs of KdpCopyMemoryChunks @ 0x140AB12A4
 * Callers:
 *     KdpSetCommonState @ 0x14033EF5C (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x1409721A0 (KdSystemDebugControl.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140AB1694 (KdpReportLoadSymbolsStateChange.c)
 *     KdpSendWaitContinue @ 0x140AB17C8 (KdpSendWaitContinue.c)
 *     KdpReadVirtualMemory @ 0x140AB1B0C (KdpReadVirtualMemory.c)
 *     KdpCreateRemoteFile @ 0x140AB1E04 (KdpCreateRemoteFile.c)
 *     KdpSysReadControlSpace @ 0x140AB2BB8 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140AB2E44 (KdpSysWriteControlSpace.c)
 *     KdpPrintString @ 0x140AB344C (KdpPrintString.c)
 *     KdpFillMemory @ 0x140AB4EF0 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140AB5178 (KdpReadPhysicalMemory.c)
 *     KdpReportCommandStringStateChange @ 0x140AB5388 (KdpReportCommandStringStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140AB5520 (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x140AB5D84 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140AB5F48 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140AB5FF0 (KdLogDbgPrint.c)
 *     KdpCopyCodeStream @ 0x140AB6650 (KdpCopyCodeStream.c)
 *     KdpPromptString @ 0x140AB6D3C (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1402E5DB0 (MmDbgCopyMemory.c)
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
