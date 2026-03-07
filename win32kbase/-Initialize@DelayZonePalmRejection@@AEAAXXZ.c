void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // r8d
  char v6; // r14
  DelayZoneTelemetry *v7; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // edx
  int v10; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v13; // r10
  _OWORD v14[6]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BackTrace[26]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v16; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v17; // [rsp+188h] [rbp+88h] BYREF
  __int64 v18; // [rsp+190h] [rbp+90h] BYREF
  __int64 v19; // [rsp+198h] [rbp+98h] BYREF

  DelayZonePalmRejection::ReadSettingsFromRegKey(this);
  memset(&v14[1], 0, 0x48uLL);
  v2 = v14[2];
  *(_OWORD *)this = v14[1];
  v3 = v14[3];
  *((_OWORD *)this + 1) = v2;
  v4 = v14[4];
  *((_OWORD *)this + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v14[5];
  *((_OWORD *)this + 3) = v4;
  *((_QWORD *)this + 8) = v3;
  *((_QWORD *)this + 3) = 0LL;
  CInpLockGuard::Initialize((DelayZonePalmRejection *)((char *)this + 112));
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 10) = (char *)this + 72;
  v6 = 1;
  *((_QWORD *)this + 9) = (char *)this + 72;
  v7 = (DelayZoneTelemetry *)*((_QWORD *)this + 16);
  *((_DWORD *)this + 22) = 1;
  if ( v7 )
  {
    DelayZoneTelemetry::Initialize(v7, *((_DWORD *)this + 26), *((_DWORD *)this + 25));
    return;
  }
  v8 = gpLeakTrackingAllocator;
  v16 = 2053403477;
  v9 = 12304;
  v18 = 260LL;
  v19 = 12304LL;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v10 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A647355u) )
        goto LABEL_22;
      Pool2 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 12320LL, v16);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
            *Pool2 = 2053403477LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v8 + 1),
          (const void *)0x7A647355);
      }
      goto LABEL_5;
    }
    if ( v10 != 2 )
      goto LABEL_22;
    v17 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x7A647355u, &v17) )
    {
      *(_QWORD *)&v14[0] = &v18;
      *((_QWORD *)&v14[0] + 1) = &v16;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         (__int64)v8,
                                                                                         (__int64)v14,
                                                                                         &v19);
      goto LABEL_5;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       v13,
                                                                                       12320LL,
                                                                                       2053403477LL);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_22;
    _InterlockedAdd64((volatile signed __int64 *)v8 + 16, 1uLL);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v8,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v17,
                              BackTrace) )
        goto LABEL_6;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v8,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v17,
                                 BackTrace) )
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
      goto LABEL_5;
    }
    _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    goto LABEL_22;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     12304LL,
                                                                                     2053403477LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
LABEL_5:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_6:
    DelayZoneTelemetry::Initialize(
      (DelayZoneTelemetry *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
      *((_DWORD *)this + 26),
      *((_DWORD *)this + 25));
    *((_QWORD *)this + 16) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    return;
  }
LABEL_22:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = v6;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      23,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  }
}
