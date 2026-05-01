/*
 * XREFs of ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180287340
 * Callers:
 *     ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180289260 (-v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180286C84 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x180286FE8 (--1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180287518 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x180287F84 (-StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServ.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1802881D4 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028845C (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::EnsureChildServices(
        HANDLE *this,
        struct ILockScreenDirector **a2)
{
  int LockScreenDirector; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  struct ILockScreenDirector *v8; // rcx
  int started; // eax
  HRESULT v10; // eax
  int v11; // eax
  struct ILockScreenDirector *v13; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwindex; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE pHandles; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity");
  v16[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)v16);
  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  LockScreenDirector = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
                         (LockScreenDirectorServiceProviderImpl *)this,
                         &v13);
  v5 = LockScreenDirector;
  if ( LockScreenDirector >= 0 )
  {
    v8 = v13;
    if ( !dword_180652A98 )
    {
      if ( v13 )
        goto LABEL_19;
      dword_180652A98 = 1;
      if ( !*((_BYTE *)this + 160) )
      {
        started = LockScreenDirectorServiceProviderImpl::StartDirectorThread((LockScreenDirectorServiceProviderImpl *)this);
        v5 = started;
        if ( started < 0 )
        {
          v6 = (unsigned int)started;
          v7 = 129LL;
          goto LABEL_18;
        }
      }
      pHandles = this[17];
      v10 = CoWaitForMultipleHandles(0x18u, 0x1388u, 1u, &pHandles, &dwindex);
      v5 = v10;
      if ( v10 < 0 )
      {
        v6 = (unsigned int)v10;
        v7 = 136LL;
        goto LABEL_18;
      }
      if ( dwindex )
      {
        v7 = 137LL;
LABEL_17:
        v5 = -2147418113;
        v6 = 2147549183LL;
        goto LABEL_18;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v11 = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
              (LockScreenDirectorServiceProviderImpl *)this,
              &v13);
      v5 = v11;
      if ( v11 < 0 )
      {
        v6 = (unsigned int)v11;
        v7 = 138LL;
        goto LABEL_18;
      }
      v8 = v13;
    }
    if ( !v8 )
    {
      v7 = 142LL;
      goto LABEL_17;
    }
LABEL_19:
    (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v8 + 8LL))(v8);
    *a2 = v13;
    wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    v5 = 0;
    goto LABEL_20;
  }
  v6 = (unsigned int)LockScreenDirector;
  v7 = 112LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
    (const char *)v6);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::~LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)v16);
  return v5;
}
