/*
 * XREFs of ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18025333C
 * Callers:
 *     ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x180253270 (-Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180253A80 (-OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x18000FE6C (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180052BA0 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3bbf153ae8ca8cd098f14c7e321b666e__&_ @ 0x1802511B0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_3bbf153ae8ca8cd098f14c7e321b666e__-_.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x180251A58 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x180252094 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1802532B8 (-Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1802544C0 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180254DC8 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_Tlg.c)
 *     ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x1802550DC (-TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::HideInternal(CVirtualTouchpadExperienceManager *this)
{
  char v2; // si
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  CVirtualTouchpadExperienceManager *v12; // [rsp+48h] [rbp-C0h] BYREF
  CVirtualTouchpadExperienceManager *v13; // [rsp+50h] [rbp-B8h] BYREF
  CVirtualTouchpadExperienceManager *v14; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v16; // [rsp+78h] [rbp-90h]
  _BYTE v17[320]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v12 = this;
  v2 = 1;
  LOBYTE(v13) = 1;
  *((_DWORD *)this + 188) = 3;
  if ( *((_BYTE *)this + 316) )
  {
    *((_BYTE *)this + 316) = 0;
    CVirtualTouchpadExperienceManager::SaveFramePosition(this);
  }
  if ( !ReducedVisualEffects() )
  {
    v3 = CVirtualTouchpadExperienceManager::AnimateFrame((__int64)this, 1, (__int64)this + 720);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x264,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 43) + 40LL))(*((_QWORD *)this + 43), 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 615LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SessionEnded", 0xDu, 0xCu);
  v4 = ExperienceManagerUtils::RaiseReactivatedEvent(
         *((ExperienceManagerUtils **)this + 11),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 48),
         *((HSTRING *)this + 9),
         *((HSTRING *)this + 10),
         v16,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 618LL;
    goto LABEL_10;
  }
  v14 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v12 = this;
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3bbf153ae8ca8cd098f14c7e321b666e____(
          v8,
          v7,
          v9,
          &v12);
  v5 = v10;
  if ( v10 >= 0 )
  {
    if ( **((_DWORD **)this + 53) == 1 )
    {
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Hide((CVirtualTouchpadExperienceManager *)((char *)this + 376));
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread((char *)this + 376, v17);
      wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v17,
        0LL);
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v17);
    }
    v2 = 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
LABEL_17:
  if ( v2 )
    *((_DWORD *)this + 188) = 0;
  return v5;
}
