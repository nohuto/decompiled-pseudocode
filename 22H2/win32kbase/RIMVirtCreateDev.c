/*
 * XREFs of RIMVirtCreateDev @ 0x1C0171148
 * Callers:
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A2238 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1C006D4E4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0071424 (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x1C0072404 (rimDereferenceDev.c)
 *     rimCreateDev @ 0x1C0072CC8 (rimCreateDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C0181034 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0182530 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtCreateHidDesc @ 0x1C0184200 (RIMVirtCreateHidDesc.c)
 *     FindRimDevByName @ 0x1C01EEA14 (FindRimDevByName.c)
 */

__int64 __fastcall RIMVirtCreateDev(
        char *Object,
        unsigned int a2,
        const UNICODE_STRING *a3,
        int a4,
        __int64 a5,
        struct _UNICODE_STRING **a6)
{
  char v6; // r14
  char v8; // r12
  struct _UNICODE_STRING *Dev; // rbx
  int v11; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v12; // rsi
  unsigned __int64 MaximumLength; // rdi
  int v14; // eax
  __int64 Pool2; // rdi
  _QWORD *v16; // rax
  unsigned int v17; // r10d
  __int64 v18; // r11
  char v19; // dl
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
  unsigned int v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Objecta[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v57; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v58; // [rsp+78h] [rbp-88h]
  unsigned __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v61; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v68[20]; // [rsp+160h] [rbp+60h] BYREF
  PVOID v69[26]; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v70; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v71; // [rsp+2F8h] [rbp+1F8h]

  v71 = a4;
  v6 = 0;
  v8 = a2;
  if ( a2 > 2 )
  {
    v70 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1608);
  }
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, (int)a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( !a3->Buffer )
    goto LABEL_37;
  v12 = gpLeakTrackingAllocator;
  MaximumLength = a3->MaximumLength;
  v70 = 1886417746;
  v62 = 260LL;
  v14 = *(_DWORD *)gpLeakTrackingAllocator;
  Objecta[0] = (PVOID)MaximumLength;
  if ( !v14 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)MaximumLength, 1886417746LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 14);
    goto LABEL_28;
  }
  if ( v14 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
      && MaximumLength + 16 >= MaximumLength )
    {
      v16 = (_QWORD *)ExAllocatePool2(v62 & 0xFFFFFFFFFFFFFFFDuLL, MaximumLength + 16, v70);
      Pool2 = (__int64)v16;
      if ( !v16
        || (_InterlockedIncrement64((volatile signed __int64 *)v12 + 14),
            *v16 = 1886417746LL,
            Pool2 = (__int64)(v16 + 2),
            v16 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v12 + 1),
          0x70707352uLL);
      }
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( v14 != 2 )
    goto LABEL_27;
  v59 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v59) )
  {
    if ( MaximumLength < 0x1000 || (MaximumLength & 0xFFF) != 0 )
    {
      MaximumLength += 16LL;
      v6 = 1;
      Objecta[0] = (PVOID)MaximumLength;
    }
    Pool2 = ExAllocatePool2(v18, MaximumLength, v17);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v6 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v12,
               (const void *)Pool2,
               v59,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_28;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v12,
                  Pool2,
                  v59,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_28;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_27:
    Pool2 = 0LL;
    goto LABEL_28;
  }
  v57 = &v62;
  v58 = &v70;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            (__int64)v12,
            (__int64)&v57,
            Objecta);
LABEL_28:
  Dev[13].Buffer = (PWSTR)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v19 = 0;
    }
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_S(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v19,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        2u,
        1u,
        0x1Du,
        (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
        a3->Buffer);
LABEL_137:
    *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
    RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev);
    rimDereferenceDev((__int64)Dev, v52, v53);
    return 3221225495LL;
  }
  Dev[13].MaximumLength = a3->MaximumLength;
  RtlCopyUnicodeString(Dev + 13, a3);
LABEL_37:
  v20 = a5;
  v21 = (__int64)Dev[11].Buffer & 0xFFFFFF9F | 0x40;
  LOBYTE(Dev[3].Length) = v8;
  v22 = v71;
  LODWORD(Dev[11].Buffer) = v21;
  if ( !v22 )
  {
    v34 = gpLeakTrackingAllocator;
    v64 = 68LL;
    v55 = 1986358098;
    v35 = *(_DWORD *)gpLeakTrackingAllocator;
    v36 = 24;
    v66 = 24LL;
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
          v38 = (_QWORD *)ExAllocatePool2(v64 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v55);
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
        v61 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1986358098, &v61) )
        {
          v57 = &v64;
          v58 = &v55;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v34,
                                                                                             (__int64)&v57,
                                                                                             &v66);
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
              LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v36,
                v11,
                (_DWORD)gRimLog,
                2,
                1,
                31,
                (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids);
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
          NSInstrumentation::CBackTrace::CBackTrace(v69);
          if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 >= 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                   (__int64)v34,
                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   v61,
                   (struct NSInstrumentation::CBackTrace *)v69) )
            {
              goto LABEL_85;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                      (__int64)v34,
                      (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                      v61,
                      (struct NSInstrumentation::CBackTrace *)v69) )
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
  v54 = 1986358098;
  v63 = 68LL;
  v28 = *(_DWORD *)v27;
  v29 = 24;
  v65 = 24LL;
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
      v31 = (_QWORD *)ExAllocatePool2(v63 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v54);
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
  v60 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v27, 1986358098, &v60) )
  {
    v30 = ExAllocatePool2(v32, 40LL, 1986358098LL);
    if ( v30 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v27 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v68);
      if ( (unsigned __int64)(v30 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v27,
               v30,
               v60,
               (struct NSInstrumentation::CBackTrace *)v68) )
        {
          goto LABEL_57;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v27,
                  (const void *)v30,
                  v60,
                  (struct NSInstrumentation::CBackTrace *)v68) )
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
  v57 = &v63;
  v58 = &v54;
  v30 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
          (__int64)v27,
          (__int64)&v57,
          &v65);
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
        (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids);
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
          (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids);
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
            (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids);
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
          v70 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1740);
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
