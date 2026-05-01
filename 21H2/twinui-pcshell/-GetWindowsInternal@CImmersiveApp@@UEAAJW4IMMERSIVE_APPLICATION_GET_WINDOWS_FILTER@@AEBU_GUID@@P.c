/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180043220
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180044910 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1801B03D8 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x1801F2988 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F6A64 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::GetWindowsInternal(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r13
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // esi
  char v12; // di
  char v13; // al
  HRESULT (__stdcall *v14)(IUnknown *, const IID *const, void **); // rcx
  struct ITaskWindow *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  LPUNKNOWN v19; // rsi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  LPUNKNOWN v22; // rcx
  void *v23; // rdi
  char v24; // di
  void *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 (__fastcall **v28)(void *, _QWORD *, _QWORD *); // rax
  void *v29; // rcx
  struct ITaskWindow *v30; // rcx
  void *v31; // rcx
  LPUNKNOWN v33; // rsi
  _QWORD *v34; // rdi
  LPUNKNOWN v35; // rsi
  _QWORD *v36; // rax
  __int64 v37; // rcx
  LPUNKNOWN v38; // rcx
  void *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  struct ITaskWindow *v42; // rcx
  __int64 v43; // rax
  const struct _GUID *v44; // rdx
  int v45; // ecx
  __int64 v46; // rax
  const struct _GUID *v47; // rdx
  void *v48; // rdx
  LPUNKNOWN ppunkMarshal; // [rsp+28h] [rbp-71h] BYREF
  struct ITaskWindow *v50; // [rsp+30h] [rbp-69h] BYREF
  void *v51; // [rsp+38h] [rbp-61h] BYREF
  void *v52; // [rsp+40h] [rbp-59h] BYREF
  void *v53; // [rsp+48h] [rbp-51h] BYREF
  void *v54; // [rsp+50h] [rbp-49h] BYREF
  LPUNKNOWN v55; // [rsp+58h] [rbp-41h] BYREF
  __int64 v56; // [rsp+60h] [rbp-39h] BYREF
  void *v57; // [rsp+68h] [rbp-31h] BYREF
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // [rsp+70h] [rbp-29h]
  IUnknown *v59; // [rsp+78h] [rbp-21h] BYREF
  HRESULT (__stdcall *v60)(IUnknown *, const IID *const, void **); // [rsp+80h] [rbp-19h]
  __int64 v61; // [rsp+88h] [rbp-11h]
  unsigned __int64 v62; // [rsp+90h] [rbp-9h]
  LPUNKNOWN v63; // [rsp+98h] [rbp-1h] BYREF
  __int64 v64; // [rsp+A0h] [rbp+7h] BYREF
  char v65; // [rsp+A8h] [rbp+Fh]
  __int64 v66; // [rsp+B0h] [rbp+17h]
  unsigned __int64 v67[3]; // [rsp+B8h] [rbp+1Fh] BYREF

  v4 = a4;
  *a4 = 0LL;
  v52 = 0LL;
  v8 = 0LL;
  v57 = 0LL;
  v50 = 0LL;
  v9 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v9 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( v9 )
  {
    v10 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
    if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
      v10 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
    if ( v10 )
    {
      v41 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
      if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
        v41 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
      if ( v41 )
      {
        v11 = -2147467262;
        goto LABEL_50;
      }
      v11 = -2147019873;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1) )
        v11 = 0;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1) || a2 == 5 )
    {
      v11 = 0;
    }
    else
    {
      v11 = -2147019873;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v52);
    v11 = CEnumerableObjectCollection::CreateInstance(v45, v44, &v52);
  }
  if ( v11 < 0 )
    goto LABEL_50;
  if ( a2 == 3 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( a2 != 2 )
    {
      if ( a2 - 4 > 1 )
        goto LABEL_13;
      v12 = 0;
      v56 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 496LL))(a1, &v56);
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v56 + 24LL))(v56, &v59);
        if ( v11 >= 0 )
        {
          v33 = v59;
          ppunkMarshal = v59;
          v53 = 0LL;
          v34 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v34 )
          {
            *v34 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
            v34[3] = 0LL;
            v55 = 0LL;
            if ( CoCreateFreeThreadedMarshaler(0LL, &v55) >= 0 )
            {
              v35 = v55;
              QueryInterface = v55->lpVtbl->QueryInterface;
              v36 = v34 + 3;
              v37 = v34[3];
              if ( v37 )
              {
                *v36 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                v36 = v34 + 3;
              }
              ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
                v35,
                &GUID_00000003_0000_0000_c000_000000000046,
                v36);
              v33 = ppunkMarshal;
            }
            v38 = v55;
            if ( v55 )
            {
              v55 = 0LL;
              ((void (__fastcall *)(LPUNKNOWN))v38->lpVtbl->Release)(v38);
            }
            *((_DWORD *)v34 + 11) = 1;
            *v34 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v34[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *v34 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v34[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v34[6] = v33;
            v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v34)(
                    v34,
                    &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                    &v53);
            v66 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
          }
          else
          {
            v11 = -2147024882;
          }
          if ( v11 < 0 )
          {
            v39 = v53;
          }
          else
          {
            v8 = v53;
            v39 = 0LL;
            v53 = 0LL;
            v57 = v8;
          }
          if ( v39 )
          {
            v53 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v39 + 16LL))(v39);
          }
          v12 = 0;
        }
      }
      if ( a2 == 4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 408LL))(a1) && v11 < 0 )
      {
        v11 = 0;
        a2 = 0;
        v12 = 1;
      }
      v40 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
LABEL_77:
      if ( v12 )
      {
LABEL_13:
        v13 = 1;
        v62 = *(_QWORD *)(a1 + 360);
        v14 = 0LL;
        QueryInterface = 0LL;
        if ( !v62 )
          goto LABEL_40;
        while ( 1 )
        {
          if ( !v13 )
          {
LABEL_39:
            v4 = a4;
            goto LABEL_40;
          }
          v15 = *(struct ITaskWindow **)(*(_QWORD *)(a1 + 352) + 8LL * (_QWORD)v14);
          if ( a2 > 2 )
          {
            v11 = -2147418113;
            goto LABEL_37;
          }
          v16 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
          if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
            v16 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
          if ( !v16 )
          {
            if ( v50 != v15 )
            {
              if ( v15 )
                (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 8LL))(v15);
              v42 = v50;
              v50 = v15;
              if ( v42 )
              {
                v67[1] = 0LL;
                (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v42 + 16LL))(v42);
              }
            }
            goto LABEL_37;
          }
          v51 = 0LL;
          v17 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v15 + 32LL))(v15);
          v61 = v17;
          v51 = 0LL;
          v67[2] = 0LL;
          v18 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v18 )
          {
            *v18 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
            v18[3] = 0LL;
            ppunkMarshal = 0LL;
            if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
            {
              v19 = ppunkMarshal;
              v60 = ppunkMarshal->lpVtbl->QueryInterface;
              v20 = v18 + 3;
              v21 = v18[3];
              if ( v21 )
              {
                *v20 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                v20 = v18 + 3;
              }
              ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v60)(
                v19,
                &GUID_00000003_0000_0000_c000_000000000046,
                v20);
              v17 = v61;
            }
            v22 = ppunkMarshal;
            if ( ppunkMarshal )
            {
              ppunkMarshal = 0LL;
              ((void (__fastcall *)(LPUNKNOWN))v22->lpVtbl->Release)(v22);
            }
            *((_DWORD *)v18 + 11) = 1;
            *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v18[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            *v18 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v18[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
            v18[6] = v17;
            v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, void **))*v18)(
                    v18,
                    &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                    &v51);
            (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          }
          else
          {
            v11 = -2147024882;
          }
          if ( v11 < 0 )
            goto LABEL_116;
          if ( v52 )
            break;
          v23 = v51;
          v51 = 0LL;
          if ( v8 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
          v8 = v23;
          v57 = v23;
          v24 = 0;
LABEL_34:
          v25 = v51;
          if ( v51 )
          {
            v51 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 16LL))(v25);
          }
          if ( v24 && v11 >= 0 )
          {
            v13 = 1;
            goto LABEL_38;
          }
LABEL_37:
          v13 = 0;
LABEL_38:
          v14 = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))((char *)QueryInterface + 1);
          QueryInterface = v14;
          if ( (unsigned __int64)v14 >= v62 )
            goto LABEL_39;
        }
        v11 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v52 + 40LL))(v52, v51);
LABEL_116:
        v24 = 1;
        goto LABEL_34;
      }
      goto LABEL_40;
    }
  }
  ppunkMarshal = *(LPUNKNOWN *)(a1 + 320);
  if ( !ppunkMarshal )
    goto LABEL_77;
  v46 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v46 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( v46 )
  {
    v54 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    v11 = CImmersiveApplicationWindow_CreateInstance((HWND)ppunkMarshal, v47, &v54);
    if ( v11 >= 0 )
    {
      v48 = v54;
      v54 = 0LL;
      Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v57, v48);
      v12 = 0;
      v8 = v57;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    goto LABEL_77;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
  v63 = ppunkMarshal;
  v64 = 0LL;
  v65 = 0;
  CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
    (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184),
    (const struct CTaskWindowFinder *)&v63,
    &v50,
    v67);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v64);
LABEL_40:
  if ( v11 < 0 )
    goto LABEL_50;
  v26 = *a3 - *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1 )
    v26 = a3[1] - *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4;
  if ( !v26 )
  {
    v29 = v52;
    goto LABEL_94;
  }
  v27 = *a3 - *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1;
  if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1 )
    v27 = a3[1] - *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4;
  if ( !v27 )
  {
    if ( v8 )
    {
      v28 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v8;
      v29 = v8;
LABEL_49:
      v11 = (*v28)(v29, a3, v4);
      goto LABEL_50;
    }
    goto LABEL_120;
  }
  v43 = *a3 - *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1;
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1 )
    v43 = a3[1] - *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4;
  if ( !v43 )
  {
    v29 = v50;
    if ( !v50 )
    {
LABEL_120:
      v11 = -2147019873;
      goto LABEL_50;
    }
LABEL_94:
    v28 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v29;
    goto LABEL_49;
  }
LABEL_50:
  v30 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  v31 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return (unsigned int)v11;
}
