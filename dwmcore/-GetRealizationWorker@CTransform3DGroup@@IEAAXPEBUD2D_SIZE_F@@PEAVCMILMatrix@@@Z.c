/*
 * XREFs of ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B1CC
 * Callers:
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x18001AF80 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B1B0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x180251A20 (-BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ.c)
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180251A70 (-GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800583E0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v6; // eax
  CTransform3D **v7; // rsi
  CTransform3D **i; // rdi
  const struct CMILMatrix *Matrix; // rax

  CMILMatrix::SetToIdentity(a3);
  v6 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) == 2 )
  {
    v7 = (CTransform3D **)*((_QWORD *)this + 21);
    for ( i = (CTransform3D **)*((_QWORD *)this + 20); i != v7; ++i )
    {
      Matrix = CTransform3D::GetMatrix(*i, a2);
      CMILMatrix::Multiply(a3, Matrix);
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
}
