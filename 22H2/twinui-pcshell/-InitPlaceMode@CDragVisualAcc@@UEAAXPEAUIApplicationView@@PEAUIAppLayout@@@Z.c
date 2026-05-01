/*
 * XREFs of ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x18049D620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DD3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18038AAFC (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIInvokeProvider@@UIPlaceModeButtonAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180437DD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180437DD0.c)
 *     ??$?0VCPlaceModeButtonAcc@@@?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCPlaceModeButtonAcc@@@12@PEAPEAX@Z @ 0x18049C2A0 (--$-0VCPlaceModeButtonAcc@@@-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAA@AEBV-$ComPtr@VCP.c)
 *     ??$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaceModeButtonAcc@@@12@$$QEAPEAVCDragVisualAcc@@AEAIAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAPEAUtagRECT@@@Z @ 0x18049C2D4 (--$Make@VCPlaceModeButtonAcc@@PEAVCDragVisualAcc@@AEAIAEAV-$NativeString@V-$CoTaskMemPolicy@G@In.c)
 *     ??0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@PEBUtagRECT@@@Z @ 0x18049C5E0 (--0CPlaceModeButtonAcc@@QEAA@PEAUIDragVisualAcc@@IAEAV-$NativeString@V-$CoTaskMemPolicy@G@Intern.c)
 *     ?Attach@?$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z @ 0x18049C8B8 (-Attach@-$ComPtr@VCPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAXPEAVCPlaceModeButtonAcc@@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18049DABC (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804E0BE8 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1804E1570 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall CDragVisualAcc::InitPlaceMode(
        unsigned __int64 this,
        struct IApplicationView *a2,
        struct IAppLayout *a3)
{
  struct IRawElementProviderSimpleVtbl *v5; // rcx
  int v7; // r15d
  __int128 *v8; // rax
  unsigned __int16 **v9; // r8
  int v10; // esi
  __int64 v11; // rbx
  void *v12; // r8
  struct IRawElementProviderSimpleVtbl *v13; // rdx
  __int64 *v14; // rdx
  __int64 v15; // rcx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v16; // rdx
  int v17; // r12d
  int v18; // eax
  int v19; // edi
  unsigned __int16 **v20; // r8
  int ViewTitle; // edi
  __int64 v22; // rbx
  void *v23; // rax
  __int64 *v24; // rdx
  volatile int *v25; // rax
  void *v26; // r8
  struct IRawElementProviderSimpleVtbl *v27; // rdx
  IRawElementProviderSimple *v28; // rcx
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rax
  bool v30; // sf
  __int128 *v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+38h] [rbp-C8h] BYREF
  IRawElementProviderSimple *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41[4]; // [rsp+80h] [rbp-80h] BYREF
  char v42[16]; // [rsp+A0h] [rbp-60h] BYREF
  ApplicationViewHelpers *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int128 v49; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v50[40]; // [rsp+100h] [rbp+0h] BYREF

  v5 = *(struct IRawElementProviderSimpleVtbl **)(this + 32);
  v7 = 0;
  v32 = 0;
  v8 = (__int128 *)(*((__int64 (__fastcall **)(struct IRawElementProviderSimpleVtbl *, __int64 *))v5->QueryInterface + 15))(
                     v5,
                     &v47);
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v49 = *v8;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
  v39 = -1LL;
  v40 = -1LL;
  if ( ApplicationViewHelpers::GetViewTitle(a2, (struct IApplicationView *)&v38, v9) >= 0 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            &v35,
            &_ImageBase,
            2101LL,
            v38);
    if ( v10 >= 0 )
    {
      v31 = &v49;
      v33 = (IRawElementProviderSimple *)(this - 32);
      Microsoft::WRL::Details::Make<CPlaceModeButtonAcc,CDragVisualAcc *,unsigned int &,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,tagRECT *>(
        &v34,
        &v33,
        &v32,
        (int)&v35,
        (__int64 *)&v31);
      v11 = v34;
      if ( v34 )
      {
        Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v31, &v34);
        v10 = 0;
        v13 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
        if ( v13 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
          && (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      this + 176,
                      (unsigned __int64)&v13->QueryInterface + 1,
                      v12),
              v10 < 0)
          || (++*(_QWORD *)(this + 184),
              (v14 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
          || (*v14 = 0LL, v14 == (__int64 *)&v31) )
        {
          v15 = (__int64)v31;
        }
        else
        {
          v15 = 0LL;
          *v14 = (__int64)v31;
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v7 = 1;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
          v11,
          (volatile int *)v14);
      }
      else
      {
        v10 = -2147024882;
      }
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v35);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a3 + 24LL))(a3, v50);
      v17 = (int)ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v50, v16) / 2;
      v18 = (*(__int64 (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 72LL))(a3);
      v31 = 0LL;
      v19 = v18;
      v32 = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      if ( (*(int (__fastcall **)(struct IAppLayout *, __int128 **))(*(_QWORD *)a3 + 128LL))(a3, &v31) >= 0 )
      {
        do
        {
          if ( (*(int (__fastcall **)(__int128 *, __int64, char *))(*(_QWORD *)v31 + 24LL))(v31, 1LL, v42) < 0 )
            break;
          v47 = v44;
          v48 = v45;
          if ( v46 )
            LODWORD(v47) = v44 - v17;
          if ( v46 != v19 - 1 )
            LODWORD(v48) = v45 + v17;
          v35 = 0LL;
          v36 = 0LL;
          v37 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v35);
          v36 = -1LL;
          v37 = -1LL;
          ViewTitle = ApplicationViewHelpers::GetViewTitle(v43, (struct IApplicationView *)&v35, v20);
          if ( ViewTitle >= 0 )
          {
            memset(v41, 0, 24);
            ViewTitle = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
                          v41,
                          &_ImageBase,
                          2102LL,
                          v35);
            if ( ViewTitle >= 0 )
            {
              v22 = 0LL;
              v34 = 0LL;
              v23 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
              if ( v23
                && (v25 = (volatile int *)CPlaceModeButtonAcc::CPlaceModeButtonAcc(
                                            (__int64)v23,
                                            this & -(__int64)(this != 32),
                                            v7,
                                            v41,
                                            &v47),
                    Microsoft::WRL::ComPtr<CPlaceModeButtonAcc>::Attach(&v34, v25),
                    (v22 = v34) != 0) )
              {
                Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::ComPtr<IPlaceModeButtonAcc>((__int64 *)&v33, &v34);
                ViewTitle = 0;
                v27 = *(struct IRawElementProviderSimpleVtbl **)(this + 184);
                if ( v27 == *(struct IRawElementProviderSimpleVtbl **)(this + 200)
                  && (ViewTitle = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                                    this + 176,
                                    (unsigned __int64)&v27->QueryInterface + 1,
                                    v26),
                      ViewTitle < 0)
                  || (++*(_QWORD *)(this + 184),
                      (v24 = (__int64 *)(*(_QWORD *)(this + 176) + 8 * (*(_QWORD *)(this + 184) - 1LL))) == 0LL)
                  || (*v24 = 0LL, v24 == (__int64 *)&v33) )
                {
                  v28 = v33;
                }
                else
                {
                  v28 = 0LL;
                  *v24 = (__int64)v33;
                  v33 = 0LL;
                }
                if ( v28 )
                {
                  lpVtbl = v28->lpVtbl;
                  v33 = 0LL;
                  ((void (__fastcall *)(IRawElementProviderSimple *))lpVtbl->Release)(v28);
                }
                ++v7;
              }
              else
              {
                ViewTitle = -2147024882;
              }
              if ( v22 )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>::Release(
                  v22,
                  (volatile int *)v24);
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v41);
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v35);
          v30 = ViewTitle < 0;
          v19 = v32;
        }
        while ( !v30 );
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    }
  }
  *(_DWORD *)(this + 16) = 2;
  UiaRaiseStructureChangedEvent((IRawElementProviderSimple *)(this - 32), StructureChangeType_ChildrenBulkAdded, 0LL, 0);
  UiaRaiseAutomationEvent((IRawElementProviderSimple *)(this - 32), 20002);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v38);
}
