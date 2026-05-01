/*
 * XREFs of ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E1050
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x180476B88 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x18047709C (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x18047DBBC (-InitDragData@WindowArrangementView@@AEAAJXZ.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804F0064 (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GetMaxAppCount@CAppLayout@@UEAAIXZ @ 0x1804F1D80 (-GetMaxAppCount@CAppLayout@@UEAAIXZ.c)
 * Callees:
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804E0FA8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(
        ImmersiveApplicationLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  unsigned int v2; // esi
  int v3; // edi
  enum DEVICE_SCALE_FACTOR v4; // r8d
  __int64 result; // rax
  ImmersiveApplicationLayout *v6; // [rsp+20h] [rbp-18h]

  v2 = 1;
  v3 = *((_DWORD *)this + 2) - *(_DWORD *)this;
  HIDWORD(v6) = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
  LODWORD(v6) = v3;
  if ( v3 < SHIDWORD(v6) )
    return v2;
  v4 = *((_DWORD *)this + 4);
  v2 = (v3 - (5 * v4 + 2 * (v4 / 100)))
     / (int)(5 * v4
           + 2 * (v4 / 100)
           + ImmersiveApplicationLayout::ComputeGutterWidth(v6, (struct tagSIZE)(unsigned int)v4, v4))
     + 1;
  result = 2LL;
  if ( v2 < 2 )
    return v2;
  return result;
}
