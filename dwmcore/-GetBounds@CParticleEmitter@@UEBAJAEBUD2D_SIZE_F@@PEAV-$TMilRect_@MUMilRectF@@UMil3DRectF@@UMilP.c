__int64 __fastcall CParticleEmitter::GetBounds(__int64 a1, const struct D2D_SIZE_F *a2, _OWORD *a3)
{
  __int64 v3; // rdi
  int updated; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 - 32);
  if ( *(_BYTE *)(v3 + 6445)
    && (updated = CParticleEmitterVisual::UpdateParticleSystem((CParticleEmitterVisual *)v3, a2),
        v6 = updated,
        updated < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x221,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\particleemittervisual.cpp",
      (const char *)(unsigned int)updated);
  }
  else
  {
    v6 = 0;
    *a3 = *(_OWORD *)(v3 + 6428);
  }
  return v6;
}
