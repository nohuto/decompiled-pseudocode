/*
 * XREFs of ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015F534
 * Callers:
 *     ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x180150610 (-RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013AD6C (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x18015F3FC (-s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::s_RemoveDarwinShortcut(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        const WCHAR *a2)
{
  int v4; // ebx
  ITEMIDLIST *v5; // rdi
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  LPCITEMIDLIST pidl; // [rsp+30h] [rbp-D0h] BYREF
  struct IShellLinkW *v10; // [rsp+38h] [rbp-C8h] BYREF
  void *ppv; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR String2[264]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*a1)[3])(a1, &v12);
  if ( v4 >= 0 )
  {
    v5 = 0LL;
    do
    {
      if ( (*(unsigned int (__fastcall **)(__int64, __int64, LPCITEMIDLIST *))(*(_QWORD *)v12 + 24LL))(v12, 1LL, &pidl) )
        break;
      if ( SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv) >= 0 )
      {
        if ( (*(int (__fastcall **)(void *, _QWORD, const GUID *, GUID *, struct IShellLinkW **))(*(_QWORD *)ppv + 24LL))(
               ppv,
               0LL,
               &BHID_SFUIObject,
               &GUID_000214f9_0000_0000_c000_000000000046,
               &v10) >= 0 )
        {
          if ( (unsigned int)CPinnedList::s_GetDarwinLinkInfo(v10, 0LL, (char *)String2, 0x104u)
            && CompareStringOrdinal(a2, -1, String2, -1, 1) == 2 )
          {
            v5 = (ITEMIDLIST *)pidl;
            pidl = 0LL;
          }
          ((void (__fastcall *)(struct IShellLinkW *))v10->lpVtbl->Release)(v10);
        }
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
      }
      ILFree((LPITEMIDLIST)pidl);
    }
    while ( !v5 );
    if ( v5 )
    {
      v13[0] = 0LL;
      v6 = **a1;
      Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(v13);
      if ( v6(a1, &GUID_19aaf26d_f6e0_4736_b854_9a3def6f80f1, v13) < 0 )
        v7 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), ITEMIDLIST *, _QWORD, __int64))(*a1)[16])(
               a1,
               v5,
               0LL,
               25LL);
      else
        v7 = (*(__int64 (__fastcall **)(__int64, ITEMIDLIST *, __int64))(*(_QWORD *)v13[0] + 24LL))(v13[0], v5, 25LL);
      v4 = v7;
      ILFree(v5);
      Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(v13);
    }
    else
    {
      v4 = -2147023728;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v4;
}
