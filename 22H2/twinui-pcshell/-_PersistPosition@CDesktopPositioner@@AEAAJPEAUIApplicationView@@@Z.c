/*
 * XREFs of ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18045F878
 * Callers:
 *     ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18045A7B0 (-ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown.c)
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x18045BC50 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003F870 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180459234 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$ComPtr@UIApplicationView@@@WRL@M.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x18045F20C (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804E1064 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_PersistPosition(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  HWND WindowForView; // rax
  __int64 (__fastcall *v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v6; // ebx
  CDesktopPositioner *v7; // rcx
  int FullPositionSnapshot; // eax
  __int64 v9; // r9
  __int64 *v10; // rbx
  __int64 v11; // rcx
  struct IOcclusionBasedApplicationViewPosition *v12; // rdi
  struct IApplicationView *v13; // rdx
  __int64 (__fastcall *v14)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IOcclusionBasedApplicationViewPosition *v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 (__fastcall ***v28)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+B8h] [rbp+48h] BYREF

  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( !WindowForView || IsWindowVisible(WindowForView) )
  {
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v5 = (*a2)[17];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
    v24 = -1LL;
    v25 = -1LL;
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))v5)(
           a2,
           &v23);
    if ( v6 < 0 )
    {
LABEL_23:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
      return (unsigned int)v6;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v7, (struct IApplicationView *)a2, &v27);
    v6 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A6,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)FullPositionSnapshot);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      goto LABEL_23;
    }
    v28 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    v10 = (__int64 *)*((_QWORD *)this + 46);
    v11 = v10[1];
    if ( *(_BYTE *)(v11 + 25) )
      goto LABEL_13;
    do
    {
      if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)v28 )
      {
        v10 = (__int64 *)v11;
        v11 = *(_QWORD *)v11;
      }
      else
      {
        v11 = *(_QWORD *)(v11 + 16);
      }
    }
    while ( !*(_BYTE *)(v11 + 25) );
    if ( v10 == *((__int64 **)this + 46) || (unsigned __int64)v28 < v10[4] )
    {
LABEL_13:
      *(_QWORD *)v18 = &v28;
      v10 = (__int64 *)*std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<Microsoft::WRL::ComPtr<IApplicationView> &&>,std::tuple<>>(
                          (__int64 *)this + 46,
                          &v19,
                          v10,
                          v9,
                          (unsigned __int64 **)v18);
    }
    v12 = v27;
    if ( (struct IOcclusionBasedApplicationViewPosition *)v10[5] != v27 )
    {
      *(_QWORD *)v18 = v27;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v18);
      *(_QWORD *)v18 = v10[5];
      v10[5] = (__int64)v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    if ( ApplicationViewHelpers::CanMaximizeView((ApplicationViewHelpers *)a2, v13) )
    {
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v14 = (*a2)[61];
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
      v21 = -1LL;
      v22 = -1LL;
      v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))v14)(
              a2,
              &v20);
      v6 = v15;
      if ( v15 < 0 )
      {
        v16 = 2229LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v15);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
        goto LABEL_22;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IOcclusionBasedApplicationViewPosition *))(**((_QWORD **)this + 31) + 32LL))(
              *((_QWORD *)this + 31),
              v23,
              v20,
              v12);
      v6 = v15;
      if ( v15 < 0 )
      {
        v16 = 2230LL;
        goto LABEL_21;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
  }
  return 0LL;
}
