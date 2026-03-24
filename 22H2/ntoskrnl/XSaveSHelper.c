/*
 * XREFs of XSaveSHelper @ 0x140408170
 * Callers:
 *     RtlXSaveS @ 0x14031A7EC (RtlXSaveS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XSaveSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsaves  byte ptr [rcx] }
  return result;
}
