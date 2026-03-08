/*
 * XREFs of ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C01C1C90
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0041464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00E1474 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

void __fastcall DestroyEmptyCursorObject(struct tagCURSOR *a1)
{
  if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 && !gbInDestroyHandleTableObjects )
    UnlinkCursor(a1);
  HMFreeObject(a1);
}
