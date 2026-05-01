/*
 * XREFs of ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1804F48A8
 * Callers:
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x1804659C4 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x1804F0860 (-AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F3748 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1801B0228 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x1804F3B44 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Buffer(const struct _GUID *a1, void **a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v5 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5
    && (v6 = CAppLayoutItem::CAppLayoutItem((__int64)v5, 4, &v10, &v10),
        Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v9, v6),
        (v4 = (__int64)v9) != 0) )
  {
    v7 = (**v9)(v9, a1, a2);
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
