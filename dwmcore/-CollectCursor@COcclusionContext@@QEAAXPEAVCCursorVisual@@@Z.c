void __fastcall COcclusionContext::CollectCursor(COcclusionContext *this, struct CCursorVisual *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int128 *TopByReference; // rax
  struct MilRectF *v7; // r9
  COverlayContext *v8; // r10

  v2 = *((_QWORD *)this + 193);
  v5 = v2 + 8LL * *((_QWORD *)this + 192);
  while ( v2 != v5 )
  {
    if ( *(_BYTE *)(*(_QWORD *)v2 + 11303LL) )
    {
      if ( *((_DWORD *)this + 36) )
        CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference((__int64)this + 144);
      TopByReference = (__int128 *)CMatrixStack::GetTopByReference((COcclusionContext *)((char *)this + 32));
      COverlayContext::TryEnableHardwareCursor(v8, (__int64)a2, TopByReference, v7);
    }
    v2 += 8LL;
  }
}
