/*
 * XREFs of ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C003ACE4
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DE810 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00E61A0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0213FE0 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 * Callees:
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C012E928 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 */

char __fastcall ADAPTER_DISPLAY::IsIdenticalMode(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx
  int v5; // eax
  int CurrentOrientation; // eax
  char v8; // dl
  __int64 v9; // rcx

  v2 = *((_QWORD *)this + 14);
  v4 = 3968LL * (unsigned int)a2;
  if ( ((*(_DWORD *)(v2 + v4 + 996) - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( *(_DWORD *)(v2 + v4 + 968) != *(_DWORD *)(v2 + v4 + 644) )
      return 0;
    v5 = *(_DWORD *)(v2 + v4 + 648);
  }
  else
  {
    if ( *(_DWORD *)(v2 + v4 + 968) != *(_DWORD *)(v2 + v4 + 648) )
      return 0;
    v5 = *(_DWORD *)(v2 + v4 + 644);
  }
  if ( *(_DWORD *)(v2 + v4 + 972) != v5 )
    return 0;
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(this, a2, 0LL);
  v8 = 1;
  if ( CurrentOrientation != 1 )
    return 0;
  v9 = *((_QWORD *)this + 14);
  if ( *(_DWORD *)(v9 + v4 + 652)
    || *(_DWORD *)(v9 + v4 + 656)
    || *(_DWORD *)(v9 + v4 + 660) != *(_DWORD *)(v9 + v4 + 968)
    || *(_DWORD *)(v9 + v4 + 664) != *(_DWORD *)(v9 + v4 + 972) )
  {
    return 0;
  }
  return v8;
}
