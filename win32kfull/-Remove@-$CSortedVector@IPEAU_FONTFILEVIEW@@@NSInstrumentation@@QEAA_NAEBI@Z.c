char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(__int64 a1, _DWORD *a2)
{
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  _DWORD *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v4 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v5 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(a1, a2);
  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 || v5 >= v6 )
  {
    v4 = 0;
    goto LABEL_7;
  }
  v7 = (_DWORD *)(*(_QWORD *)(a1 + 48) + 16 * v5);
  if ( *v7 == *a2 )
  {
    memmove(v7, v7 + 4, 16 * (v6 - v5) - 16);
    --*(_QWORD *)(a1 + 40);
LABEL_7:
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(&v9);
    return v4;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}
