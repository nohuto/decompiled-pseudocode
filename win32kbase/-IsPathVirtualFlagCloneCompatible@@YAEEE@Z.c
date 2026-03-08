/*
 * XREFs of ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x1C0190954
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00E2170 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPathVirtualFlagCloneCompatible(unsigned __int8 a1, unsigned __int8 a2)
{
  return ((a2 ^ a1) & 3) == 0;
}
