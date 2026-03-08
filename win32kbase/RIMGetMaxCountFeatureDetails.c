/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C01B69A4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     rimHidP_GetUsageValue @ 0x1C00EF9AA (rimHidP_GetUsageValue.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01B24DC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWrit.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01B25B8 (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMGetFeatureReport @ 0x1C01B6834 (RIMGetFeatureReport.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  int SpecificValueCaps; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rbx
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 Pool2; // rdi
  _QWORD *v14; // rax
  __int64 v15; // r10
  char v16; // si
  int v17; // edx
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // esi
  char v21; // bl
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  NTSTATUS v25; // ebx
  int v26; // r8d
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  struct _DEVICE_OBJECT *v30; // rax
  __int64 v31; // rsi
  unsigned int *v32; // rsi
  int v33; // edx
  int v34; // r8d
  unsigned int v35; // ecx
  __int64 v36; // r14
  __int16 v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-ACh]
  unsigned int v40; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  struct RIMDEV *v44; // [rsp+78h] [rbp-88h] BYREF
  struct _DEVICE_OBJECT *v45; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *QuadPart; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+98h] [rbp-68h]
  _QWORD v49[2]; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h]
  PVOID BackTrace[20]; // [rsp+D0h] [rbp-30h] BYREF
  char v54[80]; // [rsp+170h] [rbp+70h] BYREF

  v52 = a2;
  v43 = a3;
  v44 = a1;
  v48 = a4;
  v45 = a6;
  memset(v54, 0, 0x48uLL);
  v38[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2LL, 13LL, 0LL, 85LL, (__int64)v54, (__int64)v38, a4);
  if ( SpecificValueCaps < 0 )
    return (unsigned int)SpecificValueCaps;
  v10 = gpLeakTrackingAllocator;
  v11 = (unsigned __int16)a5[4];
  v40 = 1768321874;
  v47 = 68LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  v41 = v11;
  if ( !v12 )
  {
    Pool2 = ExAllocatePool2(68LL, (unsigned int)v11, 1768321874LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL);
    goto LABEL_25;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      v42 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1768321874, &v42) )
      {
        v49[0] = &v47;
        v49[1] = &v40;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v10,
                  (__int64)v49,
                  &v41);
        goto LABEL_25;
      }
      v16 = 0;
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v11 += 16LL;
        v16 = 1;
        v41 = v11;
      }
      Pool2 = ExAllocatePool2(v15, v11, 1768321874LL);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v10 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v10,
                 (const void *)Pool2,
                 v42,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_25;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v10,
                    Pool2,
                    v42,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_25;
        }
        _InterlockedAdd64((volatile signed __int64 *)v10 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_24;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69667352u)
    || v11 + 16 < v11 )
  {
LABEL_24:
    Pool2 = 0LL;
    goto LABEL_25;
  }
  v14 = (_QWORD *)ExAllocatePool2(v47 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16, v40);
  Pool2 = (__int64)v14;
  if ( !v14
    || (_InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL),
        *v14 = 1768321874LL,
        Pool2 = (__int64)(v14 + 2),
        v14 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v10 + 1),
      0x69667352uLL);
  }
LABEL_25:
  memset((void *)Pool2, 0, (unsigned __int16)a5[4]);
  if ( Pool2 )
  {
    v19 = 1;
    if ( *(_DWORD *)(a3 + 24) == 7 )
      v19 = 10;
    v39 = v19;
    QuadPart = (const WCHAR *)KeQueryPerformanceCounter(0LL).QuadPart;
    v20 = 0;
    do
    {
      v21 = (char)v44;
      InputTraceLogging::RIM::GetMaxCount(v44);
      LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          (_DWORD)gRimLog,
          4,
          1,
          31,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
          v21);
      }
      v25 = RIMGetFeatureReport((PLARGE_INTEGER)Pool2, a5[4], v54[2], v45, a7);
      if ( !v25 )
        break;
      LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v24,
          v26,
          (_DWORD)gRimLog,
          3,
          1,
          32,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
          v25);
      }
      if ( v20 < v39 - 1 )
      {
        Interval.QuadPart = -1000000LL;
        KeDelayExecutionThread(1, 0, &Interval);
      }
      ++v20;
    }
    while ( v20 < v39 );
    KeQueryPerformanceCounter(0LL);
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
    {
      v29 = v27 - (_QWORD)QuadPart;
      v30 = (struct _DEVICE_OBJECT *)(v20 + 1);
      v31 = v43;
      v45 = v30;
      LODWORD(v42) = v25;
      QuadPart = *(const WCHAR **)(v43 + 376);
      v51 = *(int *)(v43 + 952);
      v49[0] = *(int *)(v43 + 24);
      v44 = (struct RIMDEV *)(unsigned int)(1000 * v29 / gliQpcFreq.QuadPart);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v44,
        byte_1C0296C7A,
        v29,
        v28,
        (__int64)v49,
        (__int64)&v51,
        &QuadPart,
        (__int64)&v44,
        (__int64)&v45,
        (__int64)&v42);
    }
    else
    {
      v31 = v43;
    }
    if ( v25 )
    {
      SpecificValueCaps = -1073741668;
LABEL_83:
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      return (unsigned int)SpecificValueCaps;
    }
    v32 = (unsigned int *)(v31 + 768);
    SpecificValueCaps = rimHidP_GetUsageValue(2LL, 13LL, 0LL, 85LL, (__int64)v32, v48, Pool2, (unsigned __int16)a5[4]);
    if ( SpecificValueCaps < 0 || (v35 = *v32) == 0 )
    {
      LOBYTE(v33) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          v34,
          (_DWORD)gRimLog,
          3,
          1,
          33,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
          SpecificValueCaps);
      }
      goto LABEL_73;
    }
    if ( v35 > 0x100 )
    {
LABEL_73:
      SpecificValueCaps = -1073741668;
      goto LABEL_82;
    }
    if ( *a5 == 5 )
    {
      *v32 = v35 + 1;
    }
    else if ( *(_DWORD *)(v52 + 720) + v35 > 0xA00 )
    {
      goto LABEL_73;
    }
    if ( *a5 == 5 )
    {
      v36 = v43;
      LODWORD(v41) = 0;
      *(_DWORD *)(v43 + 952) = 3;
      SpecificValueCaps = rimHidP_GetUsageValue(
                            2LL,
                            13LL,
                            0LL,
                            89LL,
                            (__int64)&v41,
                            v48,
                            Pool2,
                            (unsigned __int16)a5[4]);
      if ( SpecificValueCaps >= 0 )
        *(_DWORD *)(v36 + 952) = ((v41 & 1) != 0) + 1;
    }
  }
  else
  {
    SpecificValueCaps = -1073741668;
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        (_DWORD)gRimLog,
        3,
        1,
        34,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
    }
  }
LABEL_82:
  if ( Pool2 )
    goto LABEL_83;
  return (unsigned int)SpecificValueCaps;
}
