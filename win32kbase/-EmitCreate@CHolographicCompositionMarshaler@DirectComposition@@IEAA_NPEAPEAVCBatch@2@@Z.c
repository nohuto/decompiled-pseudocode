char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitCreate(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 32;
    *(_OWORD *)(v3 + 4) = 0LL;
    *(_QWORD *)(v3 + 20) = 0LL;
    *((_DWORD *)v3 + 7) = 0;
    *((_DWORD *)v3 + 1) = 163;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v3 + 12) = *(_OWORD *)((char *)this + 72);
    *((_DWORD *)v3 + 7) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return 0;
}
