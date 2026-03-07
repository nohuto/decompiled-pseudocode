CBrushRenderingEffectFactory *__fastcall CBrushRenderingEffectFactory::CBrushRenderingEffectFactory(
        CBrushRenderingEffectFactory *this,
        struct CDrawingContext *a2,
        struct CRenderingTechnique *a3,
        const struct EffectStage *a4)
{
  unsigned int i; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  bool v7; // zf
  char v8; // dl

  *((_QWORD *)this + 1) = a3;
  *(_QWORD *)this = &CBrushRenderingEffectFactory::`vftable';
  for ( i = 0; i < *((_DWORD *)a4 + 1); *((_BYTE *)this + v5 + 16) = v8 )
  {
    v5 = i;
    v6 = 104LL * i;
    if ( !*((_BYTE *)a4 + v6 + 52) || (v7 = *((_BYTE *)a4 + v6 + 110) == 0, v8 = 1, v7) )
      v8 = 0;
    ++i;
  }
  return this;
}
