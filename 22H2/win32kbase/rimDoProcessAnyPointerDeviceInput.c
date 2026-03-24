/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C01795E8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01784F4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00496F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C0158410 (WPP_RECORDER_SF_i.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C015A07C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x1C015E558 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0171424 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0171C28 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171EF0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0179364 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C017A200 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017C108 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017C51C (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C017C758 (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C017CF28 (rimUpdatePointerDeviceFrameScanTime.c)
 */

void __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // r15
  bool v11; // cf
  int v12; // esi
  void *v13; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // r9
  unsigned int v20; // eax
  int v21; // edx
  int v22; // r9d
  int v23; // r12d
  unsigned int v24; // esi
  __int16 v25; // ax
  int v26; // eax
  int v27; // eax
  LARGE_INTEGER v28; // rax
  int v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // [rsp+28h] [rbp-61h]
  unsigned int v32; // [rsp+54h] [rbp-35h] BYREF
  int v33; // [rsp+58h] [rbp-31h] BYREF
  int v34; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v35; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v36[3]; // [rsp+64h] [rbp-25h] BYREF
  int v37; // [rsp+70h] [rbp-19h] BYREF
  __int64 v38; // [rsp+78h] [rbp-11h]
  __int64 v39; // [rsp+80h] [rbp-9h]
  __int64 *v40; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v41[10]; // [rsp+90h] [rbp+7h] BYREF
  int v42; // [rsp+F0h] [rbp+67h] BYREF
  int v43; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v44; // [rsp+100h] [rbp+77h]
  int v45; // [rsp+108h] [rbp+7Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v40, "ProcessPointerInput", 0LL, a4);
  v6 = *(_QWORD *)(a2 + 464);
  v7 = *(_QWORD *)(a2 + 480);
  v8 = *(_DWORD *)(a2 + 264);
  v9 = *(_QWORD *)(v6 + 24);
  v10 = *(unsigned __int16 *)(v6 + 44);
  v11 = __CFSHR__(*(_DWORD *)(a2 + 184), 14);
  v38 = v7;
  v12 = -v11;
  v13 = &WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v13, 1, 14, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( !*(_QWORD *)(v7 + 736) )
  {
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 110);
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = RIMGetPointerInputType(v38) - 2;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 1 )
          v18 = 17;
        else
          v18 = 0;
      }
      else
      {
        v18 = 3;
      }
    }
    else
    {
      v18 = 13;
    }
  }
  else
  {
    v18 = 11;
  }
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v18,
    0LL,
    0,
    v12 != 0 ? 10 : 2);
  v20 = v8 / (unsigned int)v10;
  if ( v8 % (unsigned int)v10 )
  {
    if ( v8 > (unsigned int)v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v31) = v8;
        WPP_RECORDER_SF_Dd(
          (__int64)gRimLog,
          4u,
          1u,
          0xFu,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v31,
          v10);
      }
      goto LABEL_54;
    }
    v20 = 1;
  }
  if ( v20 )
  {
    v39 = v20;
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v41,
        "ProcessPointerInputReport",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v40,
        v19);
      v33 = 0;
      LOWORD(v42) = 0;
      v43 = 0;
      v32 = 0;
      v45 = 0;
      v37 = 0;
      v34 = 0;
      v44 = 0;
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v9,
                  v10,
                  (__int64)&v43,
                  (__int64)&v32,
                  (__int64)&v45,
                  (__int64)&v37,
                  (__int64)&v34,
                  (__int64)&v42) >= 0 )
      {
        if ( !v45 )
          goto LABEL_34;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v9, (unsigned int)v10);
        if ( !v43 )
        {
          if ( *(_DWORD *)(v38 + 24) == 7 )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(
              (struct RawInputManagerObject *)a1,
              (struct RIMDEV *)a2,
              v9,
              v10,
              PerformanceCounter.QuadPart);
            goto LABEL_53;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_53;
          v22 = 17;
          goto LABEL_22;
        }
        if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
        {
          if ( *(_DWORD *)(v38 + 24) == 7 )
            rimProcessPointerDeviceButtonContact(a1, a2, v9, v10, 0);
LABEL_34:
          RIMStoreRawDataInPointerDeviceFrame(a1, a2, v9, v10, &v33);
          v23 = 0;
          v24 = v32;
          if ( v32 )
          {
            v25 = v42;
            while ( 1 )
            {
              v35 = 0;
              v36[0] = 0;
              rimProcessPointerDeviceContact(a1, a2, v9, v10, v25, v33, (__int64)&v35, (__int64)v36);
              if ( v34 )
              {
                if ( v35 )
                  break;
              }
              v26 = v44;
              if ( v36[0] )
                v26 = 1;
              v44 = v26;
              if ( (*(_DWORD *)(v38 + 312) & 2) != 0 )
              {
                v25 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 712) + 24LL) + 8LL * (unsigned __int16)v42 + 4);
                LOWORD(v42) = v25;
              }
              else
              {
                if ( v43 != 1 )
                {
                  v36[1] = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 251);
                }
                if ( v24 != 1 )
                {
                  v36[2] = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 252);
                }
                v25 = v42;
              }
              if ( ++v23 >= v24 )
                goto LABEL_50;
            }
            v27 = 1;
          }
          else
          {
LABEL_50:
            v27 = v37;
          }
          if ( v27 )
          {
            rimProcessMissingPointerDeviceContacts(a1, a2, v44);
            RIMAbArbitratePointerDeviceFrame((struct RawInputManagerObject *)a1, a2);
            RIMCompletePointerDeviceFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, 0);
          }
          goto LABEL_53;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = 18;
          goto LABEL_22;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 16;
LABEL_22:
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v21, 1, v22, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
LABEL_53:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v41);
      v9 += v10;
      --v39;
    }
    while ( v39 );
  }
LABEL_54:
  v28 = KeQueryPerformanceCounter(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = (unsigned __int64)(1000000 * (v28.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 520);
    LOBYTE(v30) = 4;
    WPP_RECORDER_SF_i(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v30,
      v29,
      19,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      (unsigned __int64)(1000000 * (v28.QuadPart - PerformanceCounter.QuadPart)) / *(_QWORD *)(a1 + 520));
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v40);
}
