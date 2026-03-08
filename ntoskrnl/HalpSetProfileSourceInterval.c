/*
 * XREFs of HalpSetProfileSourceInterval @ 0x140505FB0
 * Callers:
 *     HalpSetSystemInformation @ 0x14085AF10 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return HalpProfileInterface[3]();
}
