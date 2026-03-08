/*
 * XREFs of ?PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z @ 0x1801F9014
 * Callers:
 *     ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801FD440 (-UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802B52C0 (-UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1801D384C (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801D3998 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 */

__int64 __fastcall CDrawListBitmap::PrepareOutputTarget(struct IBitmapResource **this, struct CDrawingContext *a2)
{
  struct IBitmapRealization **v3; // rdi
  struct IBitmapResource *v5; // rbx
  struct IBitmapRealization *v6; // r8
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct IBitmapResource *, struct IBitmapRealization **); // rbp
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  struct IBitmapRealization *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(struct IBitmapRealization *, __int64, __int64 *); // rbx
  __int64 v16; // rax
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 1;
  if ( !*this )
    goto LABEL_6;
  CDrawingContext::RecordBitmapResourceInfo(a2, *this);
  v5 = *this;
  v6 = *v3;
  v7 = *(_QWORD *)v5;
  *v3 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v7 + 64);
  if ( v6 )
  {
    v9 = (__int64)v6 + *(int *)(*((_QWORD *)v6 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v8(v5, v3);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
LABEL_6:
    CDrawingContext::RecordBitmapRealizationInfo(a2, *v3);
    v12 = *v3;
    v13 = *((_QWORD *)a2 + 3);
    v14 = *(_QWORD *)v12;
    v20 = 0LL;
    v15 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64, __int64 *))(v14 + 48);
    v16 = (*(__int64 (__fastcall **)(char *))(v13 + 40))((char *)a2 + 24);
    v17 = v15(v12, v16, &v20);
    v11 = v17;
    if ( v17 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v17);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
  }
  return v11;
}
