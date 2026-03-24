/*
 * XREFs of PnpFreeWatchdog @ 0x1403488D4
 * Callers:
 *     PnpDisableWatchdog @ 0x1406F02D0 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x140770084 (PnpCallDriverEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
