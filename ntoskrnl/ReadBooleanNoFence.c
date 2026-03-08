/*
 * XREFs of ReadBooleanNoFence @ 0x140409A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UCHAR __stdcall ReadBooleanNoFence(const volatile BOOLEAN *Source)
{
  return *Source;
}
