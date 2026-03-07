void __fastcall CTouchProcessor::AddRoutedAwayTarget(struct _KTHREAD **a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // r14
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // r9d
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12[2]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v13; // [rsp+38h] [rbp-69h] BYREF
  __int64 v14; // [rsp+40h] [rbp-61h] BYREF
  PVOID BackTrace[20]; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v16; // [rsp+120h] [rbp+7Fh] BYREF

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_24;
  v5 = gpLeakTrackingAllocator;
  v13 = 260LL;
  v16 = 1851878741;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v14 = 136LL;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, 136LL, 1851878741LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
LABEL_17:
    if ( !Pool2 )
      goto LABEL_24;
    goto LABEL_20;
  }
  if ( v6 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E616D55u) )
      goto LABEL_24;
    v8 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 152LL, v16);
    Pool2 = (__int64)v8;
    if ( !v8
      || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
          *v8 = 1851878741LL,
          Pool2 = (__int64)(v8 + 2),
          v8 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v5 + 1),
        0x6E616D55uLL);
    }
    goto LABEL_17;
  }
  if ( v6 != 2 )
    goto LABEL_24;
  v12[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1851878741, v12) )
  {
    v12[0] = (unsigned __int64)&v13;
    v12[1] = (unsigned __int64)&v16;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v5,
              (__int64)v12,
              &v14);
    goto LABEL_17;
  }
  Pool2 = ExAllocatePool2(v9, 152LL, 1851878741LL);
  if ( !Pool2 )
    goto LABEL_24;
  _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v5,
           (const void *)Pool2,
           v12[0],
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_17;
    }
LABEL_23:
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_24;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v5,
          Pool2,
          v12[0],
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_23;
LABEL_20:
  CInputDest::operator=(Pool2 + 16, (__int64)a3);
  v10 = (__int64 *)((char *)NodeById + 280);
  v11 = *((_QWORD *)NodeById + 35);
  if ( *(struct CInputPointerNode **)(v11 + 8) != (struct CInputPointerNode *)((char *)NodeById + 280) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v11;
  *(_QWORD *)(Pool2 + 8) = v10;
  *(_QWORD *)(v11 + 8) = Pool2;
  *v10 = Pool2;
LABEL_24:
  CInputDest::SetEmpty(a3);
}
