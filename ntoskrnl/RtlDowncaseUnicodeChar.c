/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x1408A1590
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_DOWNCASE @ 0x1402E1428 (NLS_DOWNCASE.c)
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v2; // edx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return NLS_DOWNCASE((__int64)CurrentServerSiloGlobals[77].Blink, v2);
}
