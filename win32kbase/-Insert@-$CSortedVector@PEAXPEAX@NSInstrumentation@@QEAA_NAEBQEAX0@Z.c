char __fastcall NSInstrumentation::CSortedVector<void *,void *>::Insert(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v7 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a1, a2);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = 16 * v7;
  v10 = v7;
  if ( v7 < v8 && (v11 = *(_QWORD *)(a1 + 48), *(_QWORD *)(v9 + v11) == *a2) )
  {
    *(_QWORD *)(v9 + v11 + 8) = *a3;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 32);
    if ( v8 != v12 || (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(a1, 2 * v12) )
    {
      memmove(
        (void *)(v9 + *(_QWORD *)(a1 + 48) + 16),
        (const void *)(v9 + *(_QWORD *)(a1 + 48)),
        16 * (*(_QWORD *)(a1 + 40) - v10));
      v13 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(v9 + v13) = *a2;
      *(_QWORD *)(v9 + v13 + 8) = *a3;
      ++*(_QWORD *)(a1 + 40);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
