/*
 * XREFs of IsIntelChatham @ 0x1C0007B94
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x1C000B78C (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x1C001C564 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C002108C (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
