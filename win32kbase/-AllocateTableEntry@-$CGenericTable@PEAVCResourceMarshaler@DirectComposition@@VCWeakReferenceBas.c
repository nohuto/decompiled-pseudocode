__int64 __fastcall DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // eax
  __int64 Pool2; // rbx
  _QWORD *v7; // rax
  char v8; // si
  unsigned __int64 v9; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v12; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int64 v13; // [rsp+120h] [rbp+77h] BYREF
  __int64 v14; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = ByteSize;
  v12 = 1953973060;
  v14 = 260LL;
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  v9 = ByteSize;
  if ( !v4 )
  {
    Pool2 = ExAllocatePool2(263LL, ByteSize, 1953973060LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    return Pool2;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v13 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x74774344u, &v13) )
      {
        v10[0] = &v14;
        v10[1] = &v12;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
                 v2,
                 v10,
                 &v9);
      }
      v8 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v3 += 16LL;
        v8 = 1;
        v9 = v3;
      }
      Pool2 = ExAllocatePool2(263LL, v3, 1953973060LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v8 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v2,
                                  Pool2,
                                  v13,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v2,
                                     Pool2,
                                     v13,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x74774344u)
    || v3 + 16 < v3 )
  {
    return 0LL;
  }
  v7 = (_QWORD *)ExAllocatePool2(v14 | 3, v3 + 16, v12);
  Pool2 = (__int64)v7;
  if ( !v7
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v7 = 1953973060LL,
        Pool2 = (__int64)(v7 + 2),
        v7 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      (const void *)0x74774344);
  }
  return Pool2;
}
