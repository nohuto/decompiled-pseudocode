/*
 * XREFs of SeTokenType @ 0x140692730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

TOKEN_TYPE __stdcall SeTokenType(PACCESS_TOKEN Token)
{
  return *((_DWORD *)Token + 48);
}
