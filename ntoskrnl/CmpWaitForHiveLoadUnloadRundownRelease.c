/*
 * XREFs of CmpWaitForHiveLoadUnloadRundownRelease @ 0x140A1C9D0
 * Callers:
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForHiveLoadUnloadRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpHiveLoadUnloadRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpHiveLoadUnloadRundown, 1LL);
}
