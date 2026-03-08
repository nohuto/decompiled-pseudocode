/*
 * XREFs of ?GetBounds@CParticleEmitter@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18023E330
 * Callers:
 *     ?GetBounds@CParticleEmitter@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A050 (-GetBounds@CParticleEmitter@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024372C (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 */

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
