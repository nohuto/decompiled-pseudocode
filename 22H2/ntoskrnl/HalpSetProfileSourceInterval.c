/*
 * XREFs of HalpSetProfileSourceInterval @ 0x140508090
 * Callers:
 *     HalpSetSystemInformation @ 0x14085EE10 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return HalpProfileInterface[3]();
}
