/*
 * XREFs of PsIsThreadTerminating @ 0x1403644C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1;
}
