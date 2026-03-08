/*
 * XREFs of EtwTraceAppStateChange @ 0x1407E8520
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1407E7C28 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsQueryStatisticsProcess @ 0x1406A8F30 (PsQueryStatisticsProcess.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406BF9CC (EtwpWriteAppStateChangeSummary.c)
 *     ObGetProcessHandleCount @ 0x14071172C (ObGetProcessHandleCount.c)
 *     EtwpQueryProcessCommandLine @ 0x14071DB40 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14071DD1C (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14071DD5C (EtwpQueryTokenPackageInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1407E69B4 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1407E885C (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpInitStateChangeInfo @ 0x1407E88FC (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChange @ 0x1407E89B8 (EtwpWriteAppStateChange.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceAppStateChange(PRKPROCESS PROCESS, __int64 a2)
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
  ULONG_PTR v17; // rbx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[14]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v22[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  char v25[100]; // [rsp+ECh] [rbp-14h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v27[416]; // [rsp+180h] [rbp+80h] BYREF

  memset(v25, 0, 0x62uLL);
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  v24 = 0;
  if ( dword_140C042B8 && tlgKeywordOn((__int64)&dword_140C042B8, 0x600000000001LL) )
  {
    EtwpInitStateChangeInfo(PROCESS, v25);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - PROCESS[2].Affinity.StaticBitmap[7];
    v7 = *(_BYTE *)(a2 + 52);
    v25[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v25[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    *(_QWORD *)&v25[41] = v8 / 0x2710;
    *(_QWORD *)&v25[49] = v9 / 0x2710;
    *(_QWORD *)&v25[57] = v6 / 0x2710;
    *(_QWORD *)&v25[65] = v5 / 0x2710;
    *(_QWORD *)&v25[73] = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset(v21, 0, 0x68uLL);
      PsQueryStatisticsProcess((__int64)PROCESS, v21);
      LODWORD(v22[0]) = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)PROCESS, 0LL);
      v10 = -1;
      v11 = -1;
      *(_QWORD *)((char *)v22 + 4) = PROCESS[1].ActiveProcessors.StaticBitmap[19] << 12;
      *(_QWORD *)((char *)v22 + 12) = PROCESS[1].ActiveProcessors.StaticBitmap[20] << 12;
      v12 = -1;
      if ( v21[5] < 0xFFFFFFFFLL )
        v12 = v21[5];
      HIDWORD(v22[1]) = v12;
      v13 = -1;
      if ( v21[6] < 0xFFFFFFFFLL )
        v13 = v21[6];
      LODWORD(v23) = v13;
      if ( v21[8] / 1024LL < 0xFFFFFFFFLL )
        v11 = v21[8] / 1024LL;
      HIDWORD(v23) = v11;
      if ( v21[9] / 1024LL < 0xFFFFFFFFLL )
        v10 = v21[9] / 1024LL;
      v24 = v10;
      *(_QWORD *)((char *)&v22[1] + 4) = v21[3];
      EtwpWriteAppStateChangeWithStats();
      v14 = (unsigned int *)v22;
    }
    else
    {
      EtwpWriteAppStateChange(v25);
      v14 = 0LL;
    }
    if ( dword_140C042B8 && tlgKeywordOn((__int64)&dword_140C042B8, 0x400000000000LL) )
    {
      memset(v27, 0, 0x198uLL);
      v19 = 0LL;
      v18 = 0;
      *(_OWORD *)P = 0LL;
      v15 = 0;
      v16 = 1;
      memset(&ApcState, 0, sizeof(ApcState));
      if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = PsReferencePrimaryTokenWithTag((__int64)PROCESS, 0x746C6644u);
      EtwpQueryTokenPackageInfo(v17, (__int64)v27, &v18);
      ObFastDereferenceObject((signed __int64 *)&PROCESS[1].Affinity.StaticBitmap[5], v17, 0x746C6644u);
      if ( v16 )
      {
        if ( PROCESS[1].Affinity.StaticBitmap[24]
          && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(PROCESS) )
        {
          EtwpQueryProcessCommandLine((__int64)PROCESS, (__int64)P);
        }
        EtwpQueryProcessOtherInfo((__int64)PROCESS, (__int64)&v19);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
      }
      EtwpWriteAppStateChangeSummary((__int64)PROCESS, v25, v14, (__int64)v27, (int *)&v19, (unsigned __int16 *)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
