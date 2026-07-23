/*
 * XREFs of PopBcdClose @ 0x1408F589C
 * Callers:
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x140782314 (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}
