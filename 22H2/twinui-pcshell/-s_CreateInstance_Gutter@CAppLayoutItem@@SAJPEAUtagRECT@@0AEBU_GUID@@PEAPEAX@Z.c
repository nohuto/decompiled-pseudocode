/*
 * XREFs of ?s_CreateInstance_Gutter@CAppLayoutItem@@SAJPEAUtagRECT@@0AEBU_GUID@@PEAPEAX@Z @ 0x1804F4A70
 * Callers:
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1804F3014 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1801B0228 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z @ 0x1804F3B44 (--0CAppLayoutItem@@QEAA@W4APP_LAYOUT_ITEM_TYPE@@PEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CAppLayoutItem::s_CreateInstance_Gutter(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rbx
  void *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, void **); // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  v12 = 0LL;
  v8 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8
    && (v9 = CAppLayoutItem::CAppLayoutItem((__int64)v8, 2, a1, a2),
        Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v12, v9),
        (v6 = (__int64)v12) != 0) )
  {
    v10 = (**v12)(v12, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, a4);
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}
