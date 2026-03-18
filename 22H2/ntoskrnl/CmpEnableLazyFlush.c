/*
 * XREFs of CmpEnableLazyFlush @ 0x1403B41C8
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C63E0 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x140616020 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x140A11978 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 */

void __fastcall CmpEnableLazyFlush(int a1)
{
  unsigned int i; // ebx

  _m_prefetchw(&CmpHoldLazyFlush);
  if ( _InterlockedAnd(&CmpHoldLazyFlush, ~a1) == a1 )
  {
    for ( i = 0; i < 3; ++i )
      CmpArmLazyWriter(i, 0LL, 1);
  }
}
