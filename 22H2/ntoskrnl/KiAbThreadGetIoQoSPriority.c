/*
 * XREFs of KiAbThreadGetIoQoSPriority @ 0x140318EC0
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140318C48 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiAbThreadGetIoQoSPriority(__int64 a1)
{
  return !*(_DWORD *)(a1 + 1448) || *(_DWORD *)(a1 + 1444);
}
