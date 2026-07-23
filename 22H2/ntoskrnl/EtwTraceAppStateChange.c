/*
 * XREFs of EtwTraceAppStateChange @ 0x14062B3BC
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14062B6D8 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpQueryTokenPackageInfo @ 0x1406023FC (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x140602928 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x140602968 (EtwpQueryProcessCommandLine.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140604E5C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChange @ 0x140604EFC (EtwpWriteAppStateChange.c)
 *     EtwpInitStateChangeInfo @ 0x14061391C (EtwpInitStateChangeInfo.c)
 *     PsQueryStatisticsProcess @ 0x140619120 (PsQueryStatisticsProcess.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14062AD7C (EtwpWriteAppStateChangeSummary.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     ObGetProcessHandleCount @ 0x1406976DC (ObGetProcessHandleCount.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x14077B050 (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceAppStateChange(__int64 BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int *v14; // r15
  char v15; // r14
  char v16; // si
  struct _DMA_ADAPTER *v17; // rbx
  _DWORD *v18; // r9
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[14]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v23[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h]
  int v25; // [rsp+E8h] [rbp-18h]
  char v26[100]; // [rsp+ECh] [rbp-14h] BYREF
  _OWORD v27[3]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR PackageSize[208]; // [rsp+180h] [rbp+80h] BYREF

  memset(v26, 0, 0x62uLL);
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0;
  if ( dword_140C02BB8 && tlgKeywordOn((__int64)&dword_140C02BB8, 0x600000000001LL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, (__int64)v26);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - *(_QWORD *)(BugCheckParameter1 + 2304);
    v7 = *(_BYTE *)(a2 + 52);
    v26[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v26[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v26[41] = v8 / 0x2710;
    *(_QWORD *)&v26[49] = v9 / 0x2710;
    *(_QWORD *)&v26[57] = v6 / 0x2710;
    *(_QWORD *)&v26[65] = v5 / 0x2710;
    *(_QWORD *)&v26[73] = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset(v22, 0, 0x68uLL);
      PsQueryStatisticsProcess(BugCheckParameter1, v22);
      LODWORD(v23[0]) = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v10 = -1;
      v11 = -1;
      *(_QWORD *)((char *)v23 + 4) = *(_QWORD *)(BugCheckParameter1 + 1608) << 12;
      *(_QWORD *)((char *)v23 + 12) = *(_QWORD *)(BugCheckParameter1 + 1616) << 12;
      v12 = -1;
      if ( v22[5] < 0xFFFFFFFFLL )
        v12 = v22[5];
      HIDWORD(v23[1]) = v12;
      v13 = -1;
      if ( v22[6] < 0xFFFFFFFFLL )
        v13 = v22[6];
      LODWORD(v24) = v13;
      if ( v22[8] / 1024LL < 0xFFFFFFFFLL )
        v11 = v22[8] / 1024LL;
      HIDWORD(v24) = v11;
      if ( v22[9] / 1024LL < 0xFFFFFFFFLL )
        v10 = v22[9] / 1024LL;
      v25 = v10;
      *(_QWORD *)((char *)&v23[1] + 4) = v22[3];
      EtwpWriteAppStateChangeWithStats(BugCheckParameter1, v26, v23, 1024LL);
      v14 = (unsigned int *)v23;
    }
    else
    {
      EtwpWriteAppStateChange();
      v14 = 0LL;
    }
    if ( dword_140C02BB8 && tlgKeywordOn((__int64)&dword_140C02BB8, 0x400000000000LL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v20 = 0LL;
      v19 = 0;
      *(_OWORD *)P = 0LL;
      v15 = 0;
      v16 = 1;
      memset(v27, 0, sizeof(v27));
      if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v27, v18);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, PackageSize, &v19);
      ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), v17);
      if ( v16 )
      {
        if ( *(_QWORD *)(BugCheckParameter1 + 1360) && EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
          EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)P);
        EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v20);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((__int64)v27, 0);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      }
      EtwpWriteAppStateChangeSummary(
        BugCheckParameter1,
        v26,
        v14,
        (__int64)PackageSize,
        (int *)&v20,
        (unsigned __int16 *)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
