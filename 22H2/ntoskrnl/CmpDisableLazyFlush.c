/*
 * XREFs of CmpDisableLazyFlush @ 0x14032D2EC
 * Callers:
 *     CmSetLazyFlushState @ 0x1407745EC (CmSetLazyFlushState.c)
 *     CmFreezeRegistry @ 0x140872140 (CmFreezeRegistry.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
