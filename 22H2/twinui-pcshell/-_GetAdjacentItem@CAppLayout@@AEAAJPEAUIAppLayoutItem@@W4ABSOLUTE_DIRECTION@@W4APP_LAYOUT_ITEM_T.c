/*
 * XREFs of ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1804F3468
 * Callers:
 *     ?GetAdjacentItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1804F1390 (-GetAdjacentItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TY.c)
 *     ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1804F2D7C (-_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x1804F1220 (-FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z.c)
 */

__int64 __fastcall CAppLayout::_GetAdjacentItem(
        __int64 a1,
        struct IAppLayoutItem *a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  int LayoutItemInternal; // edi
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // eax

  v6 = a6;
  *a6 = 0LL;
  LayoutItemInternal = CAppLayout::FindLayoutItemInternal((CAppLayout *)(a1 + 32), a2, (unsigned int *)&a6);
  if ( LayoutItemInternal >= 0 )
  {
    LayoutItemInternal = -2147319765;
    if ( a3 == -1 )
      v11 = (unsigned int)((_DWORD)a6 - 1);
    else
      v11 = (unsigned int)((_DWORD)a6 + 1);
    while ( (unsigned int)v11 <= *(_DWORD *)(a1 + 112) - 1 )
    {
      a6 = *(_QWORD **)(*(_QWORD *)(a1 + 104) + 8 * v11);
      v12 = (__int64)a6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a6);
      if ( ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) & a4) != 0 )
      {
        LayoutItemInternal = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v12)(v12, a5, v6);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
        return (unsigned int)LayoutItemInternal;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
      v13 = v11 + 1;
      v11 = (unsigned int)(v11 - 1);
      if ( a3 != -1 )
        v11 = v13;
    }
  }
  return (unsigned int)LayoutItemInternal;
}
