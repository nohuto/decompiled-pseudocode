/*
 * XREFs of ?ClearShape@CCursorState@@UEAAXXZ @ 0x180276450
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x180277A58 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::ClearShape(CCursorState *this)
{
  std::_Ref_count_base *v2[2]; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&g_CursorManager);
  if ( *((_QWORD *)this + 23) )
  {
    *(_OWORD *)v2 = 0LL;
    std::shared_ptr<CRegion>::operator=((_QWORD *)this + 4, (__int64 *)v2);
    if ( v2[1] )
      std::_Ref_count_base::_Decref(v2[1]);
    *((_BYTE *)this + 21) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
