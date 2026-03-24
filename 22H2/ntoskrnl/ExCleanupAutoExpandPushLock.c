/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1402E9ED0
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x140391E00 (ExFreeAutoExpandPushLock.c)
 *     MmDeleteProcessAddressSpace @ 0x1406601A4 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteAweInfo @ 0x1408D5E94 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x140393BDC (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
