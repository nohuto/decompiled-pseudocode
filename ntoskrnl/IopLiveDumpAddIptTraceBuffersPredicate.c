/*
 * XREFs of IopLiveDumpAddIptTraceBuffersPredicate @ 0x140A97070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IopLiveDumpAddIptTraceBuffersPredicate(__int64 a1)
{
  return (*(_DWORD *)(a1 + 40) & 0x20) == 0;
}
