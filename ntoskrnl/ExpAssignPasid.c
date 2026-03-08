/*
 * XREFs of ExpAssignPasid @ 0x1409FEB10
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14060B7D4 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x14060B464 (ExpFreeAsid.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 544, a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1, (void *)Object);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
