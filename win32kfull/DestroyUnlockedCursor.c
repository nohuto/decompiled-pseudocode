/*
 * XREFs of DestroyUnlockedCursor @ 0x1C00F1640
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0041464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

bool __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1)
{
  return _DestroyCursor(a1, 2u);
}
