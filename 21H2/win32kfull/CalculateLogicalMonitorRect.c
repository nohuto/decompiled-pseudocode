/*
 * XREFs of CalculateLogicalMonitorRect @ 0x1C00B0650
 * Callers:
 *     _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8 (_anonymous_namespace_--GetPreviousMonitorInfo.c)
 *     _anonymous_namespace_::FindPreviousMonitorIndex @ 0x1C00B0460 (_anonymous_namespace_--FindPreviousMonitorIndex.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00B099C (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00B0A88 (ExpandMonitorSpaceVertex.c)
 */

__int64 *__fastcall CalculateLogicalMonitorRect(
        __int64 *a1,
        _OWORD *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  __int64 v9; // rax

  *(_OWORD *)a1 = *a2;
  if ( a4 )
  {
    v9 = ExpandMonitorSpaceVertex(a4, a5, *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a4, a3, v9, *a1);
  }
  return a1;
}
