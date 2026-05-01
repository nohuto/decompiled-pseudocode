/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18000E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18000E314 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18000E77C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@@QEAA_NXZ @ 0x180098838 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_AppCloseButton@@@details@wil@.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18015DD3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1801C9CC4 (WPP_SF_d.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E51B4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x1801E5284 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64 *); // rsi
  char IsEnabled; // al
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  char *v14; // [rsp+28h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+40h] BYREF
  __int64 v17; // [rsp+80h] [rbp+48h] BYREF
  __int64 v18; // [rsp+88h] [rbp+50h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 14);
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v18 = 0LL;
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v18);
    if ( v4 >= 0 )
    {
      v16 = 0LL;
      v5 = v18;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v16);
      if ( v4 >= 0 )
      {
        if ( IsPPIEdition() && IsPPIFullFrameUI() )
        {
          v17 = 0LL;
          v6 = v16;
          v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 144LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          if ( v7(v6, &v17) >= 0 )
          {
            IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Hub_AppCloseButton>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Hub_AppCloseButton>::GetImpl'::`2'::impl);
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 88LL))(
              v17,
              1023LL,
              IsEnabled != 0 ? 28 : 24);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        }
        v15 = 0LL;
        v17 = v16;
        v13 = v5;
        v14 = (char *)this - 40;
        v4 = ((__int64 (__fastcall *)(__int64 *, char **, __int64 *, __int64 *))Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>)(
               &v15,
               &v14,
               &v13,
               &v17);
        if ( v4 < 0 )
          goto LABEL_17;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( (unsigned int)SHIsSameObject(*((struct IUnknown **)this + 17), *(struct IUnknown **)(v15 + 120)) )
        {
          v4 = 0;
          v9 = *((_QWORD *)this + 9);
          if ( v9 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (char *)this + 64,
                       v9 + 1),
                v4 >= 0) )
          {
            v10 = (_QWORD *)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
            if ( v10 )
            {
              *v10 = v15;
              Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef();
            }
          }
        }
        else
        {
          v4 = -2147024809;
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_17:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v16);
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release(v11);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_c481281ffdf7300d55b2a93f82a6cf11_Traceguids,
          *((unsigned int *)this + 14));
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v18);
  }
  return (unsigned int)v4;
}
