/*
 * XREFs of KiAbThreadGetIoQoSPriority @ 0x14035812C
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiAbThreadGetIoQoSPriority(__int64 a1)
{
  return !*(_DWORD *)(a1 + 1448) || *(_DWORD *)(a1 + 1444);
}
