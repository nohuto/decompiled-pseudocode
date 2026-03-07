char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::EmitSetClearCommand(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 137) & 0x2000000) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v3 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v3 + 4) = 0LL;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 1) = 590;
    *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
    v3[12] = *((_BYTE *)this + 544);
    *((_DWORD *)this + 137) &= ~0x2000000u;
    *((_BYTE *)this + 544) = 0;
    return 1;
  }
  return 0;
}
