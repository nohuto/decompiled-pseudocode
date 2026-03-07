__int64 __fastcall RIMVirtGetProductString(__int64 a1, const UNICODE_STRING *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  unsigned __int64 MaximumLength; // rbx
  int v6; // eax
  unsigned int v7; // r15d
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  char v11; // r14
  _QWORD v13[2]; // [rsp+20h] [rbp-99h] BYREF
  PVOID BackTrace[28]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v15; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v16; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v18; // [rsp+138h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  MaximumLength = a2[38].MaximumLength;
  v15 = 2003071826;
  v17 = 260LL;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v7 = -1073741811;
  v18 = MaximumLength;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)MaximumLength, 2003071826LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    goto LABEL_24;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v16 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2003071826, &v16) )
      {
        v13[0] = &v17;
        v13[1] = &v15;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v2,
                  (__int64)v13,
                  &v18);
        goto LABEL_24;
      }
      v11 = 0;
      if ( MaximumLength < 0x1000 || (MaximumLength & 0xFFF) != 0 )
      {
        MaximumLength += 16LL;
        v11 = 1;
        v18 = MaximumLength;
      }
      Pool2 = ExAllocatePool2(v10, MaximumLength, 2003071826LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v2,
                 (const void *)Pool2,
                 v16,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_24;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v2,
                    Pool2,
                    v16,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_24;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_23;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x77647352u)
    || MaximumLength + 16 < MaximumLength )
  {
LABEL_23:
    Pool2 = 0LL;
    goto LABEL_24;
  }
  v9 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, MaximumLength + 16, v15);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v9 = 2003071826LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      0x77647352uLL);
  }
LABEL_24:
  *(_QWORD *)(a1 + 376) = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(a1 + 370) = a2[38].MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 368), a2 + 38);
    if ( !wcscmp_0(*(const wchar_t **)(a1 + 376), L"VHidPen") )
      *(_DWORD *)(a1 + 360) |= 0x4000u;
    return 0;
  }
  return v7;
}
