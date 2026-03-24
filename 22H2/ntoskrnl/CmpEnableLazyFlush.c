/*
 * XREFs of CmpEnableLazyFlush @ 0x1403A6D08
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1402F2BE0 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1404ECD70 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x1407745EC (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402D87F0 (CmpArmLazyWriter.c)
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
