/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180063284
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180037DA0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800634D0 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x1800637AC (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800639F8 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  bool v4; // bl
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rcx
  struct IIAMServiceProvider *v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, char *); // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, char *); // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  *((_BYTE *)this + 203) = 0;
  v4 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
         *((_QWORD *)this + 20) + 88LL,
         0LL)
    && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
          *((_QWORD *)this + 20) + 88LL,
          4LL);
  v5 = (_QWORD *)((char *)this + 152);
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
    v8 = v7 + 112;
  else
    v8 = 0LL;
  v19 = v8;
  LODWORD(v17) = *(_DWORD *)(v7 + 600);
  v15 = *(_QWORD *)(v7 + 592);
  v14 = a2;
  LOBYTE(v16) = v4;
  v18 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
         (unsigned int)&v18,
         (unsigned int)&v15,
         (unsigned int)&v17,
         (unsigned int)&v16,
         (__int64)&v14,
         (__int64)&v19);
  if ( v9 >= 0 )
    v9 = (**v18)(v18, &GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0, (char *)this + 152);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  if ( v9 >= 0 )
  {
    v17 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 136LL))(*v5, &v17);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v15);
      if ( v9 >= 0 )
      {
        v16 = 0LL;
        (***((void (__fastcall ****)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))this + 20))(
          *((_QWORD *)this + 20),
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          &v16);
        v18 = v16;
        v19 = *v5;
        v11 = *((_QWORD *)this + 20);
        v12 = *((_QWORD *)this + 31);
        if ( v12 )
        {
          *((_QWORD *)this + 31) = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(
            v12,
            v10);
        }
        v9 = Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
               (int)this + 248,
               (unsigned int)&v15,
               (int)v11 + 760,
               (unsigned int)&v19,
               (__int64)&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    if ( v9 >= 0 )
    {
      *((_BYTE *)this + 200) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 104LL))(*v5);
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)v9;
}
