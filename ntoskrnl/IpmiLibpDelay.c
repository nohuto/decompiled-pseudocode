/*
 * XREFs of IpmiLibpDelay @ 0x140675A4C
 * Callers:
 *     IpmiLibpKcsSpinRegister @ 0x1406760E0 (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 */

void __fastcall IpmiLibpDelay(LARGE_INTEGER a1, ULONG a2)
{
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval = a1;
  if ( (dword_140C2C7C0 & 4) != 0 || a2 < 0x32 )
  {
    KeStallExecutionProcessor(a2);
  }
  else
  {
    Interval.QuadPart = (int)(-10 * a2);
    KeDelayExecutionThread(0, 0, &Interval);
  }
}
