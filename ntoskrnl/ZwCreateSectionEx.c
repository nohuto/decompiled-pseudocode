/*
 * XREFs of ZwCreateSectionEx @ 0x140413B90
 * Callers:
 *     PsCheckProcessFileSigningLevel @ 0x1409AD870 (PsCheckProcessFileSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSectionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
