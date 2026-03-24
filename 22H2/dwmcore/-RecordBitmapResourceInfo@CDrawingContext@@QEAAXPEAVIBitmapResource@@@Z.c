/*
 * XREFs of ?RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z @ 0x1800569D0
 * Callers:
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x180040D9C (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180054020 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x180174810 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018DE40 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapResourceInfo(CDrawingContext *this, struct IBitmapResource *a2)
{
  struct IBitmapResource *v2; // rsi
  bool v4; // di
  __int64 v5; // rax
  void (__fastcall *v6)(struct IBitmapResource *, void *, _QWORD); // rdi
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  __int64 v8; // rax
  int v9; // edx
  void *v10; // rdx
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  v4 = *((_QWORD *)this + 6) && !*((_BYTE *)g_pComposition + 1129);
  v5 = *(_QWORD *)a2;
  LOBYTE(a2) = v4;
  (*(void (__fastcall **)(struct IBitmapResource *, struct IBitmapResource *, _QWORD, _QWORD))(v5 + 32))(
    v2,
    a2,
    *((_QWORD *)this + 7),
    0LL);
  if ( v4 )
  {
    v6 = *(void (__fastcall **)(struct IBitmapResource *, void *, _QWORD))(*(_QWORD *)v2 + 40LL);
    v7 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 4)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
    v8 = (**v7)(v7, v11);
    v9 = *((_DWORD *)this + 102);
    if ( v9 )
      v10 = (void *)(*((_QWORD *)this + 53) + 68LL * (unsigned int)(v9 - 1));
    else
      v10 = &CMILMatrix::Identity;
    v6(v2, v10, *(unsigned int *)(v8 + 8));
  }
}
