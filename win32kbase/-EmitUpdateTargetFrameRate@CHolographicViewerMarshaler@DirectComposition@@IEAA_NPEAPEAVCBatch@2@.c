char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitUpdateTargetFrameRate(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 14) & 0x20) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 20;
    v3[1] = 179;
    v3[2] = *((_DWORD *)this + 8);
    v3[3] = *((_DWORD *)this + 23);
    v3[4] = *((_DWORD *)this + 24);
    *((_DWORD *)this + 14) &= ~0x20u;
    return 1;
  }
  return 0;
}
