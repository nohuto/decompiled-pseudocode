/*
 * XREFs of ExCancelDpcEventWait @ 0x140609AE0
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterObjectWaitBlock @ 0x1402D33F0 (KiDeregisterObjectWaitBlock.c)
 */

__int64 __fastcall ExCancelDpcEventWait(__int64 a1)
{
  return KiDeregisterObjectWaitBlock(*(volatile signed __int32 **)(a1 + 56), (__int64 *)a1);
}
