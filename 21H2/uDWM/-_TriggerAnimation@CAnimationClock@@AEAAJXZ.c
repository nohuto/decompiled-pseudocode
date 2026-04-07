/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800412E4
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18002DABC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x180008710 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012BB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002E06C (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002E34C (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180041450 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18004147C (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099898 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  signed int v4; // edi
  __int64 v5; // rdx
  int ProxyFromShared; // eax
  CBaseObject *v8; // rbx
  int v9; // eax
  CBaseObject *v10; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD hObject[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v12[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"TriggerClock");
  v2 = *(_OWORD *)((char *)this + 120);
  v12[0] = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  *(_OWORD *)&hObject[1] = v2;
  AnimationClockLoggingTelemetry::TriggerClock::StartActivity(
    (AnimationClockLoggingTelemetry::TriggerClock *)v12,
    (struct _GUID *)&hObject[1]);
  v3 = *((_QWORD *)this + 14);
  v4 = 0;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = NtDCompositionCommitSynchronizationObject(v3);
    if ( v9 < 0 )
    {
      v4 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xDA,
             (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
             (const char *)(unsigned int)v9,
             (int)v10);
      goto LABEL_4;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 14,
      0LL);
  }
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                              + 5)
                                                                            + 24LL)
                                                              + 224LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL),
           v5,
           &hObject[1]);
    if ( v4 >= 0 )
    {
      v10 = 0LL;
      ProxyFromShared = CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                          hObject[1],
                          (volatile signed __int32 **)&v10);
      v8 = v10;
      v4 = ProxyFromShared;
      if ( ProxyFromShared >= 0 )
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v10 + 2) + 16LL) + 856LL))(
               *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL),
               *(unsigned int *)(*((_QWORD *)v10 + 2) + 24LL),
               *((_QWORD *)this + 11));
      CloseHandle((HANDLE)hObject[1]);
      if ( v8 )
        CBaseObject::Release(v8);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, v4);
LABEL_4:
  AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock((AnimationClockLoggingTelemetry::TriggerClock *)v12);
  return (unsigned int)v4;
}
