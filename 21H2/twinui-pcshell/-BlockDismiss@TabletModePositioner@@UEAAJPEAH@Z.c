/*
 * XREFs of ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1804644C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ @ 0x180468AFC (-IsFullScreenViewVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180468CD4 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 */

__int64 __fastcall TabletModePositioner::BlockDismiss(TabletModePositioner *this, int *a2)
{
  TabletModePositioner *v2; // rdi
  __int64 v4; // r8
  int v5; // ebx

  v2 = (TabletModePositioner *)((char *)this - 120);
  if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 120))
    || (v5 = 1,
        (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 128) + 80LL))(*(_QWORD *)(v4 + 128), 1LL))
    || TabletModePositioner::IsFullScreenViewVisible(v2)
    || IsPPIEdition() )
  {
    v5 = 0;
  }
  *a2 = v5;
  return 0LL;
}
