/*
 * XREFs of RIMGetPropertyCount @ 0x1C01B7E64
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C01B9AA4 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v8; // r12d
  unsigned __int16 v9; // r13
  int SpecificValueCaps; // esi
  __int64 v11; // rax
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // cx
  char v14; // r15
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rax
  NSInstrumentation::CLeakTrackingAllocator *v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rbx
  __int64 Pool2; // rbx
  unsigned int v22; // r10d
  __int64 v23; // r11
  __int64 v24; // r15
  __int64 v25; // rdi
  _BYTE *v26; // rax
  __int64 v27; // rdx
  unsigned __int16 v28; // dx
  __int64 v30; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v32; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h]
  __int16 v36; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int16 v37; // [rsp+68h] [rbp-98h]
  unsigned __int64 v38[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  PVOID BackTrace[20]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[80]; // [rsp+140h] [rbp+40h] BYREF

  v37 = a2;
  v41 = a1;
  v42 = a4;
  v32 = a3;
  v31 = a3;
  v8 = 0;
  memset(v44, 0, 0x48uLL);
  v33 = 0;
  v36 = 1;
  v9 = a2;
  v35 = 0;
  SpecificValueCaps = -1073741668;
  if ( !a3 )
  {
    v34 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2168);
  }
  v11 = *(_QWORD *)(a1 + 760);
  v12 = a3;
  if ( v11 && (v13 = *(_WORD *)(v11 + 8)) != 0 )
  {
    v30 = a4;
    v9 = *(_WORD *)(v11 + 8);
    v14 = 0;
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 0LL, v13, 0LL, 0LL, (__int64)&v33, v30);
    if ( SpecificValueCaps == -1072627705 )
    {
      v17 = *(_QWORD *)(a1 + 760);
      v12 = v33 + v32;
      v31 = v33;
      v35 = 1;
      *(_WORD *)(v17 + 10) = v33;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          (_DWORD)gRimLog,
          3,
          1,
          30,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
      }
    }
  }
  else
  {
    v14 = 0;
  }
  if ( v12 > 1u )
  {
    v18 = gpLeakTrackingAllocator;
    v34 = 1668313938;
    v39 = 260LL;
    v19 = *(_DWORD *)gpLeakTrackingAllocator;
    v20 = 72LL * v12;
    v40 = v20;
    if ( !v19 )
    {
      Pool2 = ExAllocatePool2(260LL, 72LL * v12, 1668313938LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v18 + 14, 1uLL);
LABEL_36:
      if ( !Pool2 )
        return SpecificValueCaps >= 0;
      goto LABEL_39;
    }
    if ( v19 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707352u)
        || v20 + 16 < v20 )
      {
        return SpecificValueCaps >= 0;
      }
      Pool2 = ExAllocatePool2(v39 & 0xFFFFFFFFFFFFFFFDuLL, v20 + 16, v34);
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)v18 + 14, 1uLL),
            *(_QWORD *)Pool2 = 1668313938LL,
            (Pool2 += 16LL) == 0) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v18 + 1),
          0x63707352uLL);
      }
      goto LABEL_36;
    }
    if ( v19 != 2 )
      return SpecificValueCaps >= 0;
    v38[0] = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313938, v38) )
    {
      v38[0] = (unsigned __int64)&v39;
      v38[1] = (unsigned __int64)&v34;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v18,
                (__int64)v38,
                &v40);
      goto LABEL_36;
    }
    if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
    {
      v20 += 16LL;
      v14 = 1;
      v40 = v20;
    }
    Pool2 = ExAllocatePool2(v23, v20, v22);
    if ( Pool2 )
    {
      _InterlockedAdd64((volatile signed __int64 *)v18 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v14 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v18,
               (const void *)Pool2,
               v38[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_36;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v18,
                  Pool2,
                  v38[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_39:
        v24 = v42;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 1LL, v9, 48LL, (__int64)v44, (__int64)&v36, v42);
        if ( SpecificValueCaps >= 0 )
        {
          v25 = v41;
          *(_BYTE *)(v41 + 824) = v44[2];
          SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 0LL, v9, 0LL, Pool2, (__int64)&v31, v24);
          if ( SpecificValueCaps >= 0 )
          {
            if ( v31 )
            {
              v26 = (_BYTE *)(Pool2 + 2);
              v27 = v31;
              do
              {
                if ( *v26 == v44[2] )
                  ++v8;
                v26 += 72;
                --v27;
              }
              while ( v27 );
            }
            if ( v35 )
            {
              SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                    0LL,
                                    0LL,
                                    v37,
                                    0LL,
                                    Pool2 + 72LL * v31,
                                    (__int64)&v32,
                                    v24);
              if ( SpecificValueCaps >= 0 )
              {
                v28 = v31;
                if ( v32 )
                {
                  do
                  {
                    if ( v28 >= v12 )
                      break;
                    if ( *(_BYTE *)(Pool2 + 72LL * v28 + 2) == v44[2] )
                      ++v8;
                    ++v28;
                  }
                  while ( (unsigned __int16)(v28 - v31) < v32 );
                  v25 = v41;
                }
              }
            }
            if ( v8 <= 1 )
            {
              v35 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2252);
            }
            *(_DWORD *)(v25 + 384) = v8;
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
        return SpecificValueCaps >= 0;
      }
      _InterlockedAdd64((volatile signed __int64 *)v18 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
  }
  return SpecificValueCaps >= 0;
}
