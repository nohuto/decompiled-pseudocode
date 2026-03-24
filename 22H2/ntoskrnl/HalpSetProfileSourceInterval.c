/*
 * XREFs of HalpSetProfileSourceInterval @ 0x14036C6EC
 * Callers:
 *     HalpSetSystemInformation @ 0x140733730 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 3))();
}
