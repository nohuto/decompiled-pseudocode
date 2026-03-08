/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C01B93B4
 * Callers:
 *     RIMIsParallelDevice @ 0x1C01B8C44 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C01BA1A0 (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C01B2070 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        unsigned __int16 a1,
        __int64 a2,
        _WORD *a3,
        char **a4,
        _WORD *a5,
        char **a6)
{
  char **v6; // r14
  char v7; // si
  unsigned int SpecificValueCaps; // eax
  unsigned int v13; // ebx
  int v14; // r8d
  __int64 v15; // rax
  NSInstrumentation::CLeakTrackingAllocator *v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 Pool2; // rbx
  _QWORD *v21; // rax
  unsigned int v22; // r10d
  __int64 v23; // r11
  int v24; // edx
  int v25; // r8d
  PDEVICE_OBJECT v26; // rcx
  __int16 v27; // r9
  _WORD *v28; // r15
  unsigned int SpecificButtonCaps; // eax
  __int64 v30; // rax
  NSInstrumentation::CLeakTrackingAllocator *v31; // rdi
  __int64 v32; // rbx
  int v33; // eax
  unsigned __int64 v34; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v36; // rax
  unsigned int v37; // r10d
  __int64 v38; // r11
  unsigned __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v47; // [rsp+78h] [rbp-88h]
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v49[26]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v51; // [rsp+218h] [rbp+118h] BYREF

  v6 = a6;
  v7 = 0;
  if ( *a4 )
  {
    LODWORD(a6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1626);
  }
  if ( *v6 )
  {
    LODWORD(a6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1627);
  }
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 0LL, a1, 0LL, 0LL, (__int64)a3, a2);
  v13 = SpecificValueCaps;
  if ( SpecificValueCaps == 1114112 )
  {
    v14 = 1639;
LABEL_7:
    LODWORD(a6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v14);
    return v13;
  }
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_86;
  if ( !*a3 )
  {
    LODWORD(a6) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1642);
  }
  v15 = (unsigned __int16)*a3;
  v16 = gpLeakTrackingAllocator;
  LODWORD(a6) = 1668707154;
  v42 = 260LL;
  v17 = 9 * v15;
  v18 = *(_DWORD *)gpLeakTrackingAllocator;
  v19 = 8 * v17;
  v43 = v19;
  if ( !v18 )
  {
    Pool2 = ExAllocatePool2(260LL, v19, 1668707154LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v16 + 14);
    goto LABEL_31;
  }
  if ( v18 != 1 )
  {
    if ( v18 == 2 )
    {
      v40 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668707154, &v40) )
      {
        v46 = &v42;
        v47 = (__int64 *)&a6;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v16,
                  (__int64)&v46,
                  &v43);
        goto LABEL_31;
      }
      if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
      {
        v19 += 16LL;
        v7 = 1;
        v43 = v19;
      }
      Pool2 = ExAllocatePool2(v23, v19, v22);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v7 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          v7 = 0;
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v16,
                 (const void *)Pool2,
                 v40,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_31;
          }
        }
        else
        {
          v7 = 0;
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v16,
                 Pool2,
                 v40,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            *a4 = (char *)Pool2;
            goto LABEL_35;
          }
        }
        _InterlockedIncrement64((volatile signed __int64 *)v16 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_84:
    *a4 = 0LL;
    goto LABEL_85;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63767352u)
    || v19 + 16 < v19 )
  {
    goto LABEL_84;
  }
  v21 = (_QWORD *)ExAllocatePool2(v42 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, (unsigned int)a6);
  Pool2 = (__int64)v21;
  if ( !v21
    || (_InterlockedIncrement64((volatile signed __int64 *)v16 + 14),
        *v21 = 1668707154LL,
        Pool2 = (__int64)(v21 + 2),
        v21 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v16 + 1),
      0x63767352uLL);
  }
LABEL_31:
  *a4 = (char *)Pool2;
  if ( !Pool2 )
    goto LABEL_85;
LABEL_35:
  v13 = rimHidP_GetSpecificValueCaps(0LL, 0LL, a1, 0LL, Pool2, (__int64)a3, a2);
  if ( v13 != 1114112 )
  {
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v24) = 0;
    }
    LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_86;
    v27 = 27;
    goto LABEL_43;
  }
  v28 = a5;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0LL, 0LL, a1, 0LL, 0LL, (__int64)a5, a2);
  v13 = SpecificButtonCaps;
  if ( SpecificButtonCaps == 1114112 )
  {
    v14 = 1669;
    goto LABEL_7;
  }
  if ( SpecificButtonCaps == -1072627705 )
  {
    if ( !*v28 )
    {
      v51 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1672);
    }
    v30 = (unsigned __int16)*v28;
    v31 = gpLeakTrackingAllocator;
    v51 = 1668707154;
    v44 = 260LL;
    v32 = 9 * v30;
    v33 = *(_DWORD *)gpLeakTrackingAllocator;
    v34 = 8 * v32;
    v45 = v34;
    switch ( v33 )
    {
      case 0:
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           v34,
                                                                                           1668707154LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v31 + 14);
        goto LABEL_69;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63767352u)
          && v34 + 16 >= v34 )
        {
          v36 = (_QWORD *)ExAllocatePool2(v44 & 0xFFFFFFFFFFFFFFFDuLL, v34 + 16, v51);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v36;
          if ( !v36
            || (_InterlockedIncrement64((volatile signed __int64 *)v31 + 14),
                *v36 = 1668707154LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v36 + 2),
                v36 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v31 + 1),
              0x63767352uLL);
          }
LABEL_69:
          *v6 = (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            goto LABEL_73;
LABEL_85:
          v13 = -1073741801;
          goto LABEL_86;
        }
        break;
      case 2:
        v41 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668707154, &v41) )
        {
          v46 = &v44;
          v47 = (__int64 *)&v51;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v31,
                                                                                             (__int64)&v46,
                                                                                             &v45);
          goto LABEL_69;
        }
        if ( v34 < 0x1000 || (v34 & 0xFFF) != 0 )
        {
          v34 += 16LL;
          v7 = 1;
          v45 = v34;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v38, v34, v37);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v31 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(v49);
          if ( v7
            && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v31,
                   (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   v41,
                   (struct NSInstrumentation::CBackTrace *)v49) )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
              goto LABEL_69;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v31,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                      v41,
                      (struct NSInstrumentation::CBackTrace *)v49) )
          {
            *v6 = (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
LABEL_73:
            v13 = rimHidP_GetSpecificButtonCaps(
                    0LL,
                    0LL,
                    a1,
                    0LL,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    (__int64)v28,
                    a2);
            if ( v13 == 1114112 )
              return v13;
            v26 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v24) = 0;
            }
            LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !(_BYTE)v24 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_86;
            v27 = 28;
LABEL_43:
            WPP_RECORDER_AND_TRACE_SF_(
              v26->AttachedDevice,
              v24,
              v25,
              (_DWORD)gRimLog,
              3,
              1,
              v27,
              (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
            goto LABEL_86;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v31 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        }
        break;
    }
    *v6 = 0LL;
    goto LABEL_85;
  }
LABEL_86:
  if ( *a4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *a4);
    *a4 = 0LL;
  }
  if ( *v6 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v6);
    *v6 = 0LL;
  }
  return v13;
}
