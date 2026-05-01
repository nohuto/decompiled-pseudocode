/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800F40CC
 * Callers:
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x180149E1C (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     WINRT_WaitForSingleObject @ 0x180090C9E (WINRT_WaitForSingleObject.c)
 *     WINRT_CloseHandle @ 0x180090CF2 (WINRT_CloseHandle.c)
 *     WINRT_CreateEventW @ 0x180091630 (WINRT_CreateEventW.c)
 *     ?Show@?$consume_Windows_UI_Notifications_IToastNotifier@UIToastNotifier@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBUToastNotification@Notifications@UI@Windows@3@@Z @ 0x1800F4D2C (-Show@-$consume_Windows_UI_Notifications_IToastNotifier@UIToastNotifier@Notifications@UI@Windows.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAX@Z @ 0x180260DD8 (--$check_pointer@X@winrt@@YAPEAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(
        __int64 a1)
{
  HANDLE EventW; // rax
  void *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v6; // [rsp+58h] [rbp+28h] BYREF

  EventW = WINRT_CreateEventW(0LL, 1, 0, 0LL);
  v3 = (void *)winrt::check_pointer<void>(EventW);
  v6 = 0LL;
  v4 = operator new(0x18uLL);
  v4[1] = v3;
  *((_DWORD *)v4 + 4) = 1;
  *v4 = off_180507F30;
  v6 = v4;
  winrt::impl::consume_Windows_UI_Notifications_IToastNotifier<winrt::Windows::UI::Notifications::IToastNotifier>::Show(
    a1,
    &v6);
  WINRT_WaitForSingleObject(v3, 0xFFFFFFFF);
  return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v6);
}
