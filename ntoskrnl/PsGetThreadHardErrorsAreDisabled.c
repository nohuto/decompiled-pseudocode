/*
 * XREFs of PsGetThreadHardErrorsAreDisabled @ 0x1403C19A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetThreadHardErrorsAreDisabled(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1376) & 0x10) != 0;
}
