/*
 * XREFs of ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B0E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0E5C (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CMatrixTransform::GetRealization(
        CMatrixTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::Set2DAffineMatrix(
    a3,
    *((float *)this + 40),
    *((float *)this + 41),
    *((float *)this + 42),
    *((float *)this + 43),
    *((float *)this + 44),
    *((float *)this + 45));
}
