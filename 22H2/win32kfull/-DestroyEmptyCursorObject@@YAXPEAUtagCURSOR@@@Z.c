/*
 * XREFs of ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C004B754
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00486FC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C011C180 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

void __fastcall DestroyEmptyCursorObject(struct tagCURSOR *a1)
{
  if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 && !gbInDestroyHandleTableObjects )
    UnlinkCursor(a1);
  HMFreeObject(a1);
}
