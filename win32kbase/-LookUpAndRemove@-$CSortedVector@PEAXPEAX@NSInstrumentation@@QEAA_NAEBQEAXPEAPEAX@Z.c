char __fastcall NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v6; // si
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7
    && (v8 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a1, a2), v8 < v7)
    && (v9 = (_QWORD *)(16 * v8 + *(_QWORD *)(a1 + 48)), *v9 == *a2)
    && v9 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    *a3 = v9[1];
    memmove(
      (void *)(16 * (((__int64)v9 - v10) >> 4) + v10),
      (const void *)(16 * (((__int64)v9 - v10) >> 4) + v10 + 16),
      16 * (v7 - (((__int64)v9 - v10) >> 4)) - 16);
    --*(_QWORD *)(a1 + 40);
  }
  else
  {
    v6 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
