/*
 * XREFs of ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18027B198
 * Callers:
 *     ?ClearShape@CCursorState@@UEAAXXZ @ 0x180279B90 (-ClearShape@CCursorState@@UEAAXXZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x18027A658 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 *     ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z @ 0x18027B1E0 (-SetIsShadowEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x18027B240 (-SetIsTrailEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x18027B2A0 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 *     ?SetRotationAngle@CCursorState@@UEAAXM@Z @ 0x18027B380 (-SetRotationAngle@CCursorState@@UEAAXM@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x18027B400 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
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
