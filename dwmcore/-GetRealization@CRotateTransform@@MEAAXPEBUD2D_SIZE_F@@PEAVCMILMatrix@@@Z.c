/*
 * XREFs of ?GetRealization@CRotateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024AFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRotateTransform::GetRealization(
        CRotateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix::Set2DRotation(a3, *((float *)this + 40) * 0.017453292, *((float *)this + 41), *((float *)this + 42));
}
