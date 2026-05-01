/*
 * XREFs of ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x1800ECA48
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800E8EE0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800E8EE0.c)
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x1800EB7A0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800EB990 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        HWND a2,
        HWND a3)
{
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME v6; // [rsp+48h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), a2);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  do
  {
    _mm_pause();
    GetSystemTimeAsFileTime(&v6);
  }
  while ( v6.dwLowDateTime == SystemTimeAsFileTime.dwLowDateTime
       && v6.dwHighDateTime == SystemTimeAsFileTime.dwHighDateTime );
  (*(void (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), a3);
}
