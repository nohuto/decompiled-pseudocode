/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8443d09f6513b5b9b20fd7f53aa1c6cd___::Run @ 0x1803407F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DoInvoke@V_lambda_01545e3462c885316a734816cc3d9dbf_@@@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_01545e3462c885316a734816cc3d9dbf_@@@Z @ 0x18033B5C0 (--$DoInvoke@V_lambda_01545e3462c885316a734816cc3d9dbf_@@@-$EventSource@UIPopupPropertyChangedEve.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8443d09f6513b5b9b20fd7f53aa1c6cd___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v4 = 0;
  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_01545e3462c885316a734816cc3d9dbf_>(
         v1 + 40,
         (__int64)&v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
}
