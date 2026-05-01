/*
 * XREFs of ?ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18046AC90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180468944 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 */

_BOOL8 __fastcall TabletModePositioner::ShouldHandleActivation(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  return TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 128));
}
