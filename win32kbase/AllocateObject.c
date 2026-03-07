__int64 __fastcall AllocateObject(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  int v8; // eax
  BOOL v9; // r12d
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 Pool2; // rbx
  unsigned int v14; // esi
  NSInstrumentation::CLeakTrackingAllocator *v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // r10
  char v20; // r15
  __int64 v21; // [rsp+20h] [rbp-89h] BYREF
  __int64 v22; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v25; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v26; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v8 = *(_DWORD *)(v6 + 1944);
  v9 = v8 && (_DWORD)v4 == v8;
  v10 = v5 + 160;
  if ( !v9 )
    v10 = v5;
  if ( *(_DWORD *)(v6 + 4 * v4 + 2200) < (unsigned int)v10 )
  {
    v14 = ((_DWORD)v4 << 24) + 808478791;
    if ( !a3 )
    {
      if ( !(_DWORD)v10 )
        goto LABEL_47;
      Pool2 = (__int64)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                         gpLeakTrackingAllocator,
                         0x104uLL,
                         (unsigned int)v10,
                         v14);
      if ( !Pool2 )
        goto LABEL_47;
      *(_OWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      goto LABEL_20;
    }
    if ( (_DWORD)v10 )
    {
      v15 = gpLeakTrackingAllocator;
      v16 = (unsigned int)v10;
      v25 = v14;
      v21 = 260LL;
      v17 = *(_DWORD *)gpLeakTrackingAllocator;
      v22 = (unsigned int)v10;
      switch ( v17 )
      {
        case 0:
          Pool2 = ExAllocatePool2(260LL, (unsigned int)v10, v14);
          if ( Pool2 )
            _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
          goto LABEL_19;
        case 1:
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, v14)
            && v10 + 16 > (unsigned __int64)(unsigned int)v10 )
          {
            v18 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, v25);
            Pool2 = (__int64)v18;
            if ( !v18
              || (_InterlockedIncrement64((volatile signed __int64 *)v15 + 14),
                  *v18 = v14,
                  Pool2 = (__int64)(v18 + 2),
                  v18 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v15 + 1),
                (const void *)v14);
            }
LABEL_19:
            if ( !Pool2 )
              goto LABEL_47;
LABEL_20:
            if ( v9 )
              RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(Pool2 + (unsigned int)v10 - 160LL), 0LL);
            return Pool2;
          }
          break;
        case 2:
          v26 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, v14, &v26) )
          {
            v23[0] = &v21;
            v23[1] = &v25;
            Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                      v15,
                      v23,
                      &v22);
            goto LABEL_19;
          }
          v20 = 0;
          if ( (unsigned int)v10 < 0x1000 || (v10 & 0xFFF) != 0 )
          {
            v16 = (unsigned int)v10 + 16LL;
            v20 = 1;
            v22 = v16;
          }
          Pool2 = ExAllocatePool2(v19, v16, v14);
          if ( Pool2 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)v15 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( v20 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v15,
                                      Pool2,
                                      v26,
                                      BackTrace) )
              {
                Pool2 += 16LL;
                goto LABEL_19;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v15,
                                         Pool2,
                                         v26,
                                         BackTrace) )
            {
              goto LABEL_19;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v15 + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
          }
          break;
      }
    }
    Pool2 = 0LL;
    goto LABEL_19;
  }
  v11 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(v7, *(void **)(v6 + 8 * v4 + 1952));
  Pool2 = (__int64)v11;
  if ( v11 )
  {
    if ( a3 )
    {
      memset(v11, 0, (unsigned int)v10);
    }
    else
    {
      *(_OWORD *)v11 = 0LL;
      v11[2] = 0LL;
    }
    if ( v9 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((unsigned int)v10 + Pool2 - 160), 0LL);
    *(_WORD *)(Pool2 + 14) = 0x8000;
    return Pool2;
  }
LABEL_47:
  EngSetLastError(8u);
  return 0LL;
}
