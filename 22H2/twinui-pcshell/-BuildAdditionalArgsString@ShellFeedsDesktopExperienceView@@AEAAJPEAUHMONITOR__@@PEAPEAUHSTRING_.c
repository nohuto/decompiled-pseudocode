/*
 * XREFs of ?BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING__@@@Z @ 0x1800C1F54
 * Callers:
 *     ?GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C276C (-GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x1800748D4 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x1800C2AB0 (-GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800C2C84 (-GetColorPrevalenceEnabled@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?GetStuckPlace@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800C32C0 (-GetStuckPlace@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::BuildAdditionalArgsString(
        ShellFeedsDesktopExperienceView *this,
        HMONITOR a2,
        HSTRING *a3)
{
  HRESULT StuckPlace; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  HSTRING Reserved1; // rbx
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  CortanaDesktopExperienceView *v11; // rcx
  bool ColorPrevalenceEnabled; // al
  const WCHAR *v13; // rcx
  unsigned int v14; // r8d
  HSTRING_HEADER *v15; // rax
  HRESULT v16; // eax
  ShellFeedsDesktopExperienceView *v17; // rcx
  __int64 v18; // rdx
  bool AppsUseLightTheme; // al
  unsigned int v20; // r8d
  const WCHAR *v21; // rcx
  HSTRING_HEADER *v22; // rax
  HSTRING newString; // [rsp+20h] [rbp-79h] BYREF
  HSTRING string; // [rsp+28h] [rbp-71h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-69h] BYREF
  const WCHAR *v27; // [rsp+38h] [rbp-61h] BYREF
  HSTRING_HEADER v28; // [rsp+40h] [rbp-59h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-39h] BYREF
  WCHAR sourceString[40]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a3 = 0LL;
  string = 0LL;
  StuckPlace = ShellFeedsDesktopExperienceView::GetStuckPlace(this, a2, (enum EDGEUI_TRAYSTUCKPLACE *)&v26);
  v5 = StuckPlace;
  if ( StuckPlace >= 0 )
  {
    memset_0(sourceString, 0, 0x44uLL);
    _o__itow_s(v26, sourceString, 34LL, 10LL);
    WindowsDeleteString(string);
    string = 0LL;
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString, v7)[1].Reserved.Reserved1;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)off_180509A68, v9);
    StuckPlace = WindowsConcatString((HSTRING)v10[1].Reserved.Reserved1, Reserved1, &string);
    v5 = StuckPlace;
    if ( StuckPlace < 0 )
    {
      v6 = 1000LL;
      goto LABEL_5;
    }
    newString = 0LL;
    ColorPrevalenceEnabled = CortanaDesktopExperienceView::GetColorPrevalenceEnabled(v11);
    v13 = L"&ColorPrevalenceEnabled=true";
    if ( !ColorPrevalenceEnabled )
      v13 = L"&ColorPrevalenceEnabled=false";
    v27 = v13;
    WindowsDeleteString(newString);
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, &v27, v14);
    v16 = WindowsConcatString(string, (HSTRING)v15[1].Reserved.Reserved1, &newString);
    v5 = v16;
    if ( v16 >= 0 )
    {
      AppsUseLightTheme = ShellFeedsDesktopExperienceView::GetAppsUseLightTheme(v17);
      v21 = L"&AppsUseLightTheme=true";
      if ( !AppsUseLightTheme )
        v21 = L"&AppsUseLightTheme=false";
      v27 = v21;
      v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, &v27, v20);
      v16 = WindowsConcatString(newString, (HSTRING)v22[1].Reserved.Reserved1, a3);
      v5 = v16;
      if ( v16 >= 0 )
      {
        v5 = 0;
        goto LABEL_16;
      }
      v18 = 1009LL;
    }
    else
    {
      v18 = 1005LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
LABEL_16:
    WindowsDeleteString(newString);
    newString = 0LL;
    goto LABEL_17;
  }
  v6 = 997LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)StuckPlace);
LABEL_17:
  WindowsDeleteString(string);
  return v5;
}
