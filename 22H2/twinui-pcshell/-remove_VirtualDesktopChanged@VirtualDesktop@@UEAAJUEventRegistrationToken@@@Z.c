/*
 * XREFs of ?remove_VirtualDesktopChanged@VirtualDesktop@@UEAAJUEventRegistrationToken@@@Z @ 0x1803E8C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180051594 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall VirtualDesktop::remove_VirtualDesktopChanged(VirtualDesktop *this, struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (__int64 *)this + 10,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
