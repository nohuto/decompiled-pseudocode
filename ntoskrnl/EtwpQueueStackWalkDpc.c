__int64 __fastcall EtwpQueueStackWalkDpc(__int64 a1, volatile signed __int32 *a2, _QWORD *a3)
{
  unsigned int Number; // edx

  if ( _interlockedbittestandset(a2 + 243, 1u) )
    return 259LL;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *(unsigned int *)a2),
          1u) )
    return 3221225473LL;
  *((_QWORD *)a2 + 104) = *a3;
  *((_QWORD *)a2 + 105) = a1;
  Number = KeGetCurrentPrcb()->Number;
  if ( !*((_QWORD *)a2 + 113) )
    *((_WORD *)a2 + 425) = Number + 2048;
  if ( (unsigned __int8)KiInsertQueueDpc((ULONG_PTR)(a2 + 212), (__int64)a2, 0LL, 0LL, 0) )
    return 0LL;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *(unsigned int *)a2),
    1u);
  return 3221225626LL;
}
