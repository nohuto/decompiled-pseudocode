/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180027670
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180053900 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180053EEC (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801B5574 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801B6768 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1801BED68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C671C (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C69C4 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *); // rbx
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // ebx
  int (__fastcall *v16)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *); // rbx
  HRESULT v17; // eax
  int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // edi
  __int64 v21; // r8
  HRESULT v22; // ebx
  CTaskWindowFinder *v23; // rbx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  int v27; // [rsp+20h] [rbp-69h]
  INT32 result; // [rsp+30h] [rbp-59h] BYREF
  __int64 v29; // [rsp+38h] [rbp-51h] BYREF
  HSTRING string1; // [rsp+40h] [rbp-49h] BYREF
  __int64 v31; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-29h] BYREF
  int v35; // [rsp+68h] [rbp-21h]
  IUnknown *punk; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  __int64 v38; // [rsp+80h] [rbp-9h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v39; // [rsp+88h] [rbp-1h] BYREF
  char v40; // [rsp+90h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v35 = 0;
  string1 = 0LL;
  v6 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( v6(a3, &string1) < 0 )
    goto LABEL_33;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"BackVisible", 0xBu, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    __debugbreak();
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v23 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)&v38, a2);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)v23;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&hstringHeader.Reserved.Reserved2[8]);
    hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v23 + 16);
    LODWORD(string) = 0;
    LOBYTE(v23) = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                         this,
                         &hstringHeader,
                         &v29,
                         0LL) >= 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v39);
    if ( (_BYTE)v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 208LL))(v29);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    goto LABEL_32;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_180500280);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v10 + 24), &result) >= 0 && !result )
  {
    v24 = CApplicationManager::_HandleUniversalFrameChangeRequest(this, a2);
    v25 = retaddr;
    if ( v24 >= 0 )
      goto LABEL_33;
    v26 = 6457LL;
LABEL_42:
    wil::details::in1diag3::_Log_Hr(
      v25,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v24,
      v27);
    goto LABEL_33;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_180500288);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v11 + 24), &result) >= 0 && !result )
  {
    v24 = CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(this, a2);
    v25 = retaddr;
    if ( v24 >= 0 )
      goto LABEL_33;
    v26 = 6461LL;
    goto LABEL_42;
  }
  string = 0LL;
  v12 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
    goto LABEL_44;
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v29 = 0LL;
    v38 = 0LL;
    v39 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    v40 = 0;
    hstringHeader.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    hstringHeader.Reserved.Reserved2[16] = 0;
    LODWORD(string) = 0;
    v29 = 0LL;
    v31 = 0LL;
    v15 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
            (int)this + 632,
            (unsigned int)&hstringHeader,
            (unsigned int)&v31,
            (unsigned int)&ppvOut);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    if ( v15 >= 0 )
      v15 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut))(
              *(_QWORD *)(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut),
              &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
              &v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v39);
    v37 = 0LL;
    if ( v15 >= 0 )
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v29 + 352LL))(
              v29,
              2LL,
              &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
              &v37);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v15 < 0
      || !(*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v37 + 48LL))(
            v37,
            a2) )
    {
      goto LABEL_31;
    }
    v31 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v29)(v29, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v31);
    v34 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr
                                                          + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
           v31,
           &v34) < 0 )
    {
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
LABEL_31:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      goto LABEL_33;
    }
    v32 = 0;
    v16 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 416LL);
    string = 0LL;
    v17 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
    if ( v17 >= 0 )
    {
      if ( v16(a2, string, &v32) >= 0 )
      {
        v20 = v32;
        if ( v32 )
        {
          v21 = 0LL;
          if ( v32 == 1 )
            v21 = 64LL;
        }
        else
        {
          v21 = 32LL;
        }
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v34 + 464LL))(v34, 96LL, v21);
        ppvOut = 0LL;
        punk = 0LL;
        v35 = 32;
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
          (char *)this + 48,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        v22 = IUnknown_QueryService(
                punk,
                &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                &ppvOut);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
        if ( v22 >= 0 )
          (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v34, v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      }
      goto LABEL_30;
    }
LABEL_44:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v19);
    __debugbreak();
  }
LABEL_33:
  WindowsDeleteString(string1);
}
