/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x14023A500
 * Callers:
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406B1CE4 (FsRtlPTeardownPerFileObjectContexts.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     FsRtlTeardownPerFileContexts @ 0x140769590 (FsRtlTeardownPerFileContexts.c)
 *     MiDeleteAweInfo @ 0x140A3EDD8 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x1402956DC (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
