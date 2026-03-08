/*
 * XREFs of ?SetMatrix@CMILMatrix@@QEAAXMMMMMMMMMMMMMMMM@Z @ 0x180130648
 * Callers:
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x180092384 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0E5C (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::SetMatrix(
        CMILMatrix *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17)
{
  *((_DWORD *)this + 16) = 0;
  *((float *)this + 3) = a5;
  *(float *)this = a2;
  *((float *)this + 5) = a7;
  *((float *)this + 4) = a6;
  *((float *)this + 7) = a9;
  *((float *)this + 6) = a8;
  *((float *)this + 9) = a11;
  *((float *)this + 8) = a10;
  *((float *)this + 11) = a13;
  *((float *)this + 10) = a12;
  *((float *)this + 13) = a15;
  *((float *)this + 12) = a14;
  *((float *)this + 15) = a17;
  *((float *)this + 1) = a3;
  *((float *)this + 2) = a4;
  *((float *)this + 14) = a16;
}
