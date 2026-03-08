/*
 * XREFs of ?PushTransform@CRenderDataBounds@@UEAAJPEAVCTransform@@@Z @ 0x1800F1630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800583E0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CRenderDataBounds::PushTransform(CRenderDataBounds *this, struct CTransform *a2)
{
  char *v2; // rbx
  const struct CMILMatrix *Matrix; // rax

  if ( ++*((_DWORD *)this + 23) == 1 )
  {
    v2 = (char *)this + 24;
    if ( a2 )
    {
      Matrix = CTransform3D::GetMatrix(a2, 0LL);
      *(_OWORD *)v2 = *(_OWORD *)Matrix;
      *((_OWORD *)v2 + 1) = *((_OWORD *)Matrix + 1);
      *((_OWORD *)v2 + 2) = *((_OWORD *)Matrix + 2);
      *((_OWORD *)v2 + 3) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)v2 + 16) = *((_DWORD *)Matrix + 16);
    }
    else
    {
      CMILMatrix::SetToIdentity((CRenderDataBounds *)((char *)this + 24));
    }
  }
  return 0LL;
}
