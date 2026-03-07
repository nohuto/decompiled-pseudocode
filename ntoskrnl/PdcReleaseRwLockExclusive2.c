LONG __fastcall PdcReleaseRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  LONG result; // eax

  if ( a2 )
    *a2 = 1;
  if ( !*(_QWORD *)a1 || *(struct _KTHREAD **)(a1 + 8) != KeGetCurrentThread() || *(int *)(a1 + 16) <= 0 )
    __fastfail(5u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
    *(_QWORD *)(a1 + 8) = 0LL;
  result = KeReleaseMutex(*(PRKMUTEX *)a1, 0);
  if ( a2 )
    *a2 = 0;
  return result;
}
