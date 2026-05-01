/*
 * XREFs of ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1804868F8
 * Callers:
 *     ?v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180486FE0 (-v_WndProc@JointDivider@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801B8788 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x180486ADC (-PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x180490A54 (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointDivider::HandlePaint(JointDivider *this, HDC hdc)
{
  __int64 v4; // rbx
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT Points; // [rsp+38h] [rbp-28h] BYREF
  struct tagPOINT v7; // [rsp+48h] [rbp-18h] BYREF

  v5 = 0LL;
  v4 = *((_QWORD *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 104LL))(
         v4,
         0LL,
         2LL,
         &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
         &v5) >= 0 )
  {
    `vector constructor iterator'((char *)&Points, 16LL, 2LL, (void (__fastcall *)(char *))Geometry::CRect::CRect);
    (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *))(*(_QWORD *)v5 + 56LL))(v5, 0LL, &Points);
    (*(void (__fastcall **)(__int64, __int64, struct tagPOINT *))(*(_QWORD *)v5 + 56LL))(v5, 1LL, &v7);
    MapWindowPoints(0LL, *((HWND *)this + 6), &Points, 2u);
    MapWindowPoints(0LL, *((HWND *)this + 6), &v7, 2u);
    JointDivider_Paint(
      hdc,
      (HDC)&Points,
      (const struct Geometry::CRect *)&v7,
      *((enum DEVICE_SCALE_FACTOR *)this + 20),
      *((HFONT *)this + 9));
    JointDivider::PaintFocusIndicator(this, hdc, (const struct Geometry::CRect *)&v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
}
