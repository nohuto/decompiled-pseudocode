__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int16 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  char v5; // r14
  __int64 v7; // r15
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadPointerData; // r13
  int v15; // edx
  __int64 v16; // r9
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v24; // rsi
  unsigned __int64 v25; // rdi
  int v26; // eax
  _QWORD *Pool2; // rax
  unsigned int v28; // r10d
  __int64 v29; // r11
  int v30; // edx
  unsigned int PointerDataQPCTimeList; // esi
  int v32; // r8d
  int v33; // r9d
  int v34; // ecx
  PDEVICE_OBJECT v35; // rcx
  int v36; // edx
  int v38; // edx
  __int16 v39; // [rsp+30h] [rbp-D0h]
  HWND v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v44[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[26]; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v47; // [rsp+180h] [rbp+80h] BYREF

  v5 = 0;
  v7 = a4;
  v44[0] = 0LL;
  v40 = 0LL;
  v10 = 1;
  if ( a3 == 1 )
  {
    v47 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 14500);
  }
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        0LL,
                        0LL,
                        &v40);
  if ( !ThreadPointerData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 320;
      LOBYTE(v15) = v10;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        320,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
        a3);
    }
LABEL_94:
    v22 = 87;
LABEL_95:
    UserSetLastError(v22);
    return 0LL;
  }
  if ( !ValidateHbwnd((unsigned __int64)v40, v11, v12, v13) && !ValidateHwndEx((__int64)v40, 1LL, 0LL, v16) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 321;
      LOBYTE(v18) = v10;
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        321,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    goto LABEL_94;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v40) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 322;
      LOBYTE(v21) = v10;
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        v19,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        322,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v22 = 232;
    goto LABEL_95;
  }
  if ( (_DWORD)v7 == 1 )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v44;
    goto LABEL_54;
  }
  v24 = gpLeakTrackingAllocator;
  v25 = 8 * v7;
  v43 = 8 * v7;
  v47 = 2020176725;
  v42 = 260LL;
  v26 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v26 != 1 )
    {
      if ( v26 != 2 )
        goto LABEL_87;
      v41[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2020176725, v41) )
      {
        v41[0] = (unsigned __int64)&v42;
        v41[1] = (unsigned __int64)&v47;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v24,
                                                                                           (__int64)v41,
                                                                                           &v43);
        goto LABEL_51;
      }
      if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
      {
        v25 += 16LL;
        v5 = 1;
        v43 = v25;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v29, v25, v28);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_87;
      _InterlockedAdd64((volatile signed __int64 *)v24 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v5
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v24,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v41[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_51;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v24,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v41[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_54;
      }
      _InterlockedAdd64((volatile signed __int64 *)v24 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_87;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78697355u)
      || v25 + 16 < v25 )
    {
      goto LABEL_87;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v42 & 0xFFFFFFFFFFFFFFFDuLL, v25 + 16, v47);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v24 + 14, 1uLL),
          *Pool2 = 2020176725LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v24 + 1),
        0x78697355uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       8 * v7,
                                                                                       2020176725LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v24 + 14, 1uLL);
  }
LABEL_51:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_87:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = 323;
      LOBYTE(v38) = v10;
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_L(
        WPP_GLOBAL_Control->AttachedDevice,
        v38,
        v19,
        v20,
        2,
        7,
        323,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
        v7);
    }
    goto LABEL_94;
  }
LABEL_54:
  v46 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(
                             (struct _KTHREAD **)this,
                             ThreadPointerData,
                             v7,
                             (unsigned __int64 *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                             &v46);
  if ( PointerDataQPCTimeList )
  {
    PointerDataQPCTimeList = ApiSetGetInputTransformList(
                               (_DWORD)v40,
                               v7,
                               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                               v33,
                               (__int64)a5);
    if ( PointerDataQPCTimeList )
      goto LABEL_82;
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_80;
    v36 = 326;
    goto LABEL_79;
  }
  if ( !v46 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = v10;
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v32,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        324,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
    v34 = 232;
    goto LABEL_81;
  }
  v35 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = 325;
LABEL_79:
    v39 = v36;
    LOBYTE(v36) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      v35->AttachedDevice,
      v36,
      v32,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      7,
      v39,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
LABEL_80:
  v34 = 87;
LABEL_81:
  UserSetLastError(v34);
LABEL_82:
  if ( (unsigned __int64 *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 != v44
    && UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  }
  return PointerDataQPCTimeList;
}
