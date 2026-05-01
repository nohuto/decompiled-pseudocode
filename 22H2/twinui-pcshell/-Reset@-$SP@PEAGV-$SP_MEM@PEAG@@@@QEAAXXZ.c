/*
 * XREFs of ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1804E73F8
 * Callers:
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x18010A3D4 (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x180269F98 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18008C580 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    MemoryFree(v2);
    *a1 = 0LL;
  }
}
