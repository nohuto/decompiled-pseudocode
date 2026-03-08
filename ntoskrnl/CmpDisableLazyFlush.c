/*
 * XREFs of CmpDisableLazyFlush @ 0x1406140B4
 * Callers:
 *     CmSetLazyFlushState @ 0x140A0EC64 (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
