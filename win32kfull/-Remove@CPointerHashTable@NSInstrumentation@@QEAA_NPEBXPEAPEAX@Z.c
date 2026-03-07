char __fastcall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  char v6; // di
  int i; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v17; // r8

  if ( a2 == -1LL )
    return 0;
  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL, v17);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  }
  if ( *((_DWORD *)this + 12)
    && ((v8 = 0x9E3779B97F34A803uLL * (a2 >> 4), (*((_BYTE *)this + 52) & 1) == 0) || *(_QWORD *)a2 == v8) )
  {
    v9 = *((_DWORD *)this + 10);
    v10 = v8 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
    v11 = 0;
    while ( 1 )
    {
      v12 = v10;
      if ( (unsigned int)v10 < v9 )
        break;
LABEL_13:
      v9 = v10;
      ++v11;
      LODWORD(v10) = 0;
      if ( v11 >= 2 )
        goto LABEL_14;
    }
    v13 = *((_QWORD *)this + 4);
    while ( 1 )
    {
      v14 = 2LL * v12;
      if ( *(_QWORD *)(v13 + 16LL * v12) == a2 )
        break;
      if ( ++v12 >= v9 )
        goto LABEL_13;
    }
    v15 = *(void **)(v13 + 16LL * v12 + 8);
    *(_QWORD *)(v13 + 8 * v14 + 8) = 0LL;
    *a3 = v15;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v14) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)this + 12);
  }
  else
  {
LABEL_14:
    v6 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
