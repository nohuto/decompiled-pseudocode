/*
 * XREFs of ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1802998A0
 * Callers:
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802837E0 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DTarget::GetColorSpace(CD2DTarget *this)
{
  __int64 (__fastcall ***v1)(_QWORD, _BYTE *); // rcx
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 3)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 12LL));
  return *(unsigned int *)((**v1)(v1, v3) + 8);
}
