/*
 * XREFs of HalpQueryProfileInformation @ 0x140773AB8
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098F9D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 HalpQueryProfileInformation()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 4))();
}
