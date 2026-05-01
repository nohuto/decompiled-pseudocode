/*
 * XREFs of ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1804F4B30
 * Callers:
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x18047155C (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180479774 (-AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP.c)
 *     ?AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x1804F09D0 (-AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F3748 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1801B0228 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F3A9C (--0CAppLayoutItem@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_View(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbx
  void *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 (__fastcall ***v13)(_QWORD, __int64, _QWORD *); // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  v9 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9
    && (v10 = CAppLayoutItem::CAppLayoutItem((__int64)v9, a1, a2),
        Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v13, v10),
        (v6 = (__int64)v13) != 0) )
  {
    v11 = (**v13)(v13, a3, a4);
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
