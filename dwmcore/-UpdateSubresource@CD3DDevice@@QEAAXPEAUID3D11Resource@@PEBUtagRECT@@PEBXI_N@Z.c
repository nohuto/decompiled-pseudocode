/*
 * XREFs of ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1800B795C
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003D844 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800B76E4 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::UpdateSubresource(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        const struct tagRECT *a3,
        const void *a4,
        unsigned int a5,
        bool a6)
{
  LONG left; // eax
  __int64 v7; // rcx
  _DWORD v8[6]; // [rsp+50h] [rbp-28h] BYREF

  left = a3->left;
  v7 = *((_QWORD *)this + 70);
  v8[2] = 0;
  v8[0] = left;
  v8[1] = a3->top;
  v8[3] = a3->right;
  v8[4] = a3->bottom;
  v8[5] = 1;
  (*(void (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _DWORD *, const void *, unsigned int, _DWORD, bool))(*(_QWORD *)v7 + 928LL))(
    v7,
    a2,
    0LL,
    v8,
    a4,
    a5,
    0,
    a6);
}
