/*
 * XREFs of ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1803BB540
 * Callers:
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator() @ 0x1800CEF88 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--operator().c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1803BAE98 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BAFB4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1803BE070 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     <none>
 */

bool __fastcall KBViewInfo::IsAppDefaultView(KBViewInfo *this)
{
  HSTRING v1; // rcx
  const WCHAR *StringRawBuffer; // rax

  v1 = (HSTRING)*((_QWORD *)this + 14);
  if ( !v1 )
    return 1;
  StringRawBuffer = WindowsGetStringRawBuffer(v1, 0LL);
  return CompareStringOrdinal(StringRawBuffer, -1, L"Windows.Internal.ShellExperience.TopLevelApplication", -1, 1) == 2;
}
