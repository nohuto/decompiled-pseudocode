void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned __int8 a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // r13
  signed __int64 v5; // rbp
  char v6; // r15
  __int64 v7; // rsi
  signed __int64 v8; // rdi
  char v9; // r14
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *Pool2; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v11; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v12; // r14
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***v13; // rax
  volatile signed __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int16 CurrentThreadId; // ax
  __int16 v17; // cx
  PVOID BackTrace[27]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v20; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int8 v21; // [rsp+120h] [rbp+18h]

  v21 = a3;
  v4 = this;
  v5 = _InterlockedIncrement64((volatile signed __int64 *)a2 + 5);
  v6 = 0;
  v7 = v5 / 1011;
  if ( v5 && v5 == 1011 * (v5 / 1011) )
  {
    --v7;
    v6 = 1;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 >= 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v8 = -v8;
  }
  if ( v8 != v7 )
  {
    do
    {
      KeWaitForSingleObject(*((PVOID *)a2 + 2), UserRequest, 0, 0, 0LL);
      v8 = *((_QWORD *)a2 + 4);
      if ( v8 >= 0 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        v8 = -v8;
      }
    }
    while ( v8 != v7 );
    v4 = this;
  }
  if ( v6 )
  {
    KeWaitForSingleObject(*((PVOID *)a2 + 3), UserRequest, 0, 0, 0LL);
    KeClearEvent(*((PRKEVENT *)a2 + 3));
    if ( !v9 )
    {
      Pool2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)ExAllocatePool2(262LL, 4096LL, 1648980821LL);
      if ( Pool2 )
      {
        v11 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
        if ( *v11 != a2 )
          goto LABEL_27;
        *(_QWORD *)Pool2 = a2;
        *((_QWORD *)Pool2 + 1) = v11;
        *v11 = Pool2;
        *((_QWORD *)a2 + 1) = Pool2;
      }
      else
      {
        *((_QWORD *)a2 + 4) = -v7;
      }
    }
    if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 == a2 )
    {
LABEL_24:
      _InterlockedExchange((volatile __int32 *)a2 + 12, 0);
      if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, ++v7, v8) )
        _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, -v7, -v8);
      KeSetEvent(*((PRKEVENT *)a2 + 2), 0, 0);
      goto LABEL_28;
    }
    v12 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
    if ( *v12 == a2 )
    {
      v13 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***)v12[1];
      if ( *v13 == v12 )
      {
        *((_QWORD *)a2 + 1) = v13;
        *v13 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2;
        memmove((char *)v12 + 52, (char *)a2 + 52, 0xFCCuLL);
        v14 = *(_QWORD *)a2;
        if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(*(_QWORD *)a2 + 8LL) == a2 )
        {
          *v12 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v14;
          v12[1] = a2;
          *(_QWORD *)(v14 + 8) = v12;
          *(_QWORD *)a2 = v12;
          goto LABEL_24;
        }
      }
    }
LABEL_27:
    __fastfail(3u);
  }
LABEL_28:
  v20 = -1;
  v15 = v5 % 1011;
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( !NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
          *((NSInstrumentation::CBackTraceStoreEx **)v4 + 4),
          (struct NSInstrumentation::CBackTrace *)BackTrace,
          &v20) )
    _InterlockedExchange64((volatile __int64 *)a2 + 4, -v7);
  *((_WORD *)a2 + 2 * v15 + 26) = (2 * v20) | *((_WORD *)a2 + 2 * v15 + 26) & 1;
  CurrentThreadId = (unsigned __int16)PsGetCurrentThreadId();
  v17 = *((_WORD *)a2 + 2 * v15 + 26);
  *((_WORD *)a2 + 2 * v15 + 27) = CurrentThreadId;
  *((_WORD *)a2 + 2 * v15 + 26) = v21 | v17 & 0xFFFE;
  if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 12) == 1011 )
    KeSetEvent(*((PRKEVENT *)a2 + 3), 0, 0);
}
