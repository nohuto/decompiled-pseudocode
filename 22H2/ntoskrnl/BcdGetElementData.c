/*
 * XREFs of BcdGetElementData @ 0x14096F478
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x1405BC690 (WheaPersistBadPageToBcd.c)
 *     BiResolveLocateDevice @ 0x14096F658 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1407840C0 (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
