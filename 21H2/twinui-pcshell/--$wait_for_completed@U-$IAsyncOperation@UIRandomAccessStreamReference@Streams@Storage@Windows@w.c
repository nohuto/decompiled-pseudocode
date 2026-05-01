/*
 * XREFs of ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800F3FF0
 * Callers:
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamReference@Streams@Storage@Windows@3@XZ @ 0x180101234 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamReferen.c)
 *     ?wait_for@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180101D50 (-wait_for@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamRe.c)
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
__int64 __fastcall winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>(
        __int64 a1,
        DWORD a2)
{
  HANDLE EventW; // rax
  void *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v8; // [rsp+68h] [rbp+38h] BYREF

  EventW = WINRT_CreateEventW(0LL, 1, 0, 0LL);
  v5 = (void *)winrt::check_pointer<void>(EventW);
  v8 = 0LL;
  v6 = operator new(0x18uLL);
  v6[1] = v5;
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_180507F50;
  v8 = v6;
  winrt::impl::consume_Windows_UI_Notifications_IToastNotifier<winrt::Windows::UI::Notifications::IToastNotifier>::Show(
    a1,
    &v8);
  WINRT_WaitForSingleObject(v5, a2);
  return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
}
