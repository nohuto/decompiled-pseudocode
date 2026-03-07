char *__fastcall DequeueAndReadyContext(char **a1)
{
  char *v2; // rdi
  char *v3; // rax
  char *v4; // rcx

  v2 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v3 = *a1;
  if ( *a1 != (char *)a1 )
  {
    if ( *((char ***)v3 + 1) != a1 || (v4 = *(char **)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *a1 = v4;
    v2 = v3 - 32;
    *((_QWORD *)v4 + 1) = a1;
    *((_QWORD *)v3 + 1) = v3;
    *(_QWORD *)v3 = v3;
    InsertReadyQueue(v3 - 32, 1);
  }
  KeReleaseSpinLock(&SpinLock, NewIrql);
  return v2;
}
