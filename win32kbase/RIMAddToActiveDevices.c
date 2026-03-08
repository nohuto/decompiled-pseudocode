/*
 * XREFs of RIMAddToActiveDevices @ 0x1C01B31F4
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C01D99D4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C01BC4DC (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C0245C80 (ApiSetPostPointerDeviceInRangeMessage.c)
 */

__int64 __fastcall RIMAddToActiveDevices(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  _QWORD *v3; // rdi
  unsigned int v4; // esi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rdi
  int v14; // eax
  int v15; // edx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  int v17; // r8d
  int v18; // eax
  _QWORD *Pool2; // rax
  unsigned int v20; // r10d
  __int64 v21; // r11
  __int64 v22; // r9
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  void *v25; // rcx
  _QWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[28]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v29; // [rsp+150h] [rbp+50h] BYREF
  union _LARGE_INTEGER DueTime; // [rsp+158h] [rbp+58h] BYREF
  __int64 v31; // [rsp+160h] [rbp+60h] BYREF
  __int64 v32; // [rsp+168h] [rbp+68h] BYREF

  v2 = (_QWORD *)(a1 + 448);
  v3 = *(_QWORD **)(a1 + 448);
  v4 = 0;
  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  v7 = *(_QWORD *)(a2 + 16);
  if ( IS_USERCRIT_OWNED_AT_ALL(v9, v8, v10, v11) )
    ApiSetPostPointerDeviceInRangeMessage(a2);
  else
    rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1, v7, 1LL);
  do
  {
    if ( v3 == v2 )
    {
      v13 = gpLeakTrackingAllocator;
      v32 = 32LL;
      v29 = 2020635474;
      v14 = *(_DWORD *)gpLeakTrackingAllocator;
      v31 = 260LL;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          if ( v14 != 2 )
            return v4;
          DueTime.QuadPart = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                  gpLeakTrackingAllocator,
                  2020635474,
                  (unsigned __int64 *)&DueTime.QuadPart) )
          {
            v27[0] = &v31;
            v27[1] = &v29;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                               (__int64)v13,
                                                                                               (__int64)v27,
                                                                                               &v32);
            goto LABEL_28;
          }
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                             v21,
                                                                                             48LL,
                                                                                             v20);
          if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            return v4;
          _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v13,
                   (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   DueTime.QuadPart,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
              goto LABEL_28;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v13,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                      DueTime.QuadPart,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_29:
            v22 = *(_QWORD *)(a2 + 16);
            *(_DWORD *)(v22 + 188) |= 0x10u;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v15) = 0;
            }
            if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v15,
                v17,
                (_DWORD)gRimLog,
                4,
                1,
                39,
                (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
                v22);
            }
            *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = a2;
            v23 = (_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8);
            v24 = (_QWORD *)v2[1];
            if ( (_QWORD *)*v24 != v2 )
              __fastfail(3u);
            *v23 = v2;
            v4 = 1;
            v23[1] = v24;
            *v24 = v23;
            v2[1] = v23;
            if ( *(_DWORD *)(a1 + 464) == -1 )
            {
              v29 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3096);
            }
            if ( ++*(_DWORD *)(a1 + 464) == 1 )
            {
              v25 = *(void **)(a1 + 336);
              DueTime.QuadPart = -1000000LL;
              ZwSetTimer(v25, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            }
            return v4;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v13 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
          return v4;
        }
        if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78707352u) )
          return v4;
        Pool2 = (_QWORD *)ExAllocatePool2(v31 & 0xFFFFFFFFFFFFFFFDuLL, 48LL, v29);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)v13 + 14),
              *Pool2 = 2020635474LL,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v13 + 1),
            0x78707352uLL);
        }
      }
      else
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           32LL,
                                                                                           2020635474LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v13 + 14);
      }
LABEL_28:
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return v4;
      goto LABEL_29;
    }
    v12 = v3 - 1;
    v3 = (_QWORD *)*v3;
  }
  while ( *v12 != a2 );
  if ( (v12[3] & 2) != 0 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3069);
  }
  v18 = *((_DWORD *)v12 + 6);
  if ( (v18 & 1) != 0 )
    *((_DWORD *)v12 + 6) = v18 & 0xFFFFFFFE;
  return 1;
}
