/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x140A1F74C
 * Callers:
 *     CmShutdownSystem2 @ 0x140615E8C (CmShutdownSystem2.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
}
