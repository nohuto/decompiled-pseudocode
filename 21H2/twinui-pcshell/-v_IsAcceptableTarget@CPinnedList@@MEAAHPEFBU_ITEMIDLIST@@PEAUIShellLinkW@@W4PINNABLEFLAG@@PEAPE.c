/*
 * XREFs of ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18015F860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x18013A4AC (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x1801508E8 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x180155658 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x18015E854 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CPinnedList::v_IsAcceptableTarget(
        __int64 a1,
        const ITEMIDLIST *a2,
        IUnknown *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  char v8; // r15
  int v11; // r14d
  BOOL v12; // ebx
  int v13; // esi
  struct IShellItem **v14; // r8
  int TaskbarPinnableItem; // eax
  void *lpVtbl; // rcx
  int v17; // esi
  BOOL v18; // edi
  int v19; // eax
  bool v20; // sf
  WCHAR *v21; // rcx
  const WCHAR *ExtensionW; // rax
  const WCHAR *v23; // rsi
  CPinnedList *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  void *ppv; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *ppunk; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v30; // [rsp+40h] [rbp-C0h] BYREF
  struct IShellItem v31; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR v32[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pszPath[264]; // [rsp+260h] [rbp+160h] BYREF

  v8 = a4;
  v11 = 1;
  v12 = 1;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a7 = 0LL;
  LODWORD(ppv) = 1073807360;
  if ( (int)SHGetNameAndFlagsW(a2, 0x8000u, pszPath, a4, (unsigned int *)&ppv) >= 0 )
  {
    v13 = (int)ppv;
    if ( ((unsigned int)ppv & 0x40000000) == 0 )
      return (v8 & 1) == 0;
    v12 = 0;
    if ( SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv) < 0 )
      return v12;
    v31.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    TaskbarPinnableItem = TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)ppv, &v31, v14);
    lpVtbl = ppv;
    if ( TaskbarPinnableItem >= 0 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
      lpVtbl = v31.lpVtbl;
      v31.lpVtbl = 0LL;
      ppv = lpVtbl;
    }
    v12 = 1;
    v17 = v13 & 0x10000;
    v18 = v17 != 0;
    v32[0] = 0;
    ppunk = 0LL;
    if ( !v17 )
      goto LABEL_20;
    if ( a3 )
    {
      IUnknown_Set(&ppunk, a3);
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(void *, _QWORD, const GUID *, GUID *, IUnknown **))(*(_QWORD *)lpVtbl + 24LL))(
              lpVtbl,
              0LL,
              &BHID_SFUIObject,
              &GUID_000214f9_0000_0000_c000_000000000046,
              &ppunk);
      v20 = v19 < 0;
      if ( v19 < 0 )
        goto LABEL_18;
    }
    v20 = (int)CPinnedList::GetAppPathFromShortcut(
                 (struct IShellLinkW *)ppunk,
                 (struct IShellItem *)ppv,
                 0x4000u,
                 (char *)v32) < 0;
LABEL_18:
    if ( v20 )
      v18 = 0;
LABEL_20:
    if ( (v8 & 1) != 0 )
    {
      v21 = v32;
      if ( !v18 )
        v21 = pszPath;
      ExtensionW = PathFindExtensionW(v21);
      v23 = ExtensionW;
      if ( ExtensionW )
      {
        if ( StrCmpICW(ExtensionW, L".EXE") && StrCmpICW(v23, L".MSC") )
          goto LABEL_37;
      }
    }
    if ( (v8 & 2) == 0 )
      goto LABEL_48;
    if ( v32[0] != 58 || v32[1] != 58 || v32[2] != 123 || !v32[3] )
      v11 = 0;
    if ( !(unsigned int)CPinnedList::_IsLocalHardDisk((CPinnedList *)lpVtbl, pszPath)
      || v18 && !v11 && !(unsigned int)CPinnedList::_IsLocalHardDisk(v24, v32) && !PathIsURLW(v32) )
    {
LABEL_37:
      v12 = 0;
    }
    else
    {
LABEL_48:
      if ( (v8 & 8) != 0 )
      {
        v12 = 0;
        if ( CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               &v30) >= 0 )
        {
          v25 = *(_QWORD *)v30;
          if ( ppunk )
            v26 = (*(__int64 (__fastcall **)(LPVOID, IUnknown *, void *))(v25 + 88))(v30, ppunk, ppv);
          else
            v26 = (*(__int64 (__fastcall **)(LPVOID, void *))(v25 + 80))(v30, ppv);
          v12 = v26 >= 0;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&ppunk);
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv + 16LL))(ppv);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  }
  return v12;
}
