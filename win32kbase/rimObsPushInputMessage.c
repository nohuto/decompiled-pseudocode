/*
 * XREFs of rimObsPushInputMessage @ 0x1C01DCE48
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01DBC24 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimObsCopyMessage @ 0x1C01DBA90 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, _DWORD *a2)
{
  char v2; // r15
  _DWORD *v3; // r13
  __int64 v5; // r12
  char v6; // di
  int v7; // ecx
  unsigned int v8; // r15d
  bool v9; // r8
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  char *v11; // rsi
  int v13; // eax
  NSInstrumentation::CLeakTrackingAllocator *v14; // rsi
  unsigned __int64 v15; // rbx
  int v16; // eax
  __int64 Pool2; // rbx
  _QWORD *v18; // rax
  unsigned int v19; // r10d
  __int64 v20; // r11
  __int64 *v21; // rax
  char v22; // [rsp+20h] [rbp-E0h]
  __int16 v23; // [rsp+30h] [rbp-D0h]
  char v24; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[28]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v28; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v29; // [rsp+168h] [rbp+68h]
  unsigned __int64 v30; // [rsp+170h] [rbp+70h] BYREF
  __int64 v31; // [rsp+178h] [rbp+78h] BYREF

  v2 = 0;
  v3 = a2;
  if ( *a2 )
  {
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 215);
  }
  v5 = a1 + 144;
  if ( *(_DWORD *)(a1 + 160) == -1 )
  {
    v28 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 220);
  }
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      10,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      a1);
  if ( *(_DWORD *)(a1 + 160) >= *(_DWORD *)(a1 + 168) )
  {
    v7 = *(_DWORD *)(a1 + 164);
    if ( v7 != -1 )
      *(_DWORD *)(a1 + 164) = ++v7;
    v8 = -1073741756;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = v7;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
      v23 = 11;
      v22 = 3;
LABEL_68:
      LOBYTE(a2) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        (_DWORD)AttachedDevice,
        (_DWORD)a2,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v22,
        23,
        v23,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
        v24);
      return v8;
    }
    return v8;
  }
  v11 = 0LL;
  if ( *((_QWORD *)v3 + 3) > 0xFFFFFFBFuLL )
  {
    v8 = -1073741675;
    goto LABEL_24;
  }
  v13 = v3[6];
  v14 = gpLeakTrackingAllocator;
  v28 = 1902989138;
  v31 = 260LL;
  v15 = (unsigned int)(v13 + 64);
  v29 = v13 + 48;
  v16 = *(_DWORD *)gpLeakTrackingAllocator;
  v25 = v15;
  if ( !v16 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v15, 1902989138LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL);
    goto LABEL_54;
  }
  if ( v16 != 1 )
  {
    if ( v16 == 2 )
    {
      v30 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1902989138, &v30) )
      {
        v26[0] = &v31;
        v26[1] = &v28;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v14,
                  (__int64)v26,
                  &v25);
        goto LABEL_54;
      }
      if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
      {
        v15 += 16LL;
        v2 = 1;
        v25 = v15;
      }
      Pool2 = ExAllocatePool2(v20, v15, v19);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v14 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v2 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v14,
                 (const void *)Pool2,
                 v30,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_54;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v14,
                    Pool2,
                    v30,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v11 = (char *)Pool2;
          goto LABEL_58;
        }
        _InterlockedAdd64((volatile signed __int64 *)v14 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_70:
    v11 = 0LL;
    goto LABEL_71;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x716D4F52u)
    || v15 + 16 < v15 )
  {
    goto LABEL_70;
  }
  v18 = (_QWORD *)ExAllocatePool2(v31 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, v28);
  Pool2 = (__int64)v18;
  if ( !v18
    || (_InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL),
        *v18 = 1902989138LL,
        Pool2 = (__int64)(v18 + 2),
        v18 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v14 + 1),
      0x716D4F52uLL);
  }
LABEL_54:
  v11 = (char *)Pool2;
  if ( !Pool2 )
  {
LABEL_71:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        23,
        12,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
    v8 = -1073741670;
    goto LABEL_24;
  }
LABEL_58:
  v8 = rimObsCopyMessage(v3, 0, (void **)(Pool2 + 16), v29);
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_24:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        14,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
    }
    if ( v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
    return v8;
  }
  v21 = *(__int64 **)(a1 + 152);
  if ( *v21 != v5 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v5;
  *(_QWORD *)(Pool2 + 8) = v21;
  *v21 = Pool2;
  *(_QWORD *)(a1 + 152) = Pool2;
  LODWORD(a2) = *(_DWORD *)(a1 + 160) + 1;
  *(_DWORD *)(a1 + 160) = (_DWORD)a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    v24 = (char)a2;
    v23 = 13;
    v22 = 4;
    goto LABEL_68;
  }
  return v8;
}
