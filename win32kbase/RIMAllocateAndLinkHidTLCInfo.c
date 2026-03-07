__int64 __fastcall RIMAllocateAndLinkHidTLCInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r14
  unsigned __int16 v5; // si
  __int64 v6; // rax
  __int64 v7; // r8
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v13; // r9
  _QWORD *Pool2; // rax
  __int64 v15; // r10
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 i; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v34[16]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v38; // [rsp+158h] [rbp+58h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v34, (struct _KTHREAD **)(v6 + 288));
  if ( (unsigned int)RIMIsLegacyDevice(v5, v4) )
  {
    v37 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 149);
  }
  if ( RIMSearchHidTLCInfo(v5, v4) )
  {
    v37 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 154);
  }
  v8 = gpLeakTrackingAllocator;
  v37 = 1886417746;
  LODWORD(v9) = 48;
  v32 = 260LL;
  v33 = 48LL;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v10 != 1 )
    {
      if ( v10 != 2 )
        goto LABEL_20;
      v38 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v38) )
      {
        v35[0] = &v32;
        v35[1] = &v37;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v8,
                                                                                           (__int64)v35,
                                                                                           &v33);
        goto LABEL_31;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v15,
                                                                                         64LL,
                                                                                         1886417746LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_20;
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v8,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v38,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_31;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v8,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v38,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_32;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_20;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u) )
      goto LABEL_20;
    Pool2 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, 64LL, v37);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
          *Pool2 = 1886417746LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v8 + 1),
        0x70707352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       48LL,
                                                                                       1886417746LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
  }
LABEL_31:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_20:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v7,
        (_DWORD)gRimLog,
        3,
        1,
        10,
        (__int64)&WPP_7cc99c775a5c31d2601442055352440d_Traceguids);
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_28;
  }
LABEL_32:
  *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v5;
  *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 18) = v4;
  v17 = SGDGetUserSessionState(v11, v9, v7, v13) + 376;
  v21 = *(_QWORD *)v17;
  if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
    __fastfail(3u);
  *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v21;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = v17;
  *(_QWORD *)(v21 + 8) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  *(_QWORD *)v17 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  v22 = *(__int64 **)(SGDGetUserSessionState(v21, v18, v19, v20) + 392);
  for ( i = SGDGetUserSessionState(v24, v23, v25, v26);
        v22 != (__int64 *)(i + 392);
        i = SGDGetUserSessionState(v29, v28, v30, v31) )
  {
    if ( *((_WORD *)v22 + 8) == v5 )
    {
      *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = *((_DWORD *)v22 + 5);
      break;
    }
    v22 = (__int64 *)*v22;
  }
LABEL_28:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v34);
  return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
}
