/*
 * XREFs of ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x180277A58
 * Callers:
 *     ?ClearShape@CCursorState@@UEAAXXZ @ 0x180276450 (-ClearShape@CCursorState@@UEAAXXZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180276F18 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 *     ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z @ 0x180277AA0 (-SetIsShadowEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x180277B00 (-SetIsTrailEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x180277B60 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 *     ?SetRotationAngle@CCursorState@@UEAAXM@Z @ 0x180277C40 (-SetRotationAngle@CCursorState@@UEAAXM@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180277CC0 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCursorState::ScheduleCompositionPass(CCursorState *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v1 + 656) + 32LL))(
      *(_QWORD *)(v1 + 656),
      0LL,
      0x200000LL);
}
