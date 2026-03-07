CColorMatrixEffect *__fastcall CColorMatrixEffect::CColorMatrixEffect(
        CColorMatrixEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CColorMatrixEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  result = (CColorMatrixEffect *)v2;
  *(_DWORD *)(v2 + 260) = 0;
  *(_OWORD *)(v2 + 176) = _xmm;
  *(_QWORD *)v2 = &CColorMatrixEffect::`vftable';
  *(_OWORD *)(v2 + 192) = _xmm;
  *(_DWORD *)(v2 + 256) = 1;
  *(_OWORD *)(v2 + 208) = _xmm;
  *(_OWORD *)(v2 + 224) = _xmm;
  *(_OWORD *)(v2 + 240) = 0LL;
  return result;
}
