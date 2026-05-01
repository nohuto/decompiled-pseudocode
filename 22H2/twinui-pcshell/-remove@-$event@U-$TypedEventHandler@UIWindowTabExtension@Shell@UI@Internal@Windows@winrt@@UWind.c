/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800EF71C
 * Callers:
 *     ??$?RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI@345@@?$event@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUWindowTabHost@implementation@Shell@Internal@Windows@1@AEBUWindowTabsChangedEventArgs@4UI@561@@Z @ 0x1800E3C14 (--$-RUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@2UI.c)
 *     ?WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x1800ED1DC (-WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_tok.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x180090CA2 (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x180090CC6 (WINRT_AcquireSRWLockExclusive.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800E6518 (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Interna.c)
 *     ??$make_event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1800E6BBC (--$make_event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@U.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800E8444 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800E8484 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800EFD18 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>::remove(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v3; // r15
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  __int64 Ptr; // rcx
  int v7; // r13d
  __int64 v8; // rbx
  bool v9; // r12
  unsigned int v10; // r13d
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 *v14; // rax
  __int64 *v15; // rsi
  __int64 *v16; // rax
  __int64 *v17; // [rsp+20h] [rbp-10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+28h] [rbp-8h]
  RTL_SRWLOCK *v19; // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+80h] [rbp+50h] BYREF
  __int64 v21; // [rsp+88h] [rbp+58h] BYREF

  v19 = a1;
  v3 = a1;
  v4 = 0LL;
  v21 = 0LL;
  v5 = a1 + 2;
  v18 = a1 + 2;
  WINRT_AcquireSRWLockExclusive(a1 + 2);
  Ptr = (__int64)v3->Ptr;
  if ( !v3->Ptr )
    goto LABEL_21;
  v7 = *(_DWORD *)(Ptr + 4);
  v8 = 0LL;
  v20 = 0LL;
  v9 = 0;
  v10 = v7 - 1;
  if ( v10 )
  {
    v11 = winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>(
            &v17,
            v10);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::operator=(
      &v20,
      v11);
    if ( v17 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v17);
    v8 = v20;
    v12 = (__int64)v3->Ptr;
    v13 = (__int64 *)((char *)v3->Ptr + 8);
    v14 = &v13[*(unsigned int *)(v12 + 4)];
    v17 = v14;
    if ( v13 == v14 )
      goto LABEL_19;
    v15 = (__int64 *)(v20 + 8);
    do
    {
      if ( v9 || a2 != *v13 )
      {
        if ( !v10 )
          break;
        winrt::Windows::Foundation::IUnknown::operator=(v15++, v13);
        --v10;
        v14 = v17;
      }
      else
      {
        v9 = 1;
      }
      ++v13;
    }
    while ( v13 != v14 );
    v5 = v18;
    v3 = v19;
  }
  else
  {
    v9 = *(_QWORD *)(Ptr + 8) == a2;
  }
  if ( v9 )
  {
    WINRT_AcquireSRWLockExclusive(v3 + 1);
    v16 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>>(
            &v19,
            (__int64 *)v3,
            (__int64)&v20);
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::operator=(
      &v21,
      v16);
    if ( v19 )
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v19);
    ReleaseSRWLockExclusive_0(v3 + 1);
    v4 = v21;
    v8 = v20;
  }
LABEL_19:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v20);
LABEL_21:
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(&v21);
}
