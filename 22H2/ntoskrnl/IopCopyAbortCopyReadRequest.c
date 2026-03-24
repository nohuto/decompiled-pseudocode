/*
 * XREFs of IopCopyAbortCopyReadRequest @ 0x1403F0C90
 * Callers:
 *     <none>
 * Callees:
 *     IopCopyCompleteReadRequest @ 0x1403F1040 (IopCopyCompleteReadRequest.c)
 */

__int64 __fastcall IopCopyAbortCopyReadRequest(__int64 a1)
{
  return IopCopyCompleteReadRequest(a1, a1 + 48, a1 + 56, a1 + 64, a1 + 72);
}
