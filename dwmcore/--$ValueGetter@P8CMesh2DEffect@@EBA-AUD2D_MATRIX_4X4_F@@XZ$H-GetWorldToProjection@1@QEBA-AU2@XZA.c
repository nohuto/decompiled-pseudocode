__int64 __fastcall ValueGetter<D2D_MATRIX_4X4_F (CMesh2DEffect::*)(void)const,{public: D2D_MATRIX_4X4_F CMesh2DEffect::GetWorldToProjection(void)const,0},ID2D1EffectImpl>(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3,
        _DWORD *a4)
{
  struct D2D_MATRIX_4X4_F *(__fastcall *v5)(CMesh2DEffect *, struct D2D_MATRIX_4X4_F *__return_ptr); // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]

  v6 = 0;
  v5 = CMesh2DEffect::GetWorldToProjection;
  return DeducingValueGetter<CMesh2DEffect,D2D_MATRIX_4X4_F,ID2D1EffectImpl>((__int64)&v5, a1, a2, a3, a4);
}
