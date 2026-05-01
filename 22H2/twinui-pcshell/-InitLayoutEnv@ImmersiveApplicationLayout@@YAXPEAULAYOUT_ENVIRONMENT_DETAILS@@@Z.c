/*
 * XREFs of ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0D98
 * Callers:
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180466E14 (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ??0CAppLayout@@QEAA@XZ @ 0x1804F05D0 (--0CAppLayout@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ImmersiveApplicationLayout::InitLayoutEnv(
        ImmersiveApplicationLayout *this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  SetRectEmpty((LPRECT)this);
  SetRectEmpty((LPRECT)((char *)this + 24));
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 100;
}
