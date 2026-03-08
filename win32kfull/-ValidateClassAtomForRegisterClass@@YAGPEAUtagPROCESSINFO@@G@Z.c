/*
 * XREFs of ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0031AA8
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0030830 (InternalRegisterClassEx.c)
 * Callees:
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C0031AEC (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0033820 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 */

__int64 __fastcall ValidateClassAtomForRegisterClass(struct tagPROCESSINFO *a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx
  struct tagPROCESSINFO *v5; // r8

  v3 = 0;
  if ( IsClassAtomPinned(a2) || v4 < 0xC000u || IsClassAtomRegistered(v5, v4) )
    return a2;
  return v3;
}
