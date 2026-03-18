/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1402FD3A0
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140705A98 (MmDeleteProcessAddressSpace.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1407657C8 (FsRtlPTeardownPerFileObjectContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1407BB3B0 (FsRtlTeardownPerFileContexts.c)
 *     MiDeleteAweInfo @ 0x140A41AB8 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x14035C28C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
