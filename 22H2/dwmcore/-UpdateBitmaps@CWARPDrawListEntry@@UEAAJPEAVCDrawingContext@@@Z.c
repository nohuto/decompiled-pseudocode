/*
 * XREFs of ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801A23D0
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801A2200 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x180040D9C (-RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z.c)
 *     ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x180054500 (-EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::UpdateBitmaps(CWARPDrawListEntry *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CDrawListBitmap *v3; // rdi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  v3 = (CWARPDrawListEntry *)((char *)this + 240);
  if ( *((_OWORD *)this + 15) == 0LL
    || (CDrawListBitmap::RecordContentInfo(v3, a2), v6 = CDrawListBitmap::EnsureDeviceResource(v3, a2), v2 = v6, v6 >= 0) )
  {
    if ( *((_QWORD *)this + 43) || *((_QWORD *)this + 44) )
    {
      CDrawListBitmap::RecordContentInfo((CWARPDrawListEntry *)((char *)this + 344), a2);
      v8 = CDrawListBitmap::EnsureDeviceResource((CWARPDrawListEntry *)((char *)this + 344), a2);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1A1u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x19Bu, 0LL);
  }
  return v2;
}
