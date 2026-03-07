char __fastcall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  char v7; // si
  int v8; // eax
  char v9; // di
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  unsigned __int64 v12; // rdx
  unsigned int v13; // r10d
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  void *v17; // rax

  if ( a2 == -1LL )
    return 0;
  v7 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  v8 = *((_DWORD *)this + 7);
  v9 = 0;
  while ( v8 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
    v8 = *((_DWORD *)this + 7);
  }
  if ( *((_DWORD *)this + 12)
    && ((v10 = 0x9E3779B97F34A803uLL * (a2 >> 4), (*((_BYTE *)this + 52) & 1) == 0) || *(_QWORD *)a2 == v10) )
  {
    v11 = *((_DWORD *)this + 10);
    v12 = v10 >> (64 - (unsigned __int8)*((_DWORD *)this + 11));
    v13 = 0;
    while ( 1 )
    {
      v14 = v12;
      if ( (unsigned int)v12 < v11 )
        break;
LABEL_14:
      ++v13;
      v11 = v12;
      LODWORD(v12) = 0;
      if ( v13 >= 2 )
        goto LABEL_19;
    }
    v15 = *((_QWORD *)this + 4);
    while ( 1 )
    {
      v16 = 2LL * v14;
      if ( *(_QWORD *)(v15 + 16LL * v14) == a2 )
        break;
      if ( ++v14 >= v11 )
        goto LABEL_14;
    }
    v17 = *(void **)(v15 + 16LL * v14 + 8);
    *(_QWORD *)(v15 + 8 * v16 + 8) = 0LL;
    *a3 = v17;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v16) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)this + 12);
  }
  else
  {
    v7 = 0;
  }
  v9 = v7;
LABEL_19:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v9;
}
