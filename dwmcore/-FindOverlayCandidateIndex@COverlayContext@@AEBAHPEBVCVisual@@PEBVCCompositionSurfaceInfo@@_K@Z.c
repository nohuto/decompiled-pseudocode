__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        const struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // r10d
  __int64 v8; // rbx
  unsigned int i; // r8d
  __int64 v10; // rdx
  unsigned int v12; // [rsp+Ch] [rbp+Ch]

  LODWORD(v4) = 0;
  v5 = -1;
  v12 = 0;
  if ( a3 )
  {
    v4 = *((_QWORD *)a3 + 5);
    v12 = HIDWORD(v4);
  }
  v8 = *((_QWORD *)this + 11);
  for ( i = 0; i < -1227133513 * (unsigned int)((*((_QWORD *)this + 12) - v8) >> 5); ++i )
  {
    if ( !a2 || *(const struct CVisual **)(224LL * i + v8 + 8) == a2 )
    {
      v10 = 224LL * i;
      if ( (!a3 || *(_QWORD *)(*(_QWORD *)(v8 + v10 + 16) + 40LL) == __PAIR64__(v12, v4))
        && (!a4 || *(_QWORD *)(v8 + v10 + 24) == a4) )
      {
        return i;
      }
    }
  }
  return v5;
}
