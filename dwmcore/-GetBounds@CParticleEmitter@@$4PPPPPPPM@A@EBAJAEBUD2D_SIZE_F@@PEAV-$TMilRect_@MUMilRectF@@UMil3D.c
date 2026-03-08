/*
 * XREFs of ?GetBounds@CParticleEmitter@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitter::GetBounds(__int64 a1)
{
  return CParticleEmitter::GetBounds(a1 - *(int *)(a1 - 4));
}
