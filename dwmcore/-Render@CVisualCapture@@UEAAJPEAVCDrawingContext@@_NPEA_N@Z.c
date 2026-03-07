__int64 __fastcall CVisualCapture::Render(LARGE_INTEGER *this, struct CDrawingContext *a2, char a3, bool *a4)
{
  CVisualCapture *v4; // rdi
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  bool v14; // zf

  v4 = (CVisualCapture *)&this[-246];
  if ( !(*(unsigned __int8 (__fastcall **)(LARGE_INTEGER *))(this[-246].QuadPart + 264))(this - 246) )
    goto LABEL_5;
  LOBYTE(v9) = a3;
  v10 = COffScreenRenderTarget::Render(this - 7, a2, v9, a4);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA1u, 0LL);
    goto LABEL_11;
  }
  v12 = CVisualCapture::EnqueueSetEvent(v4);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA2u, 0LL);
LABEL_11:
    BYTE4(this[-27].QuadPart) = 0;
    CVisualCapture::SendCaptureCompleted(v4);
    return 0LL;
  }
  BYTE4(this[-27].QuadPart) = 0;
LABEL_5:
  v14 = BYTE1(this[-7].LowPart) == 0;
  if ( !BYTE1(this[-7].LowPart) )
  {
    CVisualCapture::CheckForCaptureCompleted(v4);
    v14 = BYTE1(this[-7].LowPart) == 0;
  }
  *a4 = v14;
  return 0LL;
}
