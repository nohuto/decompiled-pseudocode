__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  NSInstrumentation::CLeakTrackingAllocator *v9; // rdi
  unsigned __int64 v10; // r14
  int v11; // esi
  int v12; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // r14
  _QWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r10
  char v17; // r12
  __int64 Pool2; // r14
  _QWORD v20[2]; // [rsp+20h] [rbp-99h] BYREF
  PVOID BackTrace[28]; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v22; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v23; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v24; // [rsp+130h] [rbp+77h] BYREF
  __int64 v25; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = a2;
  if ( (a1[90] & 0x2000) == 0 )
  {
    v23 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 533);
  }
  if ( !a1[192] )
  {
    v23 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 534);
  }
  if ( !v4 )
  {
    v23 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 535);
  }
  v6 = v4 + 1;
  if ( a1[6] != 7 )
    v6 = v4;
  RIMCmFreePointerDeviceContacts(a1, a2, a3);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) < 0 )
    goto LABEL_36;
  v9 = gpLeakTrackingAllocator;
  v10 = 8 * v6;
  v25 = 8 * v6;
  v23 = 2020635474;
  v11 = 0;
  v24 = 260LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v12 != 1 )
    {
      if ( v12 == 2 )
      {
        v22 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2020635474, &v22) )
        {
          v20[0] = &v24;
          v20[1] = &v23;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v9,
                                                                                             (__int64)v20,
                                                                                             &v25);
          goto LABEL_30;
        }
        v17 = 0;
        if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
        {
          v10 += 16LL;
          v17 = 1;
          v25 = v10;
        }
        Pool2 = ExAllocatePool2(v16, v10, v15);
        if ( !Pool2 )
          goto LABEL_35;
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v9,
                 (const void *)Pool2,
                 v22,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2 + 16;
            goto LABEL_30;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v9,
                    Pool2,
                    v22,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_33;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
LABEL_35:
      RIMCmFreePointerDeviceContacts(a1, v7, v8);
LABEL_36:
      v11 = 1;
      goto LABEL_37;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78707352u)
      || v10 + 16 < v10 )
    {
      goto LABEL_35;
    }
    v14 = (_QWORD *)ExAllocatePool2(v24 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, v23);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v14;
    if ( !v14
      || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
          *v14 = 2020635474LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v14 + 2),
          v14 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v9 + 1),
        0x78707352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       8 * v6,
                                                                                       2020635474LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
  }
LABEL_30:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_35;
LABEL_33:
  a1[192] = v6;
LABEL_37:
  LOBYTE(v3) = v11 == 0;
  return v3;
}
