__int64 __fastcall ReferenceW32Thread(__int64 a1)
{
  ObfReferenceObject(*(PVOID *)a1);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
}
