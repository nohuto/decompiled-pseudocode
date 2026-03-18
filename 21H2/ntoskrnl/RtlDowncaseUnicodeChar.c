/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x140882870
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x140239F60 (NLS_DOWNCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v2; // dx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return NLS_DOWNCASE(CurrentServerSiloGlobals[155], v2);
}
