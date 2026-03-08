/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0040BB0 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0162BA0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0163594 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C0163D40 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01E4050 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DB250 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C0335294 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01AFF6C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01B02FC (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // edi
  _QWORD *v8; // rcx
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 289) )
      return 1LL;
  }
  else if ( (a3 & 0xFFFFFFFD) != 0 )
  {
    WdLogSingleEntry1(1LL, 8220LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(Type == ROTATION_MODE_TYPE_HARDWARE) || (Type == ROTATION_MODE_TYPE_SOFTWARE) || (Type == ROTATION_MODE_TYPE_OVERALL)",
      8220LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 && !*(_BYTE *)(a1 + 289) )
    return 1LL;
  v6 = *(_QWORD *)(a1 + 128);
  if ( *(_DWORD *)(v6 + 4000 * v3 + 1036) != 1 )
  {
    switch ( *(_DWORD *)(v6 + 4000 * v3 + 1036) )
    {
      case 2:
        v7 = D3DKMDT_VPPR_ROTATE90;
        goto LABEL_7;
      case 3:
        v7 = D3DKMDT_VPPR_ROTATE180;
        goto LABEL_7;
      case 4:
        v7 = D3DKMDT_VPPR_ROTATE270;
        goto LABEL_7;
    }
    WdLogSingleEntry2(2LL, *(int *)(v6 + 4000 * v3 + 1036), *(_QWORD *)(a1 + 16));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
      *(int *)(4000 * v3 + *(_QWORD *)(a1 + 128) + 1036),
      *(_QWORD *)(a1 + 16),
      0LL,
      0LL,
      0LL);
  }
  v7 = D3DKMDT_VPPR_IDENTITY;
LABEL_7:
  if ( a3 != 1 )
  {
    v8 = *(_QWORD **)(a1 + 16);
    v10 = 0;
    if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v8, v3, 0LL, &v10) >= 0 )
      return (unsigned int)ADAPTER_DISPLAY::AddingMonitorOrientation((ADAPTER_DISPLAY *)a1, v7, v10);
  }
  return (unsigned int)v7;
}
