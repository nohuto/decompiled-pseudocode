void __fastcall Win32FreePool(char *Buffer)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  char *v3; // rcx
  NSInstrumentation::CPointerHashTable *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  PVOID Buffera; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  if ( Buffer )
  {
    v2 = gpLeakTrackingAllocator;
    Buffera = Buffer;
    switch ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      case 0:
        goto LABEL_3;
      case 1:
        Buffera = Buffer - 16;
        v6 = *((_DWORD *)Buffer - 4);
        _InterlockedIncrement64((volatile signed __int64 *)gpLeakTrackingAllocator + 15);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Buffera);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v2 + 1),
          (const void *)v6);
        return;
      case 2:
        v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
        if ( v4 )
        {
          if ( ((unsigned __int16)Buffer & 0xFFFu) >= 0x10uLL )
          {
            v8 = 0LL;
            if ( NSInstrumentation::CPointerHashTable::Remove(v4, Buffer - 16, &v8) )
            {
              NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
                *((NSInstrumentation::CPrioritizedWriterLock **)v2 + 13),
                (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFF8uLL));
              _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
              v3 = Buffer - 16;
              goto LABEL_5;
            }
          }
        }
        v5 = *((_QWORD *)v2 + 12);
        if ( v5 )
        {
          v9 = 0LL;
          if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v5, &Buffera, &v9) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
              *((NSInstrumentation::CPrioritizedWriterLock **)v2 + 13),
              (struct NSInstrumentation::CBackTraceStorageUnit *)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
            _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
            goto LABEL_4;
          }
        }
LABEL_3:
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 15);
LABEL_4:
        v3 = Buffer;
LABEL_5:
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v3);
        break;
    }
  }
}
