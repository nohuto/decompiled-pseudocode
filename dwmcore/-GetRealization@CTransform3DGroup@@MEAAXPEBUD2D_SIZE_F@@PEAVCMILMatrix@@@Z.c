/*
 * XREFs of ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180251A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTransform3DGroup::GetRealization(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 26);
  if ( v3 )
  {
    *(_OWORD *)a3 = *(_OWORD *)v3;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(v3 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v3 + 32);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v3 + 48);
    *((_DWORD *)a3 + 16) = *(_DWORD *)(v3 + 64);
  }
  else
  {
    CTransform3DGroup::GetRealizationWorker(this, a2, a3);
  }
}
