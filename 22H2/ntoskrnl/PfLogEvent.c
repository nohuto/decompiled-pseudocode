/*
 * XREFs of PfLogEvent @ 0x14026E544
 * Callers:
 *     PfHardFaultLog @ 0x14026DE20 (PfHardFaultLog.c)
 *     PfpLogApplicationEvent @ 0x14026E010 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x14026E348 (PfpRpLogDeprioEvent.c)
 *     PfLogForegroundProcess @ 0x14026E4C8 (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x14029DC90 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x140564D88 (PfLogFileDataAccess.c)
 *     PfpLogEventRequest @ 0x1407770EC (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1407771C4 (PfpLogScenarioEvent.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140990F10 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140991198 (PfPowerActionNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14026E634 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14026E710 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140413540 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C4FD20);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4FED0 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL);
    return 0;
  }
  return (unsigned int)v9;
}
