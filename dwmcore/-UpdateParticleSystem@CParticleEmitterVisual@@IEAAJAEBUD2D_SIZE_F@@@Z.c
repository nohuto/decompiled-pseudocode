/*
 * XREFs of ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024372C
 * Callers:
 *     ?GetBounds@CParticleEmitter@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18023E330 (-GetBounds@CParticleEmitter@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x180240B14 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z @ 0x180241934 (-EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z.c)
 *     ?RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x180242994 (-RemoveDeadParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z @ 0x1802435B8 (-UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x180243870 (-UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::UpdateParticleSystem(
        CParticleEmitterVisual *this,
        const struct D2D_SIZE_F *a2)
{
  float v2; // xmm1_4
  float *v3; // rsi
  float v4; // xmm0_4
  unsigned int v5; // edi
  float v8; // xmm6_4
  float v9; // xmm1_4
  float i; // xmm0_4
  int v11; // eax
  __int64 v12; // rcx

  v2 = *((float *)this + 176);
  v3 = (float *)((char *)this + 712);
  v4 = *((float *)this + 1602);
  v5 = 0;
  v8 = *((float *)this + 177);
  if ( v4 > v2 )
  {
    v4 = v4 - *v3;
    *((float *)this + 1602) = v4;
  }
  v9 = (float)(v2 - v4) + *((float *)this + 1597);
  *((float *)this + 1597) = v9;
  CParticleEmitterVisual::RemoveDeadParticles(this, v9);
  for ( i = *((float *)this + 1597); ; *((float *)this + 1597) = i )
  {
    if ( i <= v8 )
    {
      CParticleEmitterVisual::UpdateBounds(this, a2);
      *((_DWORD *)this + 1602) = *((_DWORD *)this + 176);
      *((_BYTE *)this + 6445) = 0;
      return v5;
    }
    CParticleEmitterVisual::UpdateParticles(this, v8);
    if ( *((_BYTE *)this + 6444) )
    {
      if ( *v3 > *((float *)this + 176) && *(float *)(*((_QWORD *)this + 104) + 228LL) > *((float *)this + 1597) )
      {
        v11 = CParticleEmitterVisual::EmitParticles(this, v8, a2);
        v5 = v11;
        if ( v11 < 0 )
          break;
      }
    }
    CParticleEmitterVisual::ApplyActiveBehaviors(this, v8);
    i = *((float *)this + 1597) - v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xAFu, 0LL);
  return v5;
}
