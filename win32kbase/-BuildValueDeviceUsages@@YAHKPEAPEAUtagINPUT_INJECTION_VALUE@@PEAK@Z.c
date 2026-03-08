/*
 * XREFs of ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C01C63A4
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01C3E48 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall BuildValueDeviceUsages(int a1, struct tagINPUT_INJECTION_VALUE **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  struct tagINPUT_INJECTION_VALUE **v4; // r14
  __int64 v6; // r12
  unsigned int v7; // r13d
  int v8; // r15d
  NSInstrumentation::CLeakTrackingAllocator *v9; // rsi
  int v10; // eax
  int v11; // edx
  __int64 Pool2; // rdi
  _QWORD *v13; // rax
  unsigned int v14; // r10d
  __int64 v15; // r11
  _WORD *v16; // rcx
  __int16 *v17; // rdx
  unsigned int v18; // r8d
  __int16 v19; // ax
  unsigned int v20; // edx
  _WORD *v21; // rdi
  __int64 v22; // rcx
  char v24; // [rsp+40h] [rbp-C0h]
  char *v25; // [rsp+50h] [rbp-B0h]
  char *v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[28]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v31; // [rsp+178h] [rbp+78h] BYREF
  unsigned int *v32; // [rsp+180h] [rbp+80h]
  __int64 v33; // [rsp+188h] [rbp+88h] BYREF

  v32 = a3;
  v3 = 0;
  v4 = a2;
  if ( *a2 )
  {
    v30 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 450);
  }
  v6 = 5LL;
  if ( a1 == 3 )
  {
    v25 = (char *)&unk_1C02A3902;
    v7 = 6;
    v26 = (char *)&unk_1C02A3904;
    v8 = 11;
    goto LABEL_7;
  }
  if ( a1 == 2 )
  {
    v7 = 5;
    v25 = (char *)&unk_1C02A39E2;
    v8 = 10;
    v26 = (char *)&unk_1C02A39E4;
LABEL_7:
    v9 = gpLeakTrackingAllocator;
    v33 = 260LL;
    v30 = 1785620818;
    v10 = *(_DWORD *)gpLeakTrackingAllocator;
    v11 = 144;
    v27 = 144LL;
    switch ( v10 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, 144LL, 1785620818LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
        goto LABEL_24;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u) )
        {
          v13 = (_QWORD *)ExAllocatePool2(v33 & 0xFFFFFFFFFFFFFFFDuLL, 160LL, v30);
          Pool2 = (__int64)v13;
          if ( !v13
            || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
                *v13 = 1785620818LL,
                Pool2 = (__int64)(v13 + 2),
                v13 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v9 + 1),
              0x6A6E6952uLL);
          }
LABEL_24:
          *v4 = (struct tagINPUT_INJECTION_VALUE *)Pool2;
          if ( Pool2 )
          {
LABEL_25:
            v16 = (_WORD *)Pool2;
            v17 = (__int16 *)&unk_1C02A3AC4;
            v18 = 5;
            do
            {
              *v16 = *(v17 - 1);
              v19 = *v17;
              v17 += 16;
              v16[1] = v19;
              v16 += 6;
              --v6;
            }
            while ( v6 );
            v20 = 0;
            v21 = (_WORD *)(Pool2 + 60);
            do
            {
              if ( v20 >= v7 )
                break;
              ++v18;
              v22 = 32LL * v20++;
              *v21 = *(_WORD *)&v25[v22];
              v21[1] = *(_WORD *)&v26[v22];
              v21 += 6;
            }
            while ( v18 < 0xC );
            if ( v18 == v8 )
            {
              v3 = 1;
              *v32 = 12;
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v20) = 0;
              }
              if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v24 = v18;
                LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_dd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v20,
                  v18,
                  (_DWORD)gRimLog,
                  2,
                  1,
                  12,
                  (__int64)&WPP_6d824989394b3ce9cab05ad9d55f12ee_Traceguids,
                  v24,
                  v8);
              }
            }
            return v3;
          }
LABEL_41:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)a3,
              (_DWORD)gRimLog,
              2,
              1,
              13,
              (__int64)&WPP_6d824989394b3ce9cab05ad9d55f12ee_Traceguids,
              23);
          }
          return v3;
        }
        break;
      case 2:
        v31 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, &v31) )
        {
          v28[0] = &v33;
          v28[1] = &v30;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v9,
                    (__int64)v28,
                    &v27);
          goto LABEL_24;
        }
        Pool2 = ExAllocatePool2(v15, 160LL, v14);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v9,
                   (const void *)Pool2,
                   v31,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_24;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v9,
                      Pool2,
                      v31,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            *v4 = (struct tagINPUT_INJECTION_VALUE *)Pool2;
            goto LABEL_25;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    *v4 = 0LL;
    goto LABEL_41;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      2,
      1,
      11,
      (__int64)&WPP_6d824989394b3ce9cab05ad9d55f12ee_Traceguids,
      a1);
  }
  return 0LL;
}
