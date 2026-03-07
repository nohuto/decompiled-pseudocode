__int64 __fastcall CreateCacheDC(__int64 a1, unsigned int a2, __int64 a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  HDEV v9; // rcx
  __int64 DisplayDC; // rdi
  __int64 v11; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17[2]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v18; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+38h] [rbp-71h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v21; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = gpLeakTrackingAllocator;
  v21 = 1667527509;
  v18 = 260LL;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v19 = 96LL;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, 96LL, 1667527509LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    goto LABEL_4;
  }
  if ( v6 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63647355u) )
      return 0LL;
    v15 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 112LL, v21);
    Pool2 = (__int64)v15;
    if ( !v15
      || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
          *v15 = 1667527509LL,
          Pool2 = (__int64)(v15 + 2),
          v15 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        (const void *)0x63647355);
    }
LABEL_4:
    if ( Pool2 )
      goto LABEL_5;
    return 0LL;
  }
  if ( v6 != 2 )
    return 0LL;
  v17[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x63647355u, v17) )
  {
    v17[0] = (unsigned __int64)&v18;
    v17[1] = (unsigned __int64)&v21;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              v3,
              v17,
              &v19);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v16, 112LL, 1667527509LL);
  if ( !Pool2 )
    return 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v3,
                            Pool2,
                            v17[0],
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_44:
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 0LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           v17[0],
                           BackTrace) )
    goto LABEL_44;
LABEL_5:
  if ( a3 )
    v9 = *(HDEV *)(a3 + 80);
  else
    v9 = (HDEV)*((_QWORD *)gpDispInfo + 5);
  DisplayDC = GreCreateDisplayDC(v9, 0);
  if ( !DisplayDC )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() >= 0 && qword_1C02D6C38 )
      v11 = qword_1C02D6C38(a1, 2848LL);
    else
      v11 = 0LL;
    v13 = a2 & 0xFFFFBFFF;
    if ( v11 )
      v13 = a2;
    a2 = v13;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)Pool2 = *((_QWORD *)gpDispInfo + 3);
  *((_QWORD *)gpDispInfo + 3) = Pool2;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  *(_QWORD *)(Pool2 + 8) = DisplayDC;
  *(_DWORD *)(Pool2 + 64) = a2;
  *(_QWORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)(Pool2 + 32) = v11;
  *(_QWORD *)(Pool2 + 88) = a3;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx(DisplayDC, 2147483650LL, 0LL, 0LL);
    *(_QWORD *)(Pool2 + 72) = gptiCurrent;
    *(_QWORD *)(a1 + 248) = Pool2;
    if ( (a2 & 0x4000) != 0 && qword_1C02D6C80 && (int)qword_1C02D6C80() >= 0 && qword_1C02D6C88 )
      qword_1C02D6C88(Pool2, 0LL);
  }
  else
  {
    GreSetDCOwnerEx(DisplayDC, 2147483666LL, 0LL, 0LL);
    *(_QWORD *)(Pool2 + 72) = 0LL;
    ++gnDCECount;
  }
  if ( (a2 & 2) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 136);
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v14 + 40) = Pool2;
    *(_DWORD *)(Pool2 + 64) |= 0x1000u;
    if ( qword_1C02D6C70 && (int)qword_1C02D6C70() >= 0 && qword_1C02D6C78 )
      qword_1C02D6C78(Pool2);
  }
  if ( *((_QWORD *)gpDispInfo + 4) )
    GreGetBounds(*(_QWORD *)(Pool2 + 8), 0LL, 1LL);
  return *(_QWORD *)(Pool2 + 8);
}
