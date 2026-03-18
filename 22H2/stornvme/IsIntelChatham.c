/*
 * XREFs of IsIntelChatham @ 0x1C0007CD8
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000B84C (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C001C5D4 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C00210FC (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
