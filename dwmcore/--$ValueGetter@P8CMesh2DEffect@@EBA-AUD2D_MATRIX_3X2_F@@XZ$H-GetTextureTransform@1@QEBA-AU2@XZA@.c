/*
 * XREFs of ??$ValueGetter@P8CMesh2DEffect@@EBA?AUD2D_MATRIX_3X2_F@@XZ$H?GetTextureTransform@1@QEBA?AU2@XZA@UID2D1EffectImpl@@@@YAJPEBUIUnknown@@PEAEIPEAI@Z @ 0x1802BB160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ValueGetter<D2D_MATRIX_3X2_F (CMesh2DEffect::*)(void)const,{public: D2D_MATRIX_3X2_F CMesh2DEffect::GetTextureTransform(void)const,0},ID2D1EffectImpl>(
        FLOAT *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  struct D2D_MATRIX_3X2_F *TextureTransform; // rax
  struct D2D_MATRIX_3X2_F v8; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 24;
  if ( a3 && a2 )
  {
    if ( a3 >= 0x18 )
    {
      TextureTransform = CMesh2DEffect::GetTextureTransform(a1, &v8);
      *(_OWORD *)a2 = *(_OWORD *)&TextureTransform->m11;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)&TextureTransform->m[2][0];
    }
    else
    {
      return (unsigned int)-2147024774;
    }
  }
  return v4;
}
