/*
 * XREFs of rimGetCompleteFrameFromIVCompleteFrame @ 0x1C01CE80C
 * Callers:
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021F9D0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01CB3F0 (-CompleteFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CB5A4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01CC9CC (-StartFrameFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ConvertPointCoordinates @ 0x1C0223374 (ConvertPointCoordinates.c)
 */

__int64 __fastcall rimGetCompleteFrameFromIVCompleteFrame(__int64 a1, struct RIMDEV *a2, __int64 *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rsi
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rdi
  int v8; // eax
  struct RIMDEV *v9; // r12
  char v10; // r14
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned int v13; // edx
  __int64 v14; // r10
  char v15; // r15
  unsigned __int64 v16; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v18; // xmm6
  __int128 v19; // xmm7
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  PDEVICE_OBJECT *v23; // rdx
  _UNKNOWN **v24; // r8
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r12
  __m128i v30; // xmm2
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // r15
  unsigned int v39; // ecx
  __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // eax
  int v45; // edx
  unsigned __int64 v47; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v48[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int128 v52; // [rsp+A8h] [rbp-60h]
  __int128 v53; // [rsp+B8h] [rbp-50h]
  __int128 v54; // [rsp+C8h] [rbp-40h]
  __int128 v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E8h] [rbp-20h]
  PVOID BackTrace[25]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v58; // [rsp+208h] [rbp+100h] BYREF
  struct RIMDEV *v59; // [rsp+210h] [rbp+108h]
  __int64 *v60; // [rsp+218h] [rbp+110h]
  int v61; // [rsp+220h] [rbp+118h]

  v60 = a3;
  v59 = a2;
  v3 = gpLeakTrackingAllocator;
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 16);
  v61 = v5;
  v7 = (unsigned int)v5;
  v47 = v5;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v9 = a2;
  *a3 = 0LL;
  v58 = 1717793618;
  v50 = 260LL;
  if ( v8 )
  {
    v10 = 1;
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
        return v4;
      v48[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v3, 1717793618, v48) )
      {
        *(_QWORD *)&v49 = &v50;
        *((_QWORD *)&v49 + 1) = &v58;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v3,
                                                                                           (__int64)&v49,
                                                                                           &v47);
        goto LABEL_21;
      }
      v15 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v7 += 16LL;
        v15 = 1;
        v47 = v7;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v14, v7, v13);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return v4;
      _InterlockedAdd64((volatile signed __int64 *)v3 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v15
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v3,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v48[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_21;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v3,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v48[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_24;
      }
      _InterlockedAdd64((volatile signed __int64 *)v3 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return v4;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v3, 0x66637352u) || v7 + 16 < v7 )
      return v4;
    Pool2 = (_QWORD *)ExAllocatePool2(v50 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v58);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v3 + 14, 1uLL),
          *Pool2 = 1717793618LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        0x66637352uLL);
    }
  }
  else
  {
    v10 = 1;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)v7,
                                                                                       1717793618LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v3 + 14, 1uLL);
  }
LABEL_21:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return v4;
LABEL_24:
  *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v61;
  if ( v9 )
  {
    if ( *(_DWORD *)(a1 + 176) )
      v16 = *((_QWORD *)v9 + 3);
    else
      v16 = *((_QWORD *)v9 + 2);
  }
  else
  {
    v16 = 0LL;
  }
  v47 = v16;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8;
  *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 28) = *(_DWORD *)(a1 + 24);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 48) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 64) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 80) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 96) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 128) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 144) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 160) = *(_OWORD *)(a1 + 144);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 176) = *(_OWORD *)(a1 + 160);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v51 = 0LL;
  v18 = 0LL;
  *(LARGE_INTEGER *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 120) = PerformanceCounter;
  v19 = 0LL;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 192) = *(_DWORD *)(a1 + 176);
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 196) = *(_DWORD *)(a1 + 180);
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 200) = *(_DWORD *)(a1 + 184);
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 208) = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 240;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = v16;
  if ( v9 )
  {
    v20 = *((_QWORD *)v9 + 59);
    if ( v20 )
    {
      v18 = *(_OWORD *)(v20 + 176);
      v51 = *((_QWORD *)v9 + 59);
      v19 = *(_OWORD *)(v20 + 160);
    }
  }
  InputTraceLogging::RIM::StartFrameFromContainer(
    v9,
    (const struct RIMCOMPLETEFRAME *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  v21 = *(_QWORD *)(a1 + 216);
  v22 = 0LL;
  v61 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
LABEL_57:
    v37 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232);
    v38 = (__int64 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 224);
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 216) = v37;
    v39 = 192 * *(_DWORD *)(a1 + 20);
    *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 28) = *(_DWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 208) )
      *v38 = v37 + v39;
    v40 = *(_QWORD *)(a1 + 208);
    v41 = *v38;
    if ( v40 )
    {
      while ( 1 )
      {
        *(_DWORD *)v41 = *(_DWORD *)v40;
        *(_DWORD *)(v41 + 4) = *(_DWORD *)(v40 + 4);
        *(_QWORD *)(v41 + 8) = v41 + 24;
        memmove((void *)(v41 + 24), *(const void **)(v40 + 8), *(unsigned int *)(v40 + 4));
        v42 = 0LL;
        v43 = *(_DWORD *)(v40 + 4) + 7;
        *(_QWORD *)(v41 + 16) = 0LL;
        v44 = (v43 & 0xFFFFFFF8) + 24;
        if ( *(_QWORD *)(v40 + 16) )
        {
          v42 = v41 + v44;
          *(_QWORD *)(v41 + 16) = v42;
        }
        v40 = *(_QWORD *)(v40 + 16);
        v41 = v42;
        if ( !v42 )
          break;
        if ( !v40 )
        {
LABEL_74:
          v61 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1577);
          if ( !v40 )
          {
LABEL_75:
            v9 = v59;
            goto LABEL_76;
          }
        }
      }
      if ( !v40 )
        goto LABEL_75;
      goto LABEL_74;
    }
LABEL_76:
    v4 = 1;
    *v60 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    InputTraceLogging::RIM::CompleteFrameFromContainer(
      v9,
      (const struct RIMCOMPLETEFRAME *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return v4;
  }
  v23 = &WPP_GLOBAL_Control;
  v24 = &WPP_RECORDER_INITIALIZED;
  while ( 1 )
  {
    v25 = 192 * v22;
    *(_DWORD *)(v25 + *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232)) = *(_DWORD *)v21;
    *(_WORD *)(v25
             + *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232)
             + 8) = *(_WORD *)(v21 + 8);
    *(_WORD *)(v25
             + *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232)
             + 10) = *(_WORD *)(v21 + 12);
    *(_DWORD *)(v25
              + *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232)
              + 160) = *(_DWORD *)(v21 + 152);
    *(_DWORD *)(v25
              + *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232)
              + 164) = *(_DWORD *)(v21 + 156);
    v26 = *(_DWORD *)(v21 + 16);
    LODWORD(v48[0]) = v26;
    if ( v26 == 2 || v26 == 5 )
    {
      v28 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232);
      *(_DWORD *)(v25 + v28 + 112) = *(_DWORD *)(v21 + 104);
      *(_DWORD *)(v25 + v28 + 116) = *(_DWORD *)(v21 + 108);
      *(_OWORD *)(v25 + v28 + 120) = *(_OWORD *)(v21 + 112);
      *(_OWORD *)(v25 + v28 + 136) = *(_OWORD *)(v21 + 128);
      *(_DWORD *)(v25 + v28 + 152) = *(_DWORD *)(v21 + 144);
      *(_DWORD *)(v25 + v28 + 156) = *(_DWORD *)(v21 + 148);
    }
    else if ( v26 == 3 )
    {
      v27 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232);
      *(_DWORD *)(v25 + v27 + 112) = *(_DWORD *)(v21 + 104);
      *(_DWORD *)(v25 + v27 + 116) = *(_DWORD *)(v21 + 108);
      *(_DWORD *)(v25 + v27 + 120) = *(_DWORD *)(v21 + 112);
      *(_DWORD *)(v25 + v27 + 124) = *(_DWORD *)(v21 + 116);
      *(_DWORD *)(v25 + v27 + 128) = *(_DWORD *)(v21 + 120);
      *(_DWORD *)(v25 + v27 + 132) = *(_DWORD *)(v21 + 124);
    }
    v29 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232);
    v30 = *(__m128i *)(v21 + 16);
    v31 = *(_OWORD *)(v21 + 48);
    v52 = *(_OWORD *)(v21 + 32);
    v32 = *(_OWORD *)(v21 + 64);
    v53 = v31;
    v33 = *(_OWORD *)(v21 + 80);
    v54 = v32;
    *(_QWORD *)&v32 = *(_QWORD *)(v21 + 96);
    *(_DWORD *)(v25 + v29 + 20) = v30.m128i_i32[1];
    *(_DWORD *)(v25 + v29 + 16) = _mm_cvtsi128_si32(v30);
    v55 = v33;
    *(_DWORD *)(v25 + v29 + 28) = _mm_srli_si128(v30, 8).m128i_i32[1];
    *(_QWORD *)(v25 + v29 + 32) = v47;
    *(_QWORD *)(v25 + v29 + 48) = *((_QWORD *)&v52 + 1);
    *(_QWORD *)(v25 + v29 + 64) = *((_QWORD *)&v53 + 1);
    v56 = v32;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v23) = 0;
    }
    if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v23,
        (_DWORD)v24,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        60,
        (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids,
        v52);
    }
    *(_QWORD *)&v49 = v25
                    + *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 232)
                    + 16LL;
    if ( !qword_1C02D7FD0 || (int)qword_1C02D7FD0() < 0 )
      break;
    if ( !(qword_1C02D7FD8 ? qword_1C02D7FD8(v52, v49) : 0) )
      break;
    if ( LODWORD(v48[0]) == 5 || !v51 )
    {
      *(_QWORD *)(v25 + v29 + 56) = v53;
      *(_QWORD *)(v25 + v29 + 72) = v54;
    }
    else
    {
      v35 = *(_QWORD *)(v25 + v29 + 48);
      v49 = v18;
      *(_OWORD *)v48 = v19;
      ConvertPointCoordinates(v35);
      v36 = *(_QWORD *)(v25 + v29 + 64);
      v49 = v18;
      *(_OWORD *)v48 = v19;
      ConvertPointCoordinates(v36);
    }
    *(_QWORD *)(v25 + v29 + 80) = *((_QWORD *)&v54 + 1);
    *(_OWORD *)(v25 + v29 + 88) = v55;
    *(_DWORD *)(v25 + v29 + 104) = v56;
    v9 = v59;
    InputTraceLogging::RIM::CopyPointerFromContainer(
      v59,
      (const struct tagPOINTEREVENTINT *)(v25
                                        + *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                    + 232)
                                        + 8LL));
    v24 = &WPP_RECORDER_INITIALIZED;
    v22 = (unsigned int)(v61 + 1);
    v21 += 176LL;
    v61 = v22;
    v23 = &WPP_GLOBAL_Control;
    if ( (unsigned int)v22 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_57;
  }
  v45 = 2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v45) = v10;
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v45,
      (_DWORD)v24,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      12,
      61,
      (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids);
  }
  return 0LL;
}
