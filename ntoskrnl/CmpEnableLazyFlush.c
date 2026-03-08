/*
 * XREFs of CmpEnableLazyFlush @ 0x1403AF4D8
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C0B20 (CmpEnableLazyFlushDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x140613B70 (CmpCoalescingCallback.c)
 *     CmSetLazyFlushState @ 0x140A0EC64 (CmSetLazyFlushState.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140349EA4 (CmpArmLazyWriter.c)
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
