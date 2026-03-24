/*
 * XREFs of ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x180054500
 * Callers:
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x180040814 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180051CC0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x180053998 (-FillShapeWithBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180054020 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800542A0 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801A23D0 (-UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180268C60 (-UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDrawListBitmap::EnsureDeviceResource(CDrawListBitmap *this, const struct CDrawingContext *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // r8
  char *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_OWORD *)((char *)a2 + 56);
  v3 = *(_QWORD *)this;
  v4 = (char *)this + 16;
  v15 = 0LL;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 9);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v3 + 48LL))(v3, &v15);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB4,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v5,
        v13);
      goto LABEL_7;
    }
  }
  else
  {
    v15 = (__int64 *)*((_QWORD *)this + 1);
    v12 = (__int64)v15 + *(int *)(v15[1] + 4) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  }
  v7 = *v15;
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64 *))(v7 + 48))(v15, v4, &v16);
  v6 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
      (const char *)(unsigned int)v8,
      v13);
  else
    v6 = 0;
  if ( v16 )
  {
    v9 = *(int *)(*(_QWORD *)(v16 + 8) + 4LL) + v16 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_7:
  if ( v15 )
  {
    v10 = (__int64)v15 + *(int *)(v15[1] + 4) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v6;
}
