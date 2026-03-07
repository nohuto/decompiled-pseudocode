PVOID __fastcall ViDeadlockExAcquireSharedStarveExclusive_Exit(__int64 a1)
{
  unsigned int v1; // r9d
  PVOID result; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 8) == 0;
    return VfDeadlockAcquireResource(*(LONG **)(a1 + 16), 8, (__int64)KeGetCurrentThread(), v1, *(PVOID *)a1);
  }
  return result;
}
