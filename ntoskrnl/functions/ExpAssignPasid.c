__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 544, a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1, (void *)Object);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
