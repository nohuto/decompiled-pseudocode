/*
 * XREFs of sub_180076180 @ 0x180076180
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x1800B7BD0 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_180076180(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack(*(Concurrency::details::TaskStack **)(a2 + 120));
  }
}
