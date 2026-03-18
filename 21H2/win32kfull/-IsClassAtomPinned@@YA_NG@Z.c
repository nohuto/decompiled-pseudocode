/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0060AD8
 * Callers:
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0106C94 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(unsigned __int16 a1)
{
  return a1 >= gatomFirstPinned && a1 <= gatomLastPinned;
}
