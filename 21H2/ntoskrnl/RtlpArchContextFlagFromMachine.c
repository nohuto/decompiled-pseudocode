/*
 * XREFs of RtlpArchContextFlagFromMachine @ 0x140704E08
 * Callers:
 *     PspWow64InitThread @ 0x1406747FC (PspWow64InitThread.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140704980 (RtlpWow64SanitizeContextFlags.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140704D58 (RtlWow64GetCpuAreaInfo.c)
 *     PspWow64SetupCpuArea @ 0x140705D0C (PspWow64SetupCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpArchContextFlagFromMachine(unsigned __int16 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  switch ( a1 )
  {
    case 0x14Cu:
      return 0x10000;
    case 0x1C4u:
      return 0x200000;
    case 0x8664u:
      return 0x100000;
    case 0xAA64u:
      return 0x400000;
  }
  return v1;
}
