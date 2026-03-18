/*
 * XREFs of XSaveCHelper @ 0x14042AB50
 * Callers:
 *     RtlXSave @ 0x1402423D0 (RtlXSave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XSaveCHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsavec  byte ptr [rcx] }
  return result;
}
