/*
 * XREFs of CmpWaitForHiveLoadUnloadRundownRelease @ 0x140A1F724
 * Callers:
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForHiveLoadUnloadRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpHiveLoadUnloadRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpHiveLoadUnloadRundown, 1LL);
}
