void __fastcall NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
        __int64 a1,
        void (__fastcall *a2)(__int64, _QWORD, __int64),
        __int64 a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 28));
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  if ( *(_QWORD *)(a1 + 40) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(a1 + 48);
      v9 = *(_QWORD *)(v8 + 16LL * v7);
      if ( v9 )
      {
        a2(v9, *(_QWORD *)(v8 + 16LL * v7 + 8), a3);
        ++v6;
      }
      ++v7;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 40) );
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
