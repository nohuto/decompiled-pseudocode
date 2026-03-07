PVOID __fastcall ViDeadlockExTryToAcquireFastMutex_Exit(__int64 a1)
{
  PVOID result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 3, (__int64)KeGetCurrentThread(), 1u, *(PVOID *)a1);
  return result;
}
