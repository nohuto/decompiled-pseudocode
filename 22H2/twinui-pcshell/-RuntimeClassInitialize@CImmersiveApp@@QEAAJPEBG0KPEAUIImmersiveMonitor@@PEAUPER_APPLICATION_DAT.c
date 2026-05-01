/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180037DA0
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x18004C43C (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180010180 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002F1A4 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x1800362EC (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18003699C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B380 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B530 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180046A24 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004EB68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180063284 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800646D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006EE88 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801B5928 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x1801E87E4 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        CImmersiveApp *this,
        const unsigned __int16 *a2,
        char *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7,
        unsigned __int64 a8)
{
  __int64 v12; // rdx
  HRESULT v13; // ebx
  __int64 v14; // r8
  struct IImmersiveMonitor *v15; // rax
  PCWSTR StringRawBuffer; // rax
  PCWSTR v17; // rbx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  char *v21; // rcx
  signed __int64 v22; // rbx
  __int16 v23; // ax
  LPVOID v24; // r12
  enum ORIENTATION_PREFERENCE *v25; // r8
  unsigned __int64 v26; // rdx
  char *v27; // rax
  signed __int64 v28; // rdi
  __int16 v29; // cx
  int v31; // eax
  __int64 *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  struct IImmersiveMonitor *v35; // rcx
  void *v36; // rbx
  HANDLE ProcessHeap; // rax
  void (*v38)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v39; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v40; // [rsp+34h] [rbp-CCh]
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C0h] BYREF
  HRESULT v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveMonitor *v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v47[3]; // [rsp+68h] [rbp-98h] BYREF
  void **v48; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v49[3]; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+A0h] [rbp-60h]
  int *v51; // [rsp+A8h] [rbp-58h]
  int *v52; // [rsp+B0h] [rbp-50h]
  int v53; // [rsp+B8h] [rbp-48h] BYREF
  char v54; // [rsp+BCh] [rbp-44h]
  char v55[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v56; // [rsp+E0h] [rbp-20h] BYREF
  const char *v57; // [rsp+E8h] [rbp-18h]
  LPVOID lpMem; // [rsp+F0h] [rbp-10h]
  char v59; // [rsp+F8h] [rbp-8h]
  __int64 v60; // [rsp+100h] [rbp+0h]
  char v61[144]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v62; // [rsp+198h] [rbp+98h] BYREF
  __int128 v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+B0h] BYREF

  Context = a7;
  v48 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v49[0] = 0LL;
  v49[1] = &v48;
  v49[2] = 0LL;
  v50 = 0;
  v51 = &v56;
  v52 = &v53;
  v53 = 0;
  v54 = 0;
  v59 = 0;
  v56 = 0;
  v57 = "Initialization";
  lpMem = 0LL;
  v60 = 1LL;
  v62 = 0LL;
  memset_0(v61, 0, sizeof(v61));
  v63 = 0LL;
  v64 = 0LL;
  v48 = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)&v48, a2);
  v13 = SHStrDupW(a2, (LPWSTR *)this + 74);
  v43 = v13;
  if ( v13 < 0 )
    goto LABEL_47;
  *((_DWORD *)this + 150) = a4;
  v15 = (struct IImmersiveMonitor *)*((_QWORD *)this + 97);
  if ( v15 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a5 + 8LL))(a5);
      v15 = (struct IImmersiveMonitor *)*((_QWORD *)this + 97);
    }
    v45 = v15;
    *((_QWORD *)this + 97) = a5;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v45);
  }
  *((_BYTE *)this + 756) = *((_BYTE *)a6 + 28);
  *((_BYTE *)this + 757) = *((_BYTE *)a6 + 29);
  *((_BYTE *)this + 758) = *((_BYTE *)a6 + 30);
  *((_BYTE *)this + 759) = *((_BYTE *)a6 + 31);
  *((_BYTE *)this + 760) = *((_BYTE *)a6 + 32);
  *((_BYTE *)this + 761) = *((_BYTE *)a6 + 33);
  *((_BYTE *)this + 762) = *((_BYTE *)a6 + 34);
  *((_BYTE *)this + 763) = *((_BYTE *)a6 + 35);
  *((_BYTE *)this + 764) = *((_BYTE *)a6 + 36);
  *((_BYTE *)this + 765) = *((_BYTE *)a6 + 37);
  LOBYTE(v14) = 3;
  LOBYTE(v12) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
    v12,
    v14);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a6, 0LL);
  v17 = StringRawBuffer;
  v18 = -1LL;
  if ( StringRawBuffer )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( StringRawBuffer[v19] );
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
                (char *)this + 608,
                v19) >= 0 )
    {
      v20 = v19 + 1;
      v21 = (char *)*((_QWORD *)this + 76);
      if ( v19 > 0x7FFFFFFE )
      {
        if ( v19 == -1LL )
          goto LABEL_18;
      }
      else
      {
        v22 = (char *)v17 - v21;
        while ( v20 != 1 )
        {
          v23 = *(_WORD *)&v21[v22];
          if ( !v23 )
            break;
          *(_WORD *)v21 = v23;
          v21 += 2;
          if ( !--v20 )
            goto LABEL_53;
        }
        if ( v20 )
          goto LABEL_17;
LABEL_53:
        v21 -= 2;
      }
LABEL_17:
      *(_WORD *)v21 = 0;
LABEL_18:
      *((_QWORD *)this + 77) = v19;
    }
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((char *)this + 608);
  }
  v24 = Context;
  v13 = CImmersiveApp::CImmersiveWindowCollection::Initialize(
          (CImmersiveApp *)((char *)this + 296),
          (struct IIAMServiceProvider *)Context);
  v43 = v13;
  if ( v13 >= 0 )
  {
    v39 = 500;
    v40 = 768;
    if ( (int)CallerIdentity::GetManifestedOrientationPreference(
                *((LPCWSTR *)this + 74),
                (unsigned __int16 *)this + 384,
                v25) < 0 )
      *((_DWORD *)this + 192) = 0;
    if ( *((_BYTE *)this + 756) )
    {
      v39 = 320;
    }
    else if ( *((_BYTE *)this + 762) )
    {
      memset(v47, 0, sizeof(v47));
      if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                  v47,
                  L"%s\\%s",
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                  *((_QWORD *)this + 74)) >= 0
        && SHRegGetDWORD(HKEY_CURRENT_USER, v47[0], L"MinWidth", (unsigned int *)fPending) >= 0 )
      {
        v31 = v39;
        if ( fPending[0] == 1 )
          v31 = 320;
        v39 = v31;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v47);
    }
    else
    {
      v40 = 320;
    }
    if ( *((_BYTE *)this + 758) )
    {
      v39 = 192;
      v40 = 48;
    }
    (*(void (__fastcall **)(_QWORD, WINBOOL *))(**((_QWORD **)this + 56) + 208LL))(*((_QWORD *)this + 56), &v39);
    Context = 0LL;
    if ( (*(int (__fastcall **)(LPVOID, GUID *, GUID *, LPVOID *))(*(_QWORD *)v24 + 24LL))(
           v24,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           &Context) >= 0
      && (*(int (__fastcall **)(LPVOID, _QWORD, WINBOOL *))(*(_QWORD *)Context + 56LL))(
           Context,
           *((_QWORD *)this + 74),
           fPending) >= 0 )
    {
      if ( fPending[0] >= 500 )
        v39 = 500;
      else
        v39 = fPending[0];
      if ( fPending[1] >= 320 )
        v40 = 320;
      else
        v40 = fPending[1];
    }
    (*(void (__fastcall **)(_QWORD, WINBOOL *))(**((_QWORD **)this + 56) + 200LL))(*((_QWORD *)this + 56), &v39);
    CImmersiveApp::_UpdateWindowTitleAndButtons(this);
    v44 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 56) + 136LL))(*((_QWORD *)this + 56), &v44) >= 0
      && *((_BYTE *)this + 759) )
    {
      *(_QWORD *)fPending = v44;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(fPending);
      CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___(&v45, fPending);
      v34 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
      v46 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
      *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = 0LL;
      v35 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
          v35,
          v33);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(fPending);
      if ( v34 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 56) + 232LL))(*((_QWORD *)this + 56), v34);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v46);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 56) + 328LL))(
      *((_QWORD *)this + 56),
      *((unsigned __int8 *)a6 + 26));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v44);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    if ( a3 )
    {
      do
        ++v18;
      while ( *(_WORD *)&a3[2 * v18] );
      v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (char *)this + 648,
              v18);
      v43 = v13;
      if ( v13 >= 0 )
      {
        v26 = v18 + 1;
        v27 = (char *)*((_QWORD *)this + 81);
        if ( v18 > 0x7FFFFFFE )
        {
          if ( v18 == -1LL )
            goto LABEL_46;
        }
        else
        {
          v28 = a3 - v27;
          while ( v26 != 1 )
          {
            v29 = *(_WORD *)&v27[v28];
            if ( !v29 )
              break;
            *(_WORD *)v27 = v29;
            v27 += 2;
            if ( !--v26 )
              goto LABEL_71;
          }
          if ( v26 )
            goto LABEL_45;
LABEL_71:
          v27 -= 2;
        }
LABEL_45:
        *(_WORD *)v27 = 0;
LABEL_46:
        *((_QWORD *)this + 82) = v18;
      }
    }
    else
    {
      v13 = v43;
    }
  }
LABEL_47:
  *((_QWORD *)this + 113) = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v48, (unsigned int)v13);
  v48 = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v48);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v64);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v62);
  if ( v59 )
  {
    v36 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v36);
    v59 = 0;
    v13 = v43;
  }
  lpMem = 0LL;
  if ( v53 == 1 )
  {
    v53 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      Context = qword_1806504F0;
      qword_1806504F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_180650508 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806504F0, qword_180650508, v38);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1806504F0);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v55);
  }
  v53 = 3;
  if ( v50 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v49);
  return (unsigned int)v13;
}
