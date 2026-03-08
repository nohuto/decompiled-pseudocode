/*
 * XREFs of ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801D3998
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801B3300 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1801D03F0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z @ 0x1801F9014 (-PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x180018E04 (-IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapResourceInfo(CDrawingContext *this, struct IBitmapResource *a2)
{
  __int64 v4; // rcx
  bool IsNormalDesktopRender; // si
  __int64 v6; // rdx
  void (__fastcall *v7)(struct IBitmapResource *, __int64, const struct CMILMatrix *); // rbx
  void (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v10; // rdx
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(this);
  LOBYTE(v6) = IsNormalDesktopRender;
  (*(void (__fastcall **)(struct IBitmapResource *, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 40LL))(
    a2,
    v6,
    0LL,
    (v4 + 164) & -(__int64)(*(_BYTE *)(v4 + 192) != 0));
  v7 = *(void (__fastcall **)(struct IBitmapResource *, __int64, const struct CMILMatrix *))(*(_QWORD *)a2 + 48LL);
  v8 = (void (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 4)
                                              + 8LL
                                              + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
  (**v8)(v8, v11);
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
  LOBYTE(v10) = IsNormalDesktopRender;
  v7(a2, v10, TopByReference);
}
