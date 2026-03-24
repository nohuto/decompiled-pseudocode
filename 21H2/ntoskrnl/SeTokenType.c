/*
 * XREFs of SeTokenType @ 0x1406AF780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

TOKEN_TYPE __stdcall SeTokenType(PACCESS_TOKEN Token)
{
  return *((_DWORD *)Token + 48);
}
