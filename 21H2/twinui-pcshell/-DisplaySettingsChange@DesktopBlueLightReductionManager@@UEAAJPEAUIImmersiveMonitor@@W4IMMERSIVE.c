/*
 * XREFs of ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802085A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a0f94ce564b248d96bcce93f9fd6f559___ @ 0x180207B74 (Windows--Internal--ComTaskPool--QueueTask__lambda_a0f94ce564b248d96bcce93f9fd6f559___.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180207D68 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180207F28 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180208928 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180208928.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180208EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180208EB0.c)
 *     ?get@?$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@P6AXXZ@Z @ 0x18020984C (-get@-$static_lazy@VBlueLightReductionLogging@@@details@wil@@QEAAPEAVBlueLightReductionLogging@@.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebx
  char v5; // di
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  _DWORD *v8; // rcx
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 result; // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  __int64 v18[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h]

  v4 = a3 & 0x28;
  v5 = 0;
  try
  {
    v6 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 40LL))();
    v7 = retaddr;
    if ( v6 >= 0 )
      v5 = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFE,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v6);
    v8 = *(_DWORD **)(wil::details::static_lazy<BlueLightReductionLogging>::get(
                        v7,
                        _lambda_8fbe65ba72b2d61923eb3411a963ff67_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
    {
      LOBYTE(v21) = v5;
      LOBYTE(v20) = v4 != 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v10,
        byte_180574AB9,
        v11,
        (__int64)v9,
        (__int64)&v20,
        (__int64)&v21);
    }
    if ( v4 )
    {
      v20 = a1 - 112;
      if ( a1 != 112 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::InternalAddRef(a1 - 112);
      v16[0] = a1 - 112;
      v16[1] = v22;
      v17 = v5;
      wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
        v18,
        &v20);
      v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_a0f94ce564b248d96bcce93f9fd6f559___(
              v13,
              v12,
              *(_DWORD *)(a1 + 92),
              (__int64)v16);
      if ( v18[0] )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v18[0]);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x114,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v14);
      if ( a1 != 112 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(a1 - 112);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x118,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v9);
  }
  return result;
}
