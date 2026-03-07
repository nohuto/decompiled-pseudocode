char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // bp
  __int64 v3; // rsi
  unsigned int i; // r14d
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  FastRegion::Internal::CRgnData *v9; // rcx
  const struct FastRegion::Internal::CRgnData *v10; // rdx
  bool IsEqualTo; // al

  v1 = 0;
  if ( *((_BYTE *)this + 11309) )
  {
    v1 = 1;
    *((_BYTE *)this + 11309) = 0;
  }
  v3 = *((_QWORD *)this + 11);
  if ( *((_QWORD *)this + 12) - v3 != *((_QWORD *)this + 463) - *((_QWORD *)this + 462)
    || *((_BYTE *)this + 11306) != *((_BYTE *)this + 11307) )
  {
    return 1;
  }
  for ( i = 0; i < -1227133513 * (unsigned int)((*((_QWORD *)this + 12) - v3) >> 5); ++i )
  {
    v6 = 224LL * i;
    COverlayContext::ComparePlaneAttributes(
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v6 + v3 + 32),
      (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v6 + *((_QWORD *)this + 462) + 32LL),
      (bool *)(v6 + v3 + 181),
      (bool *)(v6 + v3 + 182));
    v3 = *((_QWORD *)this + 11);
    if ( *(_BYTE *)(v3 + v6 + 181) )
      return 1;
    v7 = *((_QWORD *)this + 462);
    if ( *(_QWORD *)(v3 + v6 + 16) != *(_QWORD *)(v7 + v6 + 16)
      || *(_QWORD *)(v3 + v6 + 24) != *(_QWORD *)(v7 + v6 + 24)
      || *(_BYTE *)(v3 + v6 + 177) != *(_BYTE *)(v7 + v6 + 177)
      || *(_BYTE *)(v3 + v6 + 179) != *(_BYTE *)(v7 + v6 + 179)
      || (unsigned __int8)operator!=(v6 + v3 + 144, v6 + v7 + 144, v7) )
    {
      return 1;
    }
    v9 = **(FastRegion::Internal::CRgnData ***)(v3 + v6 + 160);
    v10 = **(const struct FastRegion::Internal::CRgnData ***)(v8 + v6 + 160);
    if ( *(_DWORD *)v9 )
    {
      if ( !*(_DWORD *)v10 )
        return 1;
      IsEqualTo = FastRegion::Internal::CRgnData::IsEqualTo(v9, v10);
    }
    else
    {
      IsEqualTo = *(_DWORD *)v10 == 0;
    }
    if ( !IsEqualTo )
      return 1;
  }
  return v1;
}
