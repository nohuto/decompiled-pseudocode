/*
 * XREFs of ?AppendSessonIdToArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800BF3C8
 * Callers:
 *     ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180010F24 (-NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType.c)
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800120FC (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x1800BF24C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::AppendSessonIdToArgs(
        SearchAppDesktopExperienceView *this,
        HSTRING a2,
        HSTRING *a3)
{
  HSTRING v5; // rbx
  HSTRING *v6; // rax
  HSTRING *v7; // rax
  HRESULT v8; // eax
  unsigned int v9; // ebx
  HSTRING v10; // rax
  HSTRING v12[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HSTRING length; // [rsp+50h] [rbp+20h] BYREF
  HSTRING v15; // [rsp+60h] [rbp+30h] BYREF
  HSTRING string; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  string = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  if ( *((_QWORD *)this + 40) )
  {
    v6 = (HSTRING *)winrt::operator+((__int64)&length, (__int64)L"SessionId=", (__int64)this + 320);
    if ( &v15 != v6 )
    {
      v5 = *v6;
      *v6 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      v15 = v5;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&length);
    if ( a2 )
    {
      LODWORD(length) = 0;
      if ( WindowsGetStringRawBuffer(a2, (UINT32 *)&length) )
      {
        if ( (_DWORD)length )
        {
          v7 = (HSTRING *)winrt::operator+((__int64)v12, (__int64)L"&", (__int64)&v15);
          if ( &v15 != v7 )
          {
            v5 = *v7;
            *v7 = 0LL;
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
            v15 = v5;
          }
          winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
        }
      }
    }
  }
  WindowsDeleteString(string);
  string = 0LL;
  v8 = WindowsConcatString(a2, v5, &string);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = string;
    string = 0LL;
    *a3 = v10;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6CE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  WindowsDeleteString(string);
  return v9;
}
