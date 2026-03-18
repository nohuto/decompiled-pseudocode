/*
 * XREFs of ZwCreateSectionEx @ 0x14041CFC0
 * Callers:
 *     PsCheckProcessFileSigningLevel @ 0x14065FD10 (PsCheckProcessFileSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSectionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
