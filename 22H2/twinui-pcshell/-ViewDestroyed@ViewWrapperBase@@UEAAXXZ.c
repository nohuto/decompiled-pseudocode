/*
 * XREFs of ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180342430
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CUIPopupHelper@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803157A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CUIPopupHelper@@@details@wil@@QEAAX_NW4Re.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cc0b3fba328f8aac054ce118344567ee___ @ 0x18033BE94 (Windows--Internal--ComTaskPool--QueueTask__lambda_cc0b3fba328f8aac054ce118344567ee___.c)
 *     ??$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z @ 0x18033C3F4 (--$ViewWrapperDestroyed@AEAIPEBGPEBG@ViewManagerInteropTraceLogging@@SAXAEAI$$QEAPEBG1@Z.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18033F748 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::ViewDestroyed(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  char *v7; // [rsp+20h] [rbp-10h] BYREF
  __int64 v8; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp+20h] BYREF
  PCWSTR v11; // [rsp+58h] [rbp+28h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 19), 0LL);
  v11 = WindowsGetStringRawBuffer(*((HSTRING *)this + 18), 0LL);
  ViewManagerInteropTraceLogging::ViewWrapperDestroyed<unsigned int &,unsigned short const *,unsigned short const *>(
    (_DWORD *)this + 35,
    (__int64 *)&v11,
    (__int64 *)&StringRawBuffer);
  (*(void (__fastcall **)(ViewWrapperBase *, _QWORD, __int64))(*(_QWORD *)this + 848LL))(this, 0LL, 1LL);
  (*(void (__fastcall **)(ViewWrapperBase *, __int64, __int64))(*(_QWORD *)this + 848LL))(this, 1LL, 1LL);
  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockExclusive(v2);
  StringRawBuffer = (PCWSTR)v2;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 192LL))((char *)this - 8);
  v4 = *((_QWORD *)this + 33);
  if ( v4 )
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this - 8, v4, 1);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetImpl'::`2'::impl,
    1u,
    v3);
  StringRawBuffer = (PCWSTR)((char *)this - 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&StringRawBuffer);
  v7 = (char *)this - 8;
  v8 = (__int64)this - 8;
  StringRawBuffer = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&StringRawBuffer);
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_cc0b3fba328f8aac054ce118344567ee___(v5, &v7);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
