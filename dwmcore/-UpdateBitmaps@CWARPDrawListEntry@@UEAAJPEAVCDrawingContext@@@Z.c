/*
 * XREFs of ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801FD440
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1801FD230 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z @ 0x1801F9014 (-PrepareOutputTarget@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::UpdateBitmaps(struct IBitmapResource **this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v2 = 0;
  if ( this[7] && (v5 = CDrawListBitmap::PrepareOutputTarget(this + 6, a2), v2 = v5, v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x198u, 0LL);
  }
  else if ( this[17] )
  {
    v7 = CDrawListBitmap::PrepareOutputTarget(this + 16, a2);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x19Du, 0LL);
  }
  return v2;
}
