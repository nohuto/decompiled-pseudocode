char __fastcall DirectComposition::CAnimationMarshaler::EmitSetPaused(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 8) & 0x4000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 8;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 12);
    v3[12] = *(_BYTE *)(*((_QWORD *)this + 10) + 28LL);
    *((_DWORD *)this + 8) &= ~0x4000u;
    return 1;
  }
  return 0;
}
