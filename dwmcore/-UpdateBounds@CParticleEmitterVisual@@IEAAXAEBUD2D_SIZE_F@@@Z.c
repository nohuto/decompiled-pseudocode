/*
 * XREFs of ?UpdateBounds@CParticleEmitterVisual@@IEAAXAEBUD2D_SIZE_F@@@Z @ 0x1802435B8
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x18024372C (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEmptyDrawing@CParticleEmitterVisual@@IEBA_NXZ @ 0x18023E3B0 (-IsEmptyDrawing@CParticleEmitterVisual@@IEBA_NXZ.c)
 */

void __fastcall CParticleEmitterVisual::UpdateBounds(CParticleEmitterVisual *this, const struct D2D_SIZE_F *a2)
{
  float *v2; // rdi
  float width; // xmm0_4
  float height; // xmm1_4
  float *v7; // rcx
  float *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float *v12; // rax
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm5_4
  float *i; // rax
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm2_4
  float *v24; // rcx

  v2 = (float *)((char *)this + 6428);
  *((_DWORD *)this + 1610) = 0;
  *((_DWORD *)this + 1609) = 0;
  *((_DWORD *)this + 1608) = 0;
  *((_DWORD *)this + 1607) = 0;
  if ( !CParticleEmitterVisual::IsEmptyDrawing(this) )
  {
    width = a2->width;
    *((_DWORD *)this + 1609) = LODWORD(a2->width);
    height = a2->height;
    *((float *)this + 1610) = height;
    v7 = (float *)*((_QWORD *)this + 110);
    v8 = (float *)*((_QWORD *)this + 109);
    if ( v8 != v7 )
    {
      v9 = *v2;
      v10 = *((float *)this + 1608);
      do
      {
        v9 = fminf(v9, *v8);
        *v2 = v9;
        v10 = fminf(v10, v8[1]);
        *((float *)this + 1608) = v10;
        width = fmaxf(width, *v8);
        *((float *)this + 1609) = width;
        height = fmaxf(height, v8[1]);
        v8 += 3;
        *((float *)this + 1610) = height;
      }
      while ( v8 != v7 );
    }
    v11 = 0.0;
    v12 = (float *)*((_QWORD *)this + 127);
    v13 = 0.0;
    v14 = 0.0;
    while ( v12 != *((float **)this + 128) )
    {
      v15 = fmaxf(*v12, v13);
      v16 = fmaxf(v12[1], v14);
      v12 += 2;
      v13 = v15;
      v14 = v16;
    }
    v17 = 0.0;
    for ( i = (float *)*((_QWORD *)this + 130); i != *((float **)this + 131); i += 2 )
    {
      v19 = fmaxf(*i, v11);
      v20 = fmaxf(i[1], v17);
      v11 = v19;
      v17 = v20;
    }
    v21 = (float)((float)(v14 * *((float *)this + 1604)) * v17) * *((float *)this + 1606);
    v22 = (float)((float)(v13 * *((float *)this + 1603)) * v11) * *((float *)this + 1605);
    v23 = (float)(v21 * v21) + (float)(v22 * v22);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v2) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v24, v23, v23);
  }
}
