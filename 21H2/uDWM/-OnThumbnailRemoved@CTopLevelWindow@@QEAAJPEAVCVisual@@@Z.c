/*
 * XREFs of ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180095290
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18003D484 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016B00 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailRemoved(CTopLevelWindow *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 67);
  if ( v4 )
  {
    v5 = VisualCollection::Remove((VisualCollection *)(v4 + 32), a2);
    v3 = v5;
    if ( v5 >= 0 )
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 67) + 72LL) == (*((_QWORD *)this + 60) != 0LL) )
      {
        v6 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 91));
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x66Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x664u);
    }
  }
  return v3;
}
