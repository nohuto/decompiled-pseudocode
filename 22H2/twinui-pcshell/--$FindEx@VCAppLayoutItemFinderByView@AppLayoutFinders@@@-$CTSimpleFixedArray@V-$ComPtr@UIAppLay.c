/*
 * XREFs of ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804F0430
 * Callers:
 *     ?ContainsView@CAppLayout@@UEAAHPEAUIApplicationView@@@Z @ 0x1804F0F80 (-ContainsView@CAppLayout@@UEAAHPEAUIApplicationView@@@Z.c)
 *     ?FindViewItem@CAppLayout@@UEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1804F1290 (-FindViewItem@CAppLayout@@UEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x1804F2AC8 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F36D4 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804F3748 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
        __int64 *a1,
        struct IUnknown **a2,
        struct IUnknown *a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rbx
  struct IUnknown *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v8 = *a1;
    v12 = 0LL;
    v9 = -1;
    v10 = *(_QWORD *)(v8 + 8 * v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v10 + 48LL))(
           v10,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v12) >= 0 )
      v9 = ((unsigned int)SHIsSameObject(v12, *a2) != 0) - 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( !v9 )
      break;
    if ( ++v4 >= (unsigned __int64)a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
