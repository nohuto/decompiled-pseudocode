/*
 * XREFs of CmpWaitForShutdownRundownRelease @ 0x140A1C9F8
 * Callers:
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForShutdownRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
}
