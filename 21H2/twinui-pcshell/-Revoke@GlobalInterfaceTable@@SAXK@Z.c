/*
 * XREFs of ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x1801B1244
 * Callers:
 *     ??_EDefaultLaunchPositionOverride@@UEAAPEAXI@Z @ 0x18004ABB0 (--_EDefaultLaunchPositionOverride@@UEAAPEAXI@Z.c)
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x18006D6F0 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1801AFD78 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1801CFD8C (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x1801B2120 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 */

void __fastcall GlobalInterfaceTable::Revoke(unsigned int a1)
{
  if ( a1 )
  {
    if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
      ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
        GlobalInterfaceTable::s_pGlobalInterfaceTable,
        a1);
  }
}
