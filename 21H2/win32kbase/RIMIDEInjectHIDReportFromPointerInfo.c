/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C019D494
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C015E990 (NtUserInjectPointerInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIDEFillContactUsageValues @ 0x1C019C854 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C019CB10 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C019D008 (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C019F67C (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // edi
  char *v6; // r13
  int v7; // edx
  int v8; // r8d
  unsigned int v9; // r13d
  unsigned __int64 v10; // rcx
  unsigned int v11; // r8d
  PVOID v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  PDEVICE_OBJECT v16; // rcx
  __int64 Pool2; // rsi
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // r13
  unsigned int v34; // r9d
  struct tagINPUT_INJECTION_VALUE *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  int v47; // eax
  __int64 v48; // rcx
  PDEVICE_OBJECT v49; // rcx
  __int16 v50; // r9
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  int v57; // edx
  int v58; // r8d
  __int64 v59; // rcx
  unsigned int v60; // eax
  int v61; // edx
  int v62; // r8d
  char *v63; // [rsp+58h] [rbp-B0h]
  int v64; // [rsp+60h] [rbp-A8h]
  unsigned int v65; // [rsp+64h] [rbp-A4h]
  unsigned int v66; // [rsp+68h] [rbp-A0h]
  struct tagINPUT_INJECTION_VALUE *v67[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v68; // [rsp+88h] [rbp-80h]
  __int128 v69; // [rsp+98h] [rbp-70h]
  __int128 v70; // [rsp+A8h] [rbp-60h]
  __int128 v71; // [rsp+B8h] [rbp-50h]
  __int128 v72; // [rsp+C8h] [rbp-40h]
  __int128 v73; // [rsp+D8h] [rbp-30h]
  __int128 v74; // [rsp+E8h] [rbp-20h]
  __int128 v75; // [rsp+F8h] [rbp-10h]
  __int64 v76; // [rsp+108h] [rbp+0h]
  PVOID BackTrace[28]; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v80; // [rsp+218h] [rbp+110h] BYREF
  unsigned int v81; // [rsp+220h] [rbp+118h] BYREF

  v80 = a3;
  v3 = (unsigned int)a3;
  v67[0] = 0LL;
  v81 = 0;
  v5 = 0;
  v64 = 0;
  v6 = 0LL;
  if ( !(_DWORD)a3 || (unsigned int)a3 > 0x100 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, v67, &v81) )
  {
    v9 = v81;
    v10 = v3 * v81;
    v66 = v3 * v81;
    if ( v10 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)a2 == 2 )
      {
        v11 = v81 - 2;
      }
      else
      {
        if ( *(_DWORD *)a2 != 3 )
        {
          v65 = v81;
          goto LABEL_12;
        }
        v11 = v81 - 1;
      }
      v65 = v11;
LABEL_12:
      v12 = gpLeakTrackingAllocator;
      v13 = 12LL * (unsigned int)v10;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A6E6952) == 0x6A6E6952 )
      {
        v14 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1785620818 )
          {
            if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_16;
          }
          LOBYTE(v81) = 0;
          if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
          {
            LOBYTE(v81) = 1;
            v13 += 16LL;
          }
          Pool2 = ExAllocatePool2(260LL, v13);
          if ( !Pool2 )
            goto LABEL_52;
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (_BYTE)v81 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v12,
                   (const void *)Pool2,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
LABEL_17:
              v63 = (char *)Pool2;
              if ( Pool2 )
                goto LABEL_25;
              goto LABEL_18;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v12,
                      Pool2,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v63 = (char *)Pool2;
            goto LABEL_25;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_52:
          Pool2 = 0LL;
          v63 = 0LL;
LABEL_18:
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v15) = 0;
          }
          v5 = -1073741801;
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v18,
              (_DWORD)gRimLog,
              2,
              1,
              37,
              (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
              23);
LABEL_25:
          if ( v9 > 0xC )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
          if ( v5 < 0 )
            goto LABEL_42;
          v19 = v80;
          v20 = 0;
          v81 = 0;
          if ( v80 )
          {
            while ( 1 )
            {
              if ( v5 < 0 )
                goto LABEL_42;
              v21 = 152LL * v20;
              v22 = *(_OWORD *)(v21 + a2 + 16);
              *(_OWORD *)&v67[1] = *(_OWORD *)(v21 + a2);
              v23 = *(_OWORD *)(v21 + a2 + 32);
              v68 = v22;
              v24 = *(_OWORD *)(v21 + a2 + 48);
              v69 = v23;
              v25 = *(_OWORD *)(v21 + a2 + 64);
              v70 = v24;
              v26 = *(_OWORD *)(v21 + a2 + 80);
              v71 = v25;
              v27 = *(_OWORD *)(v21 + a2 + 96);
              v72 = v26;
              v28 = *(_OWORD *)(v21 + a2 + 112);
              v73 = v27;
              v29 = *(_OWORD *)(v21 + a2 + 128);
              v30 = *(_QWORD *)(v21 + a2 + 144);
              v74 = v28;
              v75 = v29;
              v76 = v30;
              if ( (unsigned int)RIMIDEFillContactUsageValues((_DWORD *)v67[0], v65, (int *)&v67[1]) )
              {
                v34 = 0;
                if ( v65 )
                {
                  v35 = v67[0];
                  LODWORD(v32) = v64;
                  LODWORD(v18) = v81;
                  do
                  {
                    if ( (unsigned int)v32 >= v66 )
                      break;
                    ++v34;
                    v36 = (unsigned int)v32;
                    LODWORD(v32) = v32 + 1;
                    v37 = 3 * v36;
                    *(_QWORD *)(Pool2 + 4 * v37) = *(_QWORD *)v35;
                    *(_DWORD *)(Pool2 + 4 * v37 + 8) = *((_DWORD *)v35 + 2);
                    *(_WORD *)(Pool2 + 4 * v37 + 8) = v18 + 1;
                    *((_DWORD *)v35 + 1) = 0;
                    v35 = (struct tagINPUT_INJECTION_VALUE *)((char *)v35 + 12);
                  }
                  while ( v34 < v65 );
                  v64 = v32;
                  goto LABEL_40;
                }
              }
              else
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
                {
                  LOBYTE(v31) = 0;
                }
                if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v31,
                    v18,
                    (_DWORD)gRimLog,
                    2,
                    1,
                    38,
                    (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
                }
                v5 = -1073741811;
              }
              LODWORD(v32) = v64;
LABEL_40:
              v19 = v80;
              v20 = v81 + 1;
              v81 = v20;
              if ( v20 >= v80 )
              {
                if ( v5 >= 0 )
                  goto LABEL_66;
                goto LABEL_42;
              }
            }
          }
          LODWORD(v32) = 0;
LABEL_66:
          v38 = a2;
          if ( *(_DWORD *)a2 != 2 )
          {
LABEL_95:
            if ( *(_DWORD *)v38 == 3 )
            {
              if ( (int)v32 + 1 > v66 )
              {
                LOBYTE(v38) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
                if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v38,
                    v18,
                    (_DWORD)gRimLog,
                    2,
                    1,
                    43,
                    (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
                }
                v5 = -1073741811;
                goto LABEL_42;
              }
              v51 = *(_OWORD *)(v38 + 8);
              v52 = *(_OWORD *)(v38 + 24);
              v80 = 0;
              *(_OWORD *)&v67[1] = v51;
              v53 = *(_OWORD *)(v38 + 40);
              v68 = v52;
              v54 = *(_OWORD *)(v38 + 56);
              v69 = v53;
              v55 = *(_OWORD *)(v38 + 72);
              v70 = v54;
              v56 = *(_OWORD *)(v38 + 88);
              v71 = v55;
              v72 = v56;
              if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v67[1], &v80, v19) )
              {
                v59 = 3LL * (unsigned int)v32;
                *(_DWORD *)(Pool2 + 4 * v59 + 4) = v80;
                v60 = v32 + 1;
                *(_DWORD *)(Pool2 + 4 * v59) = 5636109;
                *(_WORD *)(Pool2 + 4 * v59 + 8) = 0;
LABEL_108:
                if ( v5 >= 0 )
                {
                  v5 = RIMIDEInjectDeviceInput(a1, Pool2, v60);
                  if ( v5 < 0 )
                  {
                    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                      || (LOBYTE(v61) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
                    {
                      LOBYTE(v61) = 0;
                    }
                    if ( (_BYTE)v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v62) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      WPP_RECORDER_AND_TRACE_SF_D(
                        WPP_GLOBAL_Control->AttachedDevice,
                        v61,
                        v62,
                        (_DWORD)gRimLog,
                        2,
                        1,
                        44,
                        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
                        v5);
                    }
                  }
                }
LABEL_42:
                v6 = v63;
                goto LABEL_43;
              }
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v57) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v57) = 0;
              }
              if ( (_BYTE)v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v58) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v57,
                  v58,
                  (_DWORD)gRimLog,
                  2,
                  1,
                  42,
                  (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
              }
              v5 = -1073741811;
            }
            v60 = v66;
            goto LABEL_108;
          }
          LODWORD(v18) = v32 + 1;
          if ( (int)v32 + 1 > v66 )
          {
            v49 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v38) = 0;
            }
            LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !(_BYTE)v38 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_93;
            v50 = 39;
          }
          else
          {
            v39 = (unsigned int)v32;
            v32 = (unsigned int)v18;
            v40 = 3 * v39;
            *(_DWORD *)(Pool2 + 4 * v40) = 5505037;
            *(_DWORD *)(Pool2 + 4 * v40 + 4) = v19;
            *(_WORD *)(Pool2 + 4 * v40 + 8) = 0;
            if ( (int)v18 + 1 > v66 )
            {
              v49 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v38) = 0;
              }
              LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v38 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_93;
              v50 = 41;
            }
            else
            {
              v41 = *(_OWORD *)(a2 + 8);
              v42 = *(_OWORD *)(a2 + 24);
              v80 = 0;
              *(_OWORD *)&v67[1] = v41;
              v43 = *(_OWORD *)(a2 + 40);
              v68 = v42;
              v44 = *(_OWORD *)(a2 + 56);
              v69 = v43;
              v45 = *(_OWORD *)(a2 + 72);
              v70 = v44;
              v46 = *(_OWORD *)(a2 + 88);
              v71 = v45;
              v72 = v46;
              v47 = RIMIDEGetTimeStampDelta(a1, (__int64)&v67[1], &v80, v19);
              v19 = 0;
              if ( v47 )
              {
                v48 = 3 * v32;
                *(_DWORD *)(Pool2 + 4 * v48 + 4) = v80;
                v66 = v32 + 1;
                *(_DWORD *)(Pool2 + 4 * v48) = 5636109;
                *(_WORD *)(Pool2 + 4 * v48 + 8) = 0;
LABEL_94:
                v38 = a2;
                goto LABEL_95;
              }
              v49 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
              {
                LOBYTE(v38) = 0;
              }
              LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v38 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
LABEL_93:
                v5 = -1073741811;
                goto LABEL_94;
              }
              v50 = 40;
            }
          }
          WPP_RECORDER_AND_TRACE_SF_(
            v49->AttachedDevice,
            v38,
            v18,
            (_DWORD)gRimLog,
            2,
            1,
            v50,
            (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
          goto LABEL_93;
        }
      }
LABEL_16:
      Pool2 = ExAllocatePool2(260LL, v13);
      goto LABEL_17;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (_DWORD)gRimLog,
        2,
        1,
        36,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        v3);
    }
    v5 = -1073741811;
    v6 = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (_DWORD)gRimLog,
        2,
        1,
        45,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids);
    }
    v5 = -1073741811;
  }
LABEL_43:
  if ( v67[0] )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v67[0]);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  return (unsigned int)v5;
}
