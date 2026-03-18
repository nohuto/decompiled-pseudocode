/*
 * XREFs of ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18000C1D8
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18000BF84 (--1CTransformGroup@@MEAA@XZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180255058 (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<CMILMatrix>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2, 0x44uLL);
    *a1 = 0LL;
  }
}
