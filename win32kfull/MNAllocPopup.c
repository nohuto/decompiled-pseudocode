/*
 * XREFs of MNAllocPopup @ 0x1C0201DA8
 * Callers:
 *     xxxMNStartMenuState @ 0x1C0202C44 (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z @ 0x1C02011E8 (--$InitLookAsideRef@UtagPOPUPMENU@@@@YAEPEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020124C (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C020143C (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
PVOID __fastcall MNAllocPopup(int a1)
{
  PVOID v1; // rbx
  __int64 **v2; // rcx

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
    v1 = gpopupMenu;
  }
  if ( v1 )
  {
    memset_0(v1, 0, 0x60uLL);
    if ( !InitLookAsideRef<tagPOPUPMENU>((__int64)v1) )
    {
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>((__int64)v1);
      return 0LL;
    }
  }
  return v1;
}
