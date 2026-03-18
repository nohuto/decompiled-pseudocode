/*
 * XREFs of ExpAssignPasid @ 0x140A01800
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14060DC10 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x14060D8A0 (ExpFreeAsid.c)
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
