/*
 * XREFs of IsIntelChatham @ 0x1C000A684
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000CF44 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C0018128 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C001A730 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
