/*
 * XREFs of ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x1801554E8
 * Callers:
 *     ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1801510F8 (-_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEA.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x1801513F0 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18015F6F0 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013ABFC (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPinnedList::GetAppPathFromShortcut(
        struct IShellLinkW *a1,
        struct IShellItem *a2,
        unsigned int a3,
        char *a4)
{
  HRESULT v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  LPVOID v12; // rbx
  __int64 (__fastcall *v13)(LPVOID, struct IShellLinkW *, struct IShellItem *, _QWORD, unsigned __int16 **, _QWORD, _QWORD); // rdi
  LPVOID ppv; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int16 *v16[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v16[0] = 0LL;
  v16[1] = 0LL;
  v17 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&ppv);
  v8 = CoCreateInstance(&rclsid, 0LL, 3u, &GUID_6c6c33ee_f1d4_1bdd_601d_0fa334303bc2, &ppv);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 3789LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)v10);
    goto LABEL_11;
  }
  v12 = ppv;
  v13 = *(__int64 (__fastcall **)(LPVOID, struct IShellLinkW *, struct IShellItem *, _QWORD, unsigned __int16 **, _QWORD, _QWORD))(*(_QWORD *)ppv + 32LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  v16[1] = (unsigned __int16 *)-1LL;
  v17 = -1LL;
  v9 = v13(v12, a1, a2, a3, v16, 0LL, 0LL);
  if ( v9 >= 0 )
  {
    if ( v16[0] )
    {
      v9 = StringCchCopyW(a4, 260LL, (char *)v16[0]);
    }
    else
    {
      *(_WORD *)a4 = 0;
      v9 = -2147023728;
    }
    if ( v9 >= 0 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    v10 = (unsigned int)v9;
    v11 = 3791LL;
    goto LABEL_9;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&ppv);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  return (unsigned int)v9;
}
