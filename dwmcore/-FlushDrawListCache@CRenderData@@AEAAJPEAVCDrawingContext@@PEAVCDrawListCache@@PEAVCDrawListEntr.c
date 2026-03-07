__int64 __fastcall CRenderData::FlushDrawListCache(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListCache *a3,
        struct CDrawListEntryBuilder *a4)
{
  unsigned int v4; // edi
  int v8; // eax
  unsigned int v9; // ecx

  v4 = 0;
  if ( (unsigned int)((__int64)(*((_QWORD *)a4 + 12) - *((_QWORD *)a4 + 11)) >> 3) )
    CDrawListCache::Update(a3, a2, a4);
  CDrawListEntryBuilder::Reset(a4);
  if ( *((_QWORD *)a3 + 4) )
  {
    v8 = CDrawingContext::EmitDrawListCache(a2, a3);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4A2u, 0LL);
  }
  if ( (*((_DWORD *)a3 + 22) & 0x100) != 0 )
    CDrawListCache::Invalidate(a3);
  return v4;
}
