/*
 * XREFs of PfLogEvent @ 0x14028D0D0
 * Callers:
 *     PfLogFileDataAccess @ 0x14028C67C (PfLogFileDataAccess.c)
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 *     PfHardFaultLog @ 0x1402E03F4 (PfHardFaultLog.c)
 *     PfLogForegroundProcess @ 0x1402F5C50 (PfLogForegroundProcess.c)
 *     PfpRpLogDeprioEvent @ 0x14035B938 (PfpRpLogDeprioEvent.c)
 *     PfpLogApplicationEvent @ 0x14035B9B8 (PfpLogApplicationEvent.c)
 *     PfpLogScenarioEvent @ 0x14073A758 (PfpLogScenarioEvent.c)
 *     PfpLogEventRequest @ 0x14097ADD8 (PfpLogEventRequest.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A9CFDC (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14028D1C0 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028D2D0 (PfFbLogEntryComplete.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140C64F20);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140C650D0 + 1, 1u);
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
