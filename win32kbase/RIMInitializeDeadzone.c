/*
 * XREFs of RIMInitializeDeadzone @ 0x1C01B83A8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimDestroyDeadzone @ 0x1C01B2AC8 (rimDestroyDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01C9318 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01C9904 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMInitializeDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  NSInstrumentation::CLeakTrackingAllocator *v14; // rdi
  int v15; // eax
  __int64 Pool2; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r10
  __int64 v19; // rdi
  PDEVICE_OBJECT *v20; // rdx
  PDEVICE_OBJECT v21; // rcx
  PDEVICE_OBJECT *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD v33[2]; // [rsp+40h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v35; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v36; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+130h] [rbp+77h] BYREF
  __int64 v38; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 224);
  if ( *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 448) )
  {
    v28 = *(_QWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 448);
    ++*(_DWORD *)(v28 + 4);
    goto LABEL_44;
  }
  v14 = gpLeakTrackingAllocator;
  v35 = 2053394514;
  v37 = 260LL;
  v38 = 64LL;
  v15 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 64LL, 2053394514LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v14 + 14);
    goto LABEL_17;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      v36 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053394514, &v36) )
      {
        v33[0] = &v37;
        v33[1] = &v35;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v14,
                  (__int64)v33,
                  &v38);
        goto LABEL_17;
      }
      Pool2 = ExAllocatePool2(v18, 80LL, 2053394514LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v14,
                 Pool2,
                 v36,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v19 = Pool2;
LABEL_21:
            memset((void *)Pool2, 0, 0x40uLL);
            v4 = RIMDeadzone::Initialize((RIMDeadzone *)Pool2);
            if ( v4 < 0 )
            {
              v22 = &WPP_GLOBAL_Control;
              LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v22,
                  v12,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  13,
                  (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
              }
              RIMDeadzone::Release((RIMDeadzone *)Pool2);
              rimDestroyDeadzone(v24, v23, v25, v26);
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
              v19 = 0LL;
            }
            goto LABEL_42;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v14,
                    (const void *)Pool2,
                    v36,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_17;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_32:
    v19 = 0LL;
    goto LABEL_33;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A645052u) )
    goto LABEL_32;
  v17 = (_QWORD *)ExAllocatePool2(v37 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v35);
  Pool2 = (__int64)v17;
  if ( !v17
    || (_InterlockedIncrement64((volatile signed __int64 *)v14 + 14),
        *v17 = 2053394514LL,
        Pool2 = (__int64)(v17 + 2),
        v17 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v14 + 1),
      0x7A645052uLL);
  }
LABEL_17:
  v19 = Pool2;
  if ( Pool2 )
    goto LABEL_21;
LABEL_33:
  v21 = WPP_GLOBAL_Control;
  v20 = &WPP_GLOBAL_Control;
  LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v20,
      v12,
      (_DWORD)gRimLog,
      3,
      1,
      12,
      (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
  v4 = -1073741801;
LABEL_42:
  *(_QWORD *)(SGDGetUserSessionState(v21, v20, v12, v13) + 448) = v19;
LABEL_44:
  v31 = SGDGetUserSessionState(v28, v27, v29, v30);
  *(_QWORD *)(v31 + 232) = 0LL;
  ExReleasePushLockExclusiveEx(v31 + 224, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
