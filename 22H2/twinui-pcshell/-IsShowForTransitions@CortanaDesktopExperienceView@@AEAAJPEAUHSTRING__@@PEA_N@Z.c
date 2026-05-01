/*
 * XREFs of ?IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x18027C99C
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180280AD0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180053148 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::IsShowForTransitions(
        CortanaDesktopExperienceView *this,
        HSTRING a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  const wchar_t *StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CortanaDesktopExperienceView *length; // [rsp+30h] [rbp+8h] BYREF
  HSTRING v10; // [rsp+38h] [rbp+10h] BYREF
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  v10 = a2;
  length = this;
  *a3 = 0;
  if ( a2 )
  {
    string = 0LL;
    v4 = Microsoft::WRL::Wrappers::HString::Set(&string, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x815,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v4);
      WindowsDeleteString(string);
      return v5;
    }
    LODWORD(length) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"StartMode=AppTransition") )
        *a3 = 1;
    }
    WindowsDeleteString(string);
  }
  return 0LL;
}
