void __fastcall REGION::vDeleteREGION(unsigned __int64 Entry)
{
  __int64 v2; // rcx
  void *v3; // r8
  char *v4; // rbx
  unsigned int *v5; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // r14
  __int64 *v10; // r15
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  ULONG v14; // ebp
  NSInstrumentation::CPointerHashTable *v15; // rcx
  void *v16; // r8
  __int64 v17; // rcx
  void *v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(Entry) + 24);
  if ( Entry && Entry != *(_QWORD *)(v2 + 6400) )
  {
    v4 = *(char **)(Entry + 32);
    if ( v4 )
    {
      if ( *(_DWORD *)(Entry + 24) == 112 )
      {
        v5 = *(unsigned int **)(v2 + 6376);
        v6 = gpLeakTrackingAllocator;
        if ( *((_BYTE *)v5 + 5) )
        {
          v15 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
          v18 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v15, v4 - 16, &v18) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
              *((NSInstrumentation::CPrioritizedWriterLock **)v6 + 13),
              (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFF8uLL));
            _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
            NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v5 + 4), v4 - 16, v16);
          }
        }
        else
        {
          if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)gpLeakTrackingAllocator + 1),
              (const void *)*v5);
            v4 -= 16;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v6 + 15);
          NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v5 + 4), v4, v3);
        }
      }
      else if ( *(_DWORD *)(Entry + 24) > 0x70u )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
      }
      *(_QWORD *)(Entry + 32) = 0LL;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 24) + 6504LL) + 56LL);
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 36) )
      {
        memset((void *)Entry, 0, 0x80uLL);
        ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(v7 + 24), (PVOID)Entry);
        return;
      }
      v8 = *(_QWORD *)(v7 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v8, 0LL);
      v9 = *(_QWORD **)v7;
      if ( *(_QWORD *)v7 == v7 )
      {
LABEL_28:
        ExReleasePushLockSharedEx(v8, 0LL);
        KeLeaveCriticalRegion();
        NSInstrumentation::PlatformAbort(3LL, Entry, 0LL);
        return;
      }
      while ( 1 )
      {
        v10 = (__int64 *)v9[4];
        v11 = v10[1];
        v12 = v10[2];
        if ( Entry >= (v12 ^ v11) && Entry < (v12 ^ v11) + 0x8000 )
        {
          if ( (Entry & 0x7F) != 0 )
          {
            v17 = 2LL;
          }
          else
          {
            if ( RtlTestBit(
                   (PRTL_BITMAP)(v10[3] ^ v12),
                   ((Entry >> 7) & 0x1F) + 32 * (((unsigned int)Entry - ((unsigned int)v12 ^ (unsigned int)v11)) >> 12)) )
            {
              v13 = *v10;
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v13, 0LL);
              v14 = ((Entry >> 7) & 0x1F)
                  + 32 * ((unsigned int)(Entry - (*((_DWORD *)v10 + 4) ^ *((_DWORD *)v10 + 2))) >> 12);
              RtlClearBit((PRTL_BITMAP)(v10[2] ^ v10[3]), v14);
              *(_OWORD *)Entry = 0LL;
              *(_OWORD *)(Entry + 16) = 0LL;
              *(_OWORD *)(Entry + 32) = 0LL;
              *(_OWORD *)(Entry + 48) = 0LL;
              *(_OWORD *)(Entry + 64) = 0LL;
              *(_OWORD *)(Entry + 80) = 0LL;
              *(_OWORD *)(Entry + 96) = 0LL;
              *(_OWORD *)(Entry + 112) = 0LL;
              *((_DWORD *)v10 + 8) = v14;
              ExReleasePushLockExclusiveEx(v13, 0LL);
              KeLeaveCriticalRegion();
              ExReleasePushLockSharedEx(v8, 0LL);
              KeLeaveCriticalRegion();
              return;
            }
            v17 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v17, Entry, 0LL);
        }
        v9 = (_QWORD *)*v9;
        if ( v9 == (_QWORD *)v7 )
          goto LABEL_28;
      }
    }
  }
}
