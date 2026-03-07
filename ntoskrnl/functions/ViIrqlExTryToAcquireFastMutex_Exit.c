char *__fastcall ViIrqlExTryToAcquireFastMutex_Exit(__int64 a1)
{
  char *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfKeIrqlLogRaise(KeGetCurrentIrql(), 1);
  return result;
}
