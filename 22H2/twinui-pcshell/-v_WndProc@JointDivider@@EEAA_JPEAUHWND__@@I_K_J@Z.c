/*
 * XREFs of ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180486C50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z @ 0x180276AD8 (-IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z.c)
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x180486568 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall JointDivider::v_WndProc(HWND *this, HWND a2, UINT a3, WPARAM a4, const WCHAR *lParam)
{
  __int64 v8; // rbx
  HDC v9; // rax
  void *ppvOut; // [rsp+30h] [rbp-41h] BYREF
  struct tagPOINT Points; // [rsp+38h] [rbp-39h] BYREF
  tagPAINTSTRUCT Paint; // [rsp+40h] [rbp-31h] BYREF

  v8 = 0LL;
  if ( a3 == 15 )
  {
    v9 = (HDC)a4;
    if ( !a4 )
      v9 = BeginPaint(this[1], &Paint);
    JointDivider::HandlePaint((JointDivider *)(this - 5), v9);
    if ( !a4 )
      EndPaint(this[1], &Paint);
  }
  else
  {
    if ( a3 == 26 )
    {
      if ( !CImmersiveColor::IsColorSchemeChangeMessage(26, lParam) )
        return DefWindowProcW(this[1], a3, a4, (LPARAM)lParam);
LABEL_13:
      InvalidateRect(this[1], 0LL, 1);
      return DefWindowProcW(this[1], a3, a4, (LPARAM)lParam);
    }
    if ( a3 == 33 )
    {
      return 3LL;
    }
    else
    {
      if ( a3 != 513 )
      {
        if ( a3 != 794 )
        {
          if ( a3 == 798 )
            DwmpTransitionWindow(this[1], 1073741846LL);
          return DefWindowProcW(this[1], a3, a4, (LPARAM)lParam);
        }
        goto LABEL_13;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             (IUnknown *)*(this - 3),
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
             &ppvOut) >= 0 )
      {
        Points.x = (__int16)lParam;
        Points.y = SWORD1(lParam);
        MapWindowPoints(this[1], 0LL, &Points, 1u);
        (*(void (__fastcall **)(void *, _QWORD, __int64, struct tagPOINT))(*(_QWORD *)ppvOut + 72LL))(
          ppvOut,
          0LL,
          3LL,
          Points);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
  }
  return v8;
}
