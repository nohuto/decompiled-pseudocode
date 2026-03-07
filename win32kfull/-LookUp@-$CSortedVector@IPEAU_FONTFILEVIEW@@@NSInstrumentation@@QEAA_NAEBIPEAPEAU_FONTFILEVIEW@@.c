char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(
        NSInstrumentation::CPrioritizedWriterLock *this,
        _DWORD *a2,
        _QWORD *a3)
{
  char v6; // di
  int i; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // r8

  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL, v12);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  }
  v8 = *((_QWORD *)this + 5);
  if ( v8
    && (v9 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(this, a2), v9 < v8)
    && (v10 = 16 * v9 + *((_QWORD *)this + 6), *(_DWORD *)v10 == *a2)
    && v10 )
  {
    *a3 = *(_QWORD *)(v10 + 8);
  }
  else
  {
    v6 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
