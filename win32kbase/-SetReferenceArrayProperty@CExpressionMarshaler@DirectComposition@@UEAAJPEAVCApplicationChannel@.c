__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // r12
  NSInstrumentation::CLeakTrackingAllocator *v10; // rsi
  unsigned __int64 v11; // r14
  int v12; // eax
  __int64 Pool2; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  int WeakReferenceBase; // eax
  unsigned int v17; // r15d
  bool *v18; // rax
  NSInstrumentation::CLeakTrackingAllocator *v19; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // edx
  char v23; // r15
  __int64 v24; // r14
  __int64 v25; // r14
  void *v26; // rdx
  unsigned __int64 v27[2]; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v28; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-91h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v32; // [rsp+130h] [rbp+67h] BYREF

  v6 = 0;
  *a6 = 0;
  if ( a3 != 20 || !a4 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 24) )
    return (unsigned int)-1073741790;
  v9 = a5;
  v10 = gpLeakTrackingAllocator;
  v32 = 1920418628;
  v28 = 260LL;
  v11 = 8 * a5;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  v29 = 8 * a5;
  if ( !v12 )
  {
    Pool2 = ExAllocatePool2(261LL, 8 * a5, 1920418628LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
    goto LABEL_7;
  }
  if ( v12 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72774344u)
      && v11 + 16 >= v11 )
    {
      v21 = (_QWORD *)ExAllocatePool2(v28 & 0xFFFFFFFFFFFFFFFCuLL | 1, v11 + 16, v32);
      Pool2 = (__int64)v21;
      if ( !v21
        || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
            *v21 = 1920418628LL,
            Pool2 = (__int64)(v21 + 2),
            v21 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v10 + 1),
          (const void *)0x72774344);
      }
LABEL_7:
      *((_QWORD *)this + 24) = Pool2;
      if ( Pool2 )
        goto LABEL_8;
      return (unsigned int)-1073741801;
    }
LABEL_42:
    *((_QWORD *)this + 24) = 0LL;
    return (unsigned int)-1073741801;
  }
  if ( v12 != 2 )
    goto LABEL_42;
  v27[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x72774344u, v27) )
  {
    v27[0] = (unsigned __int64)&v28;
    v27[1] = (unsigned __int64)&v32;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
              (__int64)v10,
              (__int64)v27,
              &v29);
    goto LABEL_7;
  }
  v23 = 0;
  if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
  {
    v11 += 16LL;
    v23 = 1;
    v29 = v11;
  }
  v24 = ExAllocatePool2(261LL, v11, v22);
  if ( !v24 )
    goto LABEL_42;
  _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v23 && (unsigned __int64)(v24 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v10,
                            v24,
                            v27[0],
                            BackTrace) )
    {
      Pool2 = v24 + 16;
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v10,
                           v24,
                           v27[0],
                           BackTrace) )
  {
LABEL_41:
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v24);
    goto LABEL_42;
  }
  *((_QWORD *)this + 24) = v24;
LABEL_8:
  v14 = 0LL;
  if ( v9 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                            a2,
                            a4[v15],
                            (struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 24) + 8 * v15));
      v17 = WeakReferenceBase;
      if ( WeakReferenceBase < 0 )
        break;
      v14 = (unsigned int)(v14 + 1);
      v15 = (unsigned int)v14;
      if ( (unsigned int)v14 >= v9 )
      {
        v6 = WeakReferenceBase;
        goto LABEL_13;
      }
    }
    if ( (_DWORD)v14 )
    {
      v25 = 0LL;
      do
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          a2,
          *(struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 24) + v25));
        v25 += 8LL;
        --v14;
      }
      while ( v14 );
    }
    v26 = (void *)*((_QWORD *)this + 24);
    if ( v26 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v26);
    *((_QWORD *)this + 24) = 0LL;
    return v17;
  }
  else
  {
LABEL_13:
    v18 = a6;
    v19 = gpLeakTrackingAllocator;
    *((_DWORD *)this + 50) = v9;
    *v18 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    NSInstrumentation::CLeakTrackingAllocator::Free(v19, a4);
  }
  return v6;
}
