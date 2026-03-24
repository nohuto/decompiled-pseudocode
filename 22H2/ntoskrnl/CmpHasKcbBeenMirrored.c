/*
 * XREFs of CmpHasKcbBeenMirrored @ 0x140314E28
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpHasKcbBeenMirrored(__int64 a1)
{
  return (*(_DWORD *)(a1 + 184) & 0x800000) != 0;
}
