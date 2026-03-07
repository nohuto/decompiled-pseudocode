__int64 __fastcall CD2DContext::FlushDrawList(CD2DContext *this)
{
  unsigned int v2; // edi
  struct ID2D1PrivateCompositorRenderer *v3; // rbx
  int v4; // eax
  unsigned int v5; // ecx
  struct ID2D1PrivateCompositorRenderer *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  CDrawListBatchManager::CloseCurrentDrawListEntryBatch((char *)this + 8, &v7);
  v3 = v7;
  if ( v7 )
  {
    v4 = CD2DContext::DrawCustomCallbackRendererInternal(this, v7);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x21Eu, 0LL);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v3 + 8);
  }
  return v2;
}
