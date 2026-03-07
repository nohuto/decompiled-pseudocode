char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitUpdateFlags(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 14) & 0x40) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = v5;
    *(_DWORD *)v5 = 16;
    v3[1] = 178;
    v3[2] = *((_DWORD *)this + 8);
    v3[3] = *((_DWORD *)this + 28);
    *((_DWORD *)this + 14) &= ~0x40u;
    return 1;
  }
  return 0;
}
