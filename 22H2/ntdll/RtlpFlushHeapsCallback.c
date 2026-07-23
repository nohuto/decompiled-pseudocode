/*
 * XREFs of RtlpFlushHeapsCallback @ 0x180006920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFlushHeapsCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpHeapCompact(a1, 0LL);
  else
    return RtlpFlushHeap(a1);
}
