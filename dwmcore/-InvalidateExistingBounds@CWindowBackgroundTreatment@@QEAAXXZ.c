void __fastcall CWindowBackgroundTreatment::InvalidateExistingBounds(__int64 this)
{
  __int128 v1; // xmm0
  __int64 v2; // xmm1_8

  v1 = *(_OWORD *)(this + 88);
  *(_BYTE *)(this + 300) = 1;
  v2 = *(_QWORD *)(this + 104);
  *(_OWORD *)(this + 112) = v1;
  *(_QWORD *)(this + 128) = v2;
  *(_QWORD *)(this + 104) = 0LL;
  *(_QWORD *)(this + 96) = 0LL;
  *(_QWORD *)(this + 88) = 0LL;
  if ( *(_BYTE *)(this + 301) )
    CWindowBackgroundTreatment::InvalidateBitmapRealization(this);
}
