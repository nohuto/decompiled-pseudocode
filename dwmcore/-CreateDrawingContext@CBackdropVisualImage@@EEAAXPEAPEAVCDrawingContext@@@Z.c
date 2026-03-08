/*
 * XREFs of ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800386D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180038BA0 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180087520 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

void __fastcall CBackdropVisualImage::CreateDrawingContext(CBackdropVisualImage *this, struct CDrawingContext **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  CDrawingContext::Create(a2);
  *((_QWORD *)*a2 + 25) = this;
  CBackdropVisualImage::EnsureAncestorList(this);
  v4 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v6, word_180338FC0);
  v5 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v7, "BVI-FullRender");
  CBackdropVisualImage::LogEtwEvent(this, v5, v4);
}
