void __fastcall NSInstrumentation::CLeakTrackingAllocator::Free(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CPointerHashTable *v3; // rcx
  char *v4; // rdi
  PVOID v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // edi
  PVOID Buffer; // [rsp+38h] [rbp+10h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    Buffer = a2;
    if ( *(_DWORD *)this )
    {
      if ( *(_DWORD *)this == 1 )
      {
        v7 = *((_DWORD *)a2 - 4);
        Buffer = a2 - 16;
        _InterlockedIncrement64((volatile signed __int64 *)this + 15);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Buffer);
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)this + 1),
          (const void *)v7);
      }
      else if ( *(_DWORD *)this == 2 )
      {
        v3 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
        if ( v3
          && ((unsigned __int16)a2 & 0xFFFu) >= 0x10uLL
          && (v4 = a2 - 16, v9 = 0LL, NSInstrumentation::CPointerHashTable::Remove(v3, a2 - 16, &v9)) )
        {
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
            *((NSInstrumentation::CPrioritizedWriterLock **)this + 13),
            (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFF8uLL));
          _InterlockedIncrement64((volatile signed __int64 *)this + 17);
          v5 = v4;
        }
        else
        {
          v6 = *((_QWORD *)this + 12);
          if ( v6
            && (v10 = 0LL,
                (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v6, &Buffer, &v10)) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
              *((NSInstrumentation::CPrioritizedWriterLock **)this + 13),
              (struct NSInstrumentation::CBackTraceStorageUnit *)(v10 & 0xFFFFFFFFFFFFFFF8uLL));
            _InterlockedIncrement64((volatile signed __int64 *)this + 17);
          }
          else
          {
            _InterlockedIncrement64((volatile signed __int64 *)this + 15);
          }
          v5 = Buffer;
        }
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v5);
      }
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)this + 15);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Buffer);
    }
  }
}
