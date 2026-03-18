/*
 * XREFs of IsDumpMode @ 0x1C0008544
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDumpMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 20) != 0;
}
