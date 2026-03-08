/*
 * XREFs of ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAVCMegaRect@@XZ @ 0x180111650
 * Callers:
 *     ?OccludeRegions@CMegaRectCollection@@AEAAXXZ @ 0x180044CB4 (-OccludeRegions@CMegaRectCollection@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->(__int64 **a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( *a1 )
    v1 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * ((unsigned __int64)a1[2] & (*(_QWORD *)(v1 + 16) - 1LL)));
}
