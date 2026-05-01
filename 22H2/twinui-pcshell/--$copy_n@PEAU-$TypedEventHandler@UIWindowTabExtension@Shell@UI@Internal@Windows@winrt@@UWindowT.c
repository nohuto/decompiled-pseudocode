/*
 * XREFs of ??$copy_n@PEAU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@PEAU1234@I0@Z @ 0x1800E5FB0
 * Callers:
 *     ?add@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x1800EE5F8 (-add@-$event@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowT.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800E8484 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

__int64 __fastcall std::copy_n<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs> *,unsigned int,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs> *>(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  int i; // esi

  v3 = a3;
  v5 = a1;
  if ( a2 )
  {
    winrt::Windows::Foundation::IUnknown::operator=(a3, a1);
    v3 += 8LL;
    for ( i = a2 - 1; i; --i )
    {
      v5 += 8LL;
      winrt::Windows::Foundation::IUnknown::operator=(v3, v5);
      v3 += 8LL;
    }
  }
  return v3;
}
