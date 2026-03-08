/*
 * XREFs of ?SetTextureTransform@CMesh2DEffect@@QEAAJUD2D_MATRIX_3X2_F@@@Z @ 0x180108790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::SetTextureTransform(CMesh2DEffect *this, struct D2D_MATRIX_3X2_F *a2)
{
  FLOAT m11; // eax

  m11 = a2->m11;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 31) = 0;
  *((FLOAT *)this + 24) = m11;
  *((_DWORD *)this + 25) = LODWORD(a2->m21);
  *((_DWORD *)this + 26) = LODWORD(a2->dx);
  *((_DWORD *)this + 28) = LODWORD(a2->m12);
  *((_DWORD *)this + 29) = LODWORD(a2->m22);
  *((_DWORD *)this + 30) = LODWORD(a2->dy);
  return 0LL;
}
