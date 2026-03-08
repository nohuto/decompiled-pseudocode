/*
 * XREFs of RIMVirtCreateDev @ 0x1C019DFF8
 * Callers:
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01D032C (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     RIMGetDeviceParent @ 0x1C002FF2C (RIMGetDeviceParent.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1C00305E4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0034C6C (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x1C00354BC (rimDereferenceDev.c)
 *     rimCreateDev @ 0x1C00371D0 (rimCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C01ADF44 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C01AF440 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtCreateHidDesc @ 0x1C01B10CC (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C0221134 (FindRimDevByName.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        char *Object,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  char v6; // r14
  char v8; // r12
  int v10; // edx
  struct _UNICODE_STRING *Dev; // rbx
  int v12; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 Pool2; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // r15
  unsigned int v21; // ecx
  int v22; // r12d
  int v23; // ecx
  int v24; // ecx
  __int64 RimDevByName; // rax
  int v26; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v27; // rsi
  int v28; // eax
  int v29; // edx
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // r10
  int v33; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v34; // rsi
  int v35; // eax
  int v36; // edx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *v38; // rax
  __int64 v39; // r10
  __int64 HidDesc; // rax
  int v41; // edx
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  PVOID v46; // rsi
  char *v47; // rdi
  __int64 v48; // rax
  struct _UNICODE_STRING **v49; // rcx
  _DWORD *v50; // rdi
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Objecta[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v58; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v59; // [rsp+78h] [rbp-88h]
  unsigned __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-48h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v69[20]; // [rsp+160h] [rbp+60h] BYREF
  PVOID v70[26]; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v71; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v72; // [rsp+2F8h] [rbp+1F8h]

  v72 = a4;
  v6 = 0;
  v8 = a2;
  if ( a2 > 2 )
  {
    v71 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1677);
  }
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( !*(_QWORD *)(a3 + 8) )
    goto LABEL_37;
  v13 = gpLeakTrackingAllocator;
  v14 = *(unsigned __int16 *)(a3 + 2);
  v71 = 1886417746;
  v63 = 260LL;
  v15 = *(_DWORD *)gpLeakTrackingAllocator;
  Objecta[0] = (PVOID)v14;
  if ( !v15 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v14, 1886417746LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 14);
    goto LABEL_28;
  }
  if ( v15 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
      && v14 + 16 >= v14 )
    {
      v17 = (_QWORD *)ExAllocatePool2(v63 & 0xFFFFFFFFFFFFFFFDuLL, v14 + 16, v71);
      Pool2 = (__int64)v17;
      if ( !v17
        || (_InterlockedIncrement64((volatile signed __int64 *)v13 + 14),
            *v17 = 1886417746LL,
            Pool2 = (__int64)(v17 + 2),
            v17 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v13 + 1),
          0x70707352uLL);
      }
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( v15 != 2 )
    goto LABEL_27;
  v60 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v60) )
  {
    if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
    {
      v14 += 16LL;
      v6 = 1;
      Objecta[0] = (PVOID)v14;
    }
    Pool2 = ExAllocatePool2(v19, v14, v18);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v6 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v13,
               (const void *)Pool2,
               v60,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_28;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v13,
                  Pool2,
                  v60,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_28;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_27:
    Pool2 = 0LL;
    goto LABEL_28;
  }
  v58 = &v63;
  v59 = &v71;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            (__int64)v13,
            (__int64)&v58,
            Objecta);
LABEL_28:
  Dev[13].Buffer = (PWSTR)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        (_DWORD)gRimLog,
        2,
        1,
        29,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
        *(_QWORD *)(a3 + 8));
    }
LABEL_137:
    *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
    RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev);
    rimDereferenceDev((__int64)Dev, v52, v53, v54);
    return 3221225495LL;
  }
  Dev[13].MaximumLength = *(_WORD *)(a3 + 2);
  RtlCopyUnicodeString(Dev + 13, (PCUNICODE_STRING)a3);
LABEL_37:
  v20 = a5;
  v21 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  v22 = v72;
  LODWORD(Dev[11].Buffer) = v21;
  if ( !v22 )
  {
    v34 = gpLeakTrackingAllocator;
    v65 = 68LL;
    v56 = 1986358098;
    v35 = *(_DWORD *)gpLeakTrackingAllocator;
    v36 = 24;
    v67 = 24LL;
    switch ( v35 )
    {
      case 0:
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           68LL,
                                                                                           24LL,
                                                                                           1986358098LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v34 + 14);
        goto LABEL_85;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656B52u) )
        {
          v38 = (_QWORD *)ExAllocatePool2(v65 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v56);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v38;
          if ( !v38
            || (_InterlockedIncrement64((volatile signed __int64 *)v34 + 14),
                *v38 = 1986358098LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v38 + 2),
                v38 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v34 + 1),
              0x76656B52uLL);
          }
          goto LABEL_85;
        }
        break;
      case 2:
        v62 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1986358098, &v62) )
        {
          v58 = &v65;
          v59 = &v56;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v34,
                                                                                             (__int64)&v58,
                                                                                             &v67);
LABEL_85:
          *(_QWORD *)&Dev[22].Length = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v36) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v36) = 0;
            }
            if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v36,
                v12,
                (_DWORD)gRimLog,
                2,
                1,
                31,
                (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids);
            }
            goto LABEL_137;
          }
          KeInitializeEvent(
            (PRKEVENT)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            SynchronizationEvent,
            0);
          goto LABEL_87;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v39,
                                                                                           40LL,
                                                                                           1986358098LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v34 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(v70);
          if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 >= 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                   (__int64)v34,
                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   v62,
                   (struct NSInstrumentation::CBackTrace *)v70) )
            {
              goto LABEL_85;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                      (__int64)v34,
                      (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                      v62,
                      (struct NSInstrumentation::CBackTrace *)v70) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_85;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v34 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        }
        break;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_85;
  }
  v23 = v21 | 0x2000;
  LODWORD(Dev[11].Buffer) = v23;
  v24 = ((unsigned __int16)v23 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v20 + 24) << 14)) & 0x4000 ^ v23;
  LODWORD(Dev[11].Buffer) = v24;
  LODWORD(Dev[11].Buffer) = ((unsigned __int16)v24 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v20 + 28) << 15)) & 0x8000 ^ v24 | 0x20;
  LODWORD(Dev[24].Buffer) = *(_DWORD *)(v20 + 1328);
  HIDWORD(Dev[24].Buffer) = *(_DWORD *)(v20 + 1332);
  *(_DWORD *)&Dev[25].Length = *(_DWORD *)(v20 + 1336);
  HIDWORD(Dev[82].Buffer) = *(_DWORD *)(v20 + 1340);
  RimDevByName = FindRimDevByName((PCUNICODE_STRING)(v20 + 1344));
  v27 = gpLeakTrackingAllocator;
  *(_QWORD *)&Dev[83].Length = RimDevByName;
  v55 = 1986358098;
  v64 = 68LL;
  v28 = *(_DWORD *)v27;
  v29 = 24;
  v66 = 24LL;
  if ( !v28 )
  {
    v30 = ExAllocatePool2(68LL, 24LL, 1986358098LL);
    if ( v30 )
      _InterlockedIncrement64((volatile signed __int64 *)v27 + 14);
    goto LABEL_57;
  }
  if ( v28 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v27, 0x76656B52u) )
    {
      v31 = (_QWORD *)ExAllocatePool2(v64 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v55);
      v30 = (__int64)v31;
      if ( !v31
        || (_InterlockedIncrement64((volatile signed __int64 *)v27 + 14),
            *v31 = 1986358098LL,
            v30 = (__int64)(v31 + 2),
            v31 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v27 + 1),
          0x76656B52uLL);
      }
      goto LABEL_57;
    }
    goto LABEL_56;
  }
  if ( v28 != 2 )
    goto LABEL_56;
  v61 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v27, 1986358098, &v61) )
  {
    v30 = ExAllocatePool2(v32, 40LL, 1986358098LL);
    if ( v30 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v27 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v69);
      if ( (unsigned __int64)(v30 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v27,
               v30,
               v61,
               (struct NSInstrumentation::CBackTrace *)v69) )
        {
          goto LABEL_57;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v27,
                  (const void *)v30,
                  v61,
                  (struct NSInstrumentation::CBackTrace *)v69) )
      {
        v30 += 16LL;
        goto LABEL_57;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v27 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v30);
    }
LABEL_56:
    v30 = 0LL;
    goto LABEL_57;
  }
  v58 = &v64;
  v59 = &v55;
  v30 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
          (__int64)v27,
          (__int64)&v58,
          &v66);
LABEL_57:
  Dev[23].Buffer = (PWSTR)v30;
  if ( !v30 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v29) = 0;
    }
    if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v29,
        v26,
        (_DWORD)gRimLog,
        2,
        1,
        30,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids);
    }
    goto LABEL_137;
  }
  KeInitializeEvent((PRKEVENT)v30, SynchronizationEvent, 0);
  LODWORD(Dev[11].Buffer) |= 0x80000u;
LABEL_87:
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    HidDesc = RIMVirtCreateHidDesc(Object, Dev, v20);
    Dev[28].Buffer = (PWSTR)HidDesc;
    if ( !HidDesc )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v41) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v41) = 0;
      }
      if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v41,
          v33,
          (_DWORD)gRimLog,
          2,
          1,
          32,
          (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids);
      }
      goto LABEL_137;
    }
  }
  if ( !LOBYTE(Dev[3].Length) )
  {
    LOWORD(Dev[28].Buffer) = *(_WORD *)(v20 + 80);
    WORD1(Dev[28].Buffer) = *(_WORD *)(v20 + 84);
    WORD2(Dev[28].Buffer) = *(_WORD *)(v20 + 88);
    *(_DWORD *)&Dev[29].Length = *(_DWORD *)(v20 + 92);
    Dev[55].Length = *(_WORD *)(v20 + 96);
    Dev[55].MaximumLength = *(_WORD *)(v20 + 100);
    *(&Dev[55].MaximumLength + 1) = *(_WORD *)(v20 + 104);
    LODWORD(Dev[56].Buffer) ^= (LODWORD(Dev[56].Buffer) ^ *(_DWORD *)(v20 + 108)) & 1;
    if ( v22 )
    {
      Dev[55].Length = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v33) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v42) = 0;
        }
        if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v42,
            v43,
            (_DWORD)gRimLog,
            3,
            1,
            33,
            (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids);
        }
      }
      Objecta[0] = 0LL;
      if ( (unsigned int)RIMFindSiblingPointerDeviceForMouse(Dev, Objecta) )
      {
        v46 = Objecta[0];
        v47 = (char *)Objecta[0] + 72;
        if ( !Objecta[0] )
          v47 = 0LL;
        if ( v47[48] != 2 )
        {
          v71 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1809);
        }
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v47 + 57) + 40LL));
        ObfDereferenceObject(v46);
      }
      else
      {
        RIMLoadDeviceLegacyInfo((struct DEVICEINFO *)Dev, v44, v45);
      }
    }
  }
  if ( LOBYTE(Dev[3].Length) == 1 )
  {
    LOBYTE(Dev[28].Buffer) = *(_BYTE *)(v20 + 80);
    BYTE1(Dev[28].Buffer) = *(_BYTE *)(v20 + 84);
    WORD1(Dev[28].Buffer) = *(_WORD *)(v20 + 88);
    WORD2(Dev[28].Buffer) = *(_WORD *)(v20 + 92);
    HIWORD(Dev[28].Buffer) = *(_WORD *)(v20 + 96);
    Dev[29].Length = *(_WORD *)(v20 + 100);
    *(_DWORD *)(&Dev[29].MaximumLength + 1) = *(_DWORD *)(v20 + 104);
    LOWORD(Dev[29].Buffer) = *(_WORD *)(v20 + 108);
    WORD1(Dev[29].Buffer) = *(_WORD *)(v20 + 112);
    WORD2(Dev[29].Buffer) = *(_WORD *)(v20 + 116);
    HIWORD(Dev[29].Buffer) = *(_WORD *)(v20 + 120);
    Dev[30].Length = *(_WORD *)(v20 + 124);
    Dev[30].MaximumLength = *(_WORD *)(v20 + 128);
    *(_DWORD *)(&Dev[30].MaximumLength + 1) = *(_DWORD *)(v20 + 132);
    LODWORD(Dev[30].Buffer) = *(_DWORD *)(v20 + 136);
    HIDWORD(Dev[30].Buffer) ^= (HIDWORD(Dev[30].Buffer) ^ *(_DWORD *)(v20 + 140)) & 1;
  }
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_137;
  *(_QWORD *)&Dev[21].Length = Object;
  v48 = *((_QWORD *)Object + 53);
  if ( v48 )
  {
    do
    {
      v49 = (struct _UNICODE_STRING **)(v48 + 40);
      v48 = *(_QWORD *)(v48 + 40);
    }
    while ( v48 );
    *v49 = Dev;
  }
  else
  {
    *((_QWORD *)Object + 53) = Dev;
  }
  v50 = Object + 1056;
  if ( !*((_QWORD *)Object + 104) || *v50 || !v22 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 1u);
  if ( !*((_QWORD *)Object + 104) && !*v50 && v22 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2u);
  *a6 = Dev;
  return 0LL;
}
