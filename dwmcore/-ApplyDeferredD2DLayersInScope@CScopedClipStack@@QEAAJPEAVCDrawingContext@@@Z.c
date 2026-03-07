__int64 __fastcall CScopedClipStack::ApplyDeferredD2DLayersInScope(CScopedClipStack *this, struct CDrawingContext *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r15d
  __int64 i; // rsi
  __int64 v9; // r14
  char v10; // al
  CD2DLayer *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx

  v2 = *((_QWORD *)this + 1);
  v3 = 0;
  v4 = 0;
  for ( i = -858993459 * (unsigned int)((__int64)(*((_QWORD *)this + 234) - *((_QWORD *)this + 233)) >> 3)
          - *(_DWORD *)(v2 - 176); *(_QWORD *)(v2 - 160); i = (unsigned int)(i + 1) )
  {
    v9 = *((_QWORD *)this + 233);
    v10 = 0;
    v11 = *(CD2DLayer **)(v9 + 40 * i + 24);
    if ( v11 )
    {
      v12 = CD2DLayer::ApplyState(v11, a2);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x21Au, 0LL);
        return v3;
      }
      *(_QWORD *)(v9 + 40 * i + 24) = 0LL;
      v10 = 1;
      --*(_QWORD *)(v2 - 160);
    }
    if ( *(_BYTE *)(v9 + 40 * i + 36) )
    {
      if ( v10 )
      {
        v14 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v2 - 16), a2, v4);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x236u, 0LL);
          return v3;
        }
      }
      ++v4;
    }
  }
  return v3;
}
