/*
 * XREFs of WheaReportHwError @ 0x1405BB360
 * Callers:
 *     HalpMcaReportError @ 0x1404BACD0 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x1404BD980 (HalHandleNMI.c)
 *     HalpCheckAndReportGhes @ 0x1404CFB88 (HalpCheckAndReportGhes.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BC1B0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_LogErrorRecords__private_ReportDeviceUsage @ 0x1403F974C (Feature_LogErrorRecords__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     WheapGetWheaInfo @ 0x1405BB050 (WheapGetWheaInfo.c)
 *     WheapAddToDumpFile @ 0x1405BB838 (WheapAddToDumpFile.c)
 *     WheapAllocErrorRecord @ 0x1405BB87C (WheapAllocErrorRecord.c)
 *     WheapApplyThresholdChecks @ 0x1405BB910 (WheapApplyThresholdChecks.c)
 *     WheapAttemptErrorRecovery @ 0x1405BBAA8 (WheapAttemptErrorRecovery.c)
 *     WheapCompressErrorRecord @ 0x1405BBB20 (WheapCompressErrorRecord.c)
 *     WheapFillOutErrorRecord @ 0x1405BBC5C (WheapFillOutErrorRecord.c)
 *     WheapFreeErrorRecord @ 0x1405BBCD8 (WheapFreeErrorRecord.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 *     WheapPersistPageForMemoryError @ 0x1405BBD88 (WheapPersistPageForMemoryError.c)
 *     WheapGenerateETWEvents @ 0x1405BD640 (WheapGenerateETWEvents.c)
 *     WheapWorkQueueAddItem @ 0x1405BD9D8 (WheapWorkQueueAddItem.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ecx
  char v4; // r12
  _QWORD *WheaInfo; // rax
  _QWORD *v7; // r13
  __int64 v8; // rcx
  __int64 ErrorSource; // rax
  ULONG_PTR v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rax
  _DWORD *v13; // r14
  int v14; // ecx
  char v15; // [rsp+38h] [rbp-39h]
  int v16; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-31h]
  __int128 Src; // [rsp+48h] [rbp-29h] BYREF
  __int128 v19; // [rsp+58h] [rbp-19h]
  __int64 v20; // [rsp+68h] [rbp-9h]
  _DWORD v21[10]; // [rsp+70h] [rbp-1h] BYREF

  v1 = 0;
  v20 = 0LL;
  v16 = 0;
  v15 = 0;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = 0;
  v17 = 0LL;
  Src = 0LL;
  v19 = 0LL;
  if ( (v3 & 0xC0000000) == 0xC0000000 )
    return 3221225485LL;
  if ( (v3 & 0x40000000) != 0 )
  {
    v15 = 1;
    v3 &= ~0x40000000u;
    v17 = (*(unsigned int *)(a1 + 8) + a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_7:
    *(_DWORD *)(a1 + 20) = v3;
    goto LABEL_8;
  }
  if ( v3 < 0 )
  {
    v3 &= ~0x80000000;
    v4 = 1;
    goto LABEL_7;
  }
LABEL_8:
  if ( v3 == 3 && !v4 )
    return 0LL;
  Feature_LogErrorRecords__private_ReportDeviceUsage();
  if ( !v4 && *(_DWORD *)(a1 + 20) != 2 && (*(_BYTE *)(a1 + 12) & 1) == 0 )
  {
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 40LL;
    *(_QWORD *)&v19 = 0x800000054C4E524BuLL;
    *((_QWORD *)&v19 + 1) = 0x800000008LL;
    v20 = a1;
    WheaLogInternalEvent(&Src);
  }
  WheaInfo = WheapGetWheaInfo();
  v7 = WheaInfo;
  if ( !WheaInfo || (v8 = WheaInfo[1]) == 0 || !*(_DWORD *)(v8 + 4) )
  {
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    return 0LL;
  }
  ErrorSource = WheapGetErrorSource(v8, *(unsigned int *)(a1 + 24));
  v11 = ErrorSource;
  if ( !ErrorSource )
  {
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v10, 0LL);
    return 3221225664LL;
  }
  _InterlockedAdd((volatile signed __int32 *)(ErrorSource + 24), 1u);
  if ( *(_DWORD *)(a1 + 20) == 2 && (unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
  {
    v21[8] = *(_DWORD *)(a1 + 28);
    v21[9] = *(_DWORD *)(a1 + 24);
    v21[0] = 1733060695;
    v21[1] = 1;
    v21[2] = 40;
    v21[3] = 1;
    v21[5] = -2147483644;
    v21[4] = 1280201291;
    v21[6] = 2;
    v21[7] = 8;
    WheaLogInternalEvent(v21);
    return 0LL;
  }
  v12 = WheapAllocErrorRecord(v11, &v16);
  v13 = (_DWORD *)v12;
  if ( !v12 )
  {
    ++*(_DWORD *)(v11 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  *(_DWORD *)(v12 + 24) ^= (*(_DWORD *)(v12 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v12 + 24) ^= ((unsigned __int8)*(_DWORD *)(v12 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
  v16 = WheapFillOutErrorRecord((unsigned int)(v16 - 40), a1, v11, v12 + 40);
  if ( v16 >= 0 )
  {
    if ( v4 || v15 )
      v13[36] |= 8u;
    if ( (v13[36] & 2) != 0 )
    {
      WheapCompressErrorRecord(3LL, v13 + 10);
      goto LABEL_40;
    }
    if ( !WheapPolicyIgnoreDummyWrite && !v4 )
    {
      WheapCompressErrorRecord(0LL, v13 + 10);
      if ( (int)PshedWriteErrorRecord(1LL, (unsigned int)v13[15], v13 + 10) < 0 )
        WheapPolicyIgnoreDummyWrite = 1;
    }
    v14 = *(_DWORD *)(a1 + 20);
    if ( v14 == 1 )
    {
      if ( !v4 )
      {
        PshedFinalizeErrorRecord(v13 + 10, v11 + 96);
        WheapPersistPageForMemoryError(v13 + 10);
        WheapCompressErrorRecord(3LL, v13 + 10);
        PshedWriteErrorRecord(0LL, (unsigned int)v13[15], v13 + 10);
        WheapAddToDumpFile(v13 + 10, (unsigned int)v13[15]);
        if ( v15 )
          KeBugCheckEx(0x124u, *(int *)(v11 + 104), (ULONG_PTR)(v13 + 10), *(_QWORD *)(v17 + 72), *(_QWORD *)(v17 + 80));
        goto LABEL_57;
      }
    }
    else if ( (unsigned int)(v14 - 2) > 1 )
    {
      if ( v14 )
      {
        WheapFreeErrorRecord(v13);
        return (unsigned int)-1073741811;
      }
      PshedFinalizeErrorRecord(v13 + 10, v11 + 96);
      WheapAttemptErrorRecovery(v13 + 10);
      WheapCompressErrorRecord(3LL, v13 + 10);
      if ( v13[13] == 2 )
      {
        v13[36] |= 1u;
      }
      else if ( !v4 )
      {
        WheapPersistPageForMemoryError(v13 + 10);
        PshedWriteErrorRecord(0LL, (unsigned int)v13[15], v13 + 10);
        WheapAddToDumpFile(v13 + 10, (unsigned int)v13[15]);
LABEL_57:
        PshedBugCheckSystem(v11 + 96, v13 + 10);
        return v1;
      }
LABEL_40:
      if ( (v13[6] & 1) != 0 )
      {
        if ( WheapEventingInitialized == 1 )
          WheapGenerateETWEvents(v13 + 10);
        WheapFreeErrorRecord(v13);
        return v1;
      }
      goto LABEL_61;
    }
    PshedFinalizeErrorRecord(v13 + 10, v11 + 96);
    WheapCompressErrorRecord(3LL, v13 + 10);
LABEL_61:
    WheapWorkQueueAddItem(v7[2], v13);
    return v1;
  }
  if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
    KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
  WheapFreeErrorRecord(v13);
  return (unsigned int)v16;
}
