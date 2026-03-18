/*
 * XREFs of MNAllocPopup @ 0x1C021BAC0
 * Callers:
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x1C021AEC4 (--$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C021AF28 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C021B110 (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
PSLIST_ENTRY __fastcall MNAllocPopup(int a1)
{
  PSLIST_ENTRY v1; // rbx
  __int64 **v2; // rcx
  __int64 v3; // rdx

  if ( a1 || (gdwPUDFlags & 0x800000) != 0 )
  {
    v2 = (__int64 **)gpUserTypeIsolation[4];
    if ( !v2 )
      return 0LL;
    v1 = NSInstrumentation::CTypeIsolation<24576,96>::Allocate(v2);
  }
  else
  {
    gdwPUDFlags |= 0x800000u;
    v1 = (PSLIST_ENTRY)gpopupMenu;
  }
  if ( v1 )
  {
    memset(v1, 0, 0x60uLL);
    if ( !InitLookAsideRef<tagPOPUPMENU>((__int64)v1, v3) )
    {
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>((__int64)v1);
      return 0LL;
    }
  }
  return v1;
}
