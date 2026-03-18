/*
 * XREFs of CmpDisableLazyFlush @ 0x140616564
 * Callers:
 *     CmSetLazyFlushState @ 0x140A11978 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140A133B0 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
