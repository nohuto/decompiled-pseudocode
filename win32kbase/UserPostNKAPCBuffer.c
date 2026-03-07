__int64 __fastcall UserPostNKAPCBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Size)
{
  NSInstrumentation::CLeakTrackingAllocator *v6; // rbx
  int v9; // eax
  unsigned __int64 v11; // rdi
  __int64 Pool2; // rdi
  _QWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r10
  char v16; // si
  unsigned int v18; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF

  v6 = gpLeakTrackingAllocator;
  v18 = 1634628437;
  v20 = 68LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  v11 = (unsigned int)Size + 88LL;
  v21 = v11;
  if ( !v9 )
  {
    Pool2 = ExAllocatePool2(68LL, (unsigned int)Size + 88LL, 1634628437LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_21;
  }
  if ( v9 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x616E7355u)
      || (unsigned __int64)(unsigned int)Size + 104 < (unsigned __int64)(unsigned int)Size + 88 )
    {
      return 0LL;
    }
    v13 = (_QWORD *)ExAllocatePool2(v20 & 0xFFFFFFFFFFFFFFFDuLL, (unsigned int)Size + 104LL, v18);
    Pool2 = (__int64)v13;
    if ( !v13
      || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
          *v13 = 1634628437LL,
          Pool2 = (__int64)(v13 + 2),
          v13 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v6 + 1),
        (const void *)0x616E7355);
    }
LABEL_21:
    if ( !Pool2 )
      return 0LL;
    goto LABEL_24;
  }
  if ( v9 != 2 )
    return 0LL;
  v19[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x616E7355u, v19) )
  {
    v19[0] = (unsigned __int64)&v20;
    v19[1] = (unsigned __int64)&v18;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v6,
              (__int64)v19,
              &v21);
    goto LABEL_21;
  }
  v16 = 0;
  if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
  {
    v11 = (unsigned int)Size + 104LL;
    v16 = 1;
    v21 = v11;
  }
  Pool2 = ExAllocatePool2(v15, v11, v14);
  if ( !Pool2 )
    return 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v6,
                            Pool2,
                            v19[0],
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_21;
    }
LABEL_27:
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 0LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v6,
                           Pool2,
                           v19[0],
                           BackTrace) )
    goto LABEL_27;
LABEL_24:
  memmove((void *)(Pool2 + 88), Src, (unsigned int)Size);
  KeInitializeApc(Pool2, a1, 0LL, a2, a3, a4, 0, Pool2 + 88);
  if ( (unsigned __int8)KeInsertQueueApc(Pool2, Pool2, 0LL, 0LL) )
    return 1LL;
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  return 0LL;
}
