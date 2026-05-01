/*
 * XREFs of ?SetTipSessionId@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C06C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x180256BA0 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::SetTipSessionId(SearchAppDesktopExperienceView *this, HSTRING a2)
{
  HSTRING v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::hstring::operator=((char *)this + 296, &v3);
  return 0LL;
}
