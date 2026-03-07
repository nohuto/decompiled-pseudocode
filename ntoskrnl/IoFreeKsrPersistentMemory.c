__int64 __fastcall IoFreeKsrPersistentMemory(char *P, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  v4 = (void *)*((_QWORD *)P + 5);
  if ( v4 )
    MmUnmapLockedPages(v4, *((PMDL *)P + 1));
  LOBYTE(a3) = 1;
  KsrFreePersistedMemoryBlock(P + 16, *((_QWORD *)P + 4), a3);
  v5 = (void *)*((_QWORD *)P + 1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x61706E50u);
  ExFreePoolWithTag(P, 0x61706E50u);
  return 0LL;
}
