/*
 * XREFs of ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8
 * Callers:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0023D60 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreeToPagedLookasideList @ 0x1C00240E0 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     FreeObject @ 0x1C0027670 (FreeObject.c)
 *     FreeTmpBuffer @ 0x1C0030FE0 (FreeTmpBuffer.c)
 *     FreeThreadBufferWithTag @ 0x1C0082710 (FreeThreadBufferWithTag.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     UserReAllocPool @ 0x1C008AE00 (UserReAllocPool.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0179828 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C017BD3C (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  char v6; // si
  int v7; // eax
  char v8; // di
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r11
  __int64 v15; // r8

  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  v7 = *((_DWORD *)this + 7);
  v8 = 0;
  while ( v7 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
    v7 = *((_DWORD *)this + 7);
  }
  if ( *((_DWORD *)this + 12)
    && ((v9 = 0x9E3779B97F34A803uLL * (a2 >> 4), (*((_BYTE *)this + 52) & 1) == 0) || *(_QWORD *)a2 == v9) )
  {
    v10 = *((_DWORD *)this + 10);
    v11 = 0;
    v12 = v9 >> (64 - *((_BYTE *)this + 44));
    while ( 1 )
    {
      v13 = v12;
      if ( (unsigned int)v12 < v10 )
        break;
LABEL_12:
      ++v11;
      v10 = v12;
      LODWORD(v12) = 0;
      if ( v11 >= 2 )
        goto LABEL_17;
    }
    v14 = *((_QWORD *)this + 4);
    while ( *(_QWORD *)(v14 + 16LL * v13) != a2 )
    {
      if ( ++v13 >= v10 )
        goto LABEL_12;
    }
    v15 = 2LL * v13;
    *a3 = *(void **)(v14 + 16LL * v13 + 8);
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v15) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v15 + 8) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)this + 12);
  }
  else
  {
    v6 = 0;
  }
  v8 = v6;
LABEL_17:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v8;
}
