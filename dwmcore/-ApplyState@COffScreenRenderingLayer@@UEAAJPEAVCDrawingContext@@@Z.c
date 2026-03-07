__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  char v4; // bp
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax

  v4 = 0;
  v5 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 0);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3Du, 0LL);
  }
  else
  {
    v4 = 1;
    v8 = CExternalLayer::ApplyRenderTarget(this, a2);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)a2 + 5);
      v11 = 0LL;
      v12 = *(_DWORD *)(v10 + 368);
      if ( v12 )
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 344) + 8LL * (unsigned int)(v12 - 1));
      *(_BYTE *)(v11 + 74) = 1;
      v13 = *((_QWORD *)a2 + 1009);
      *((_QWORD *)a2 + 1009) = 0LL;
      *((_QWORD *)this + 5) = v13;
      return v7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x44u, 0LL);
  }
  CExternalLayer::RestoreRenderTarget(this, a2);
  if ( v4 )
    CDrawingContext::PopAlpha(a2, 0);
  return v7;
}
