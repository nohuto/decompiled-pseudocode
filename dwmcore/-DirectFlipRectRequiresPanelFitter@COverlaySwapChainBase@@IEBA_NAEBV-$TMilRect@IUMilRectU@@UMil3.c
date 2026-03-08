/*
 * XREFs of ?DirectFlipRectRequiresPanelFitter@COverlaySwapChainBase@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180299CE4
 * Callers:
 *     ?CheckDirectFlipSupport@COverlaySwapChainBase@@UEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180299C10 (-CheckDirectFlipSupport@COverlaySwapChainBase@@UEBA_NPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 *     ?PresentDFlip@COverlaySwapChainBase@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180299D60 (-PresentDFlip@COverlaySwapChainBase@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall COverlaySwapChainBase::DirectFlipRectRequiresPanelFitter(__int64 a1, _DWORD *a2)
{
  char v3; // bl
  void (__fastcall ***v4)(_QWORD, int *); // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v3 = 0;
  v4 = (void (__fastcall ***)(_QWORD, int *))(*(_QWORD *)(a1 + 128)
                                            + 8LL
                                            + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 16LL));
  (**v4)(v4, &v6);
  if ( *a2 || a2[1] || a2[2] - *a2 != v6 || a2[3] - a2[1] != v7 )
    return 1;
  return v3;
}
