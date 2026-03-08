/*
 * XREFs of WheaReportHwError @ 0x14060E280
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14029AA2C (HalpCheckAndReportGhes.c)
 *     HalpMcaReportError @ 0x140501778 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x140504300 (HalHandleNMI.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14060F030 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     WheaIsCriticalState @ 0x14037D730 (WheaIsCriticalState.c)
 *     WheapGetErrorSourceFunction @ 0x14037D8DC (WheapGetErrorSourceFunction.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     WheaRecoveryBugCheck @ 0x14060E210 (WheaRecoveryBugCheck.c)
 *     WheapAddToDumpFile @ 0x14060E748 (WheapAddToDumpFile.c)
 *     WheapAllocErrorRecord @ 0x14060E78C (WheapAllocErrorRecord.c)
 *     WheapApplyThresholdChecks @ 0x14060E808 (WheapApplyThresholdChecks.c)
 *     WheapAttemptErrorRecovery @ 0x14060E8B4 (WheapAttemptErrorRecovery.c)
 *     WheapCompressErrorRecord @ 0x14060E978 (WheapCompressErrorRecord.c)
 *     WheapFreeErrorRecord @ 0x14060EAB0 (WheapFreeErrorRecord.c)
 *     WheapGetErrorSource @ 0x14060EAE8 (WheapGetErrorSource.c)
 *     WheapPersistPageForMemoryError @ 0x14060EC18 (WheapPersistPageForMemoryError.c)
 *     WheapGenerateETWEvents @ 0x140610F18 (WheapGenerateETWEvents.c)
 *     WheapWorkQueueAddItem @ 0x1406115E4 (WheapWorkQueueAddItem.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  int v1; // r11d
  unsigned int v2; // ebx
  char v4; // r12
  _QWORD *WheaInfo; // rax
  __int64 v7; // rcx
  __int64 ErrorSource; // rax
  unsigned int v9; // edx
  unsigned int v10; // r11d
  __int64 v11; // r14
  _DWORD *v12; // rcx
  __int64 v13; // rax
  char *v14; // r15
  int v15; // ecx
  __int64 (__fastcall *ErrorSourceFunction)(__int64, __int64, char *, _QWORD, _QWORD); // rax
  int v17; // eax
  int v18; // edx
  char v19; // [rsp+30h] [rbp-39h]
  int v20; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h]
  _QWORD *v22; // [rsp+40h] [rbp-29h]
  unsigned __int64 v23; // [rsp+48h] [rbp-21h]
  _DWORD Src[6]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h]
  _DWORD v26[10]; // [rsp+70h] [rbp+7h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0;
  v20 = 0;
  v19 = 0;
  v23 = 0LL;
  v4 = 0;
  if ( (v1 & 0xC0000000) == 0xC0000000 )
    return 3221225485LL;
  if ( (v1 & 0x40000000) != 0 )
  {
    v19 = 1;
    v1 &= ~0x40000000u;
    v23 = (*(unsigned int *)(a1 + 8) + a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_7:
    *(_DWORD *)(a1 + 20) = v1;
    goto LABEL_8;
  }
  if ( v1 < 0 )
  {
    v1 &= ~0x80000000;
    v4 = 1;
    goto LABEL_7;
  }
LABEL_8:
  if ( v1 == 3 && !v4 )
    return 0LL;
  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  v22 = WheaInfo;
  if ( !WheaInfo || (v7 = WheaInfo[1]) == 0 || !*(_DWORD *)(v7 + 4) )
  {
    if ( (unsigned int)v1 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    Src[0] = 1733060695;
    v12 = Src;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483594;
    Src[4] = 1280201291;
    v25 = 2LL;
    goto LABEL_75;
  }
  ErrorSource = WheapGetErrorSource(v7, *(unsigned int *)(a1 + 24));
  v11 = ErrorSource;
  if ( !ErrorSource )
  {
    if ( v10 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v9, 0LL);
    return 3221225664LL;
  }
  _InterlockedAdd((volatile signed __int32 *)(ErrorSource + 24), 1u);
  if ( *(_DWORD *)(a1 + 20) == 2 && (unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
  {
    v12 = v26;
    v26[8] = *(_DWORD *)(a1 + 28);
    v26[9] = *(_DWORD *)(a1 + 24);
    v26[0] = 1733060695;
    v26[1] = 1;
    v26[2] = 40;
    v26[3] = 1;
    v26[5] = -2147483644;
    v26[4] = 1280201291;
    v26[6] = 2;
    v26[7] = 8;
LABEL_75:
    WheaLogInternalEvent(v12);
    return 0LL;
  }
  v13 = WheapAllocErrorRecord(v11, &v20);
  v14 = (char *)v13;
  if ( !v13 )
  {
    ++*(_DWORD *)(v11 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  v15 = *(_DWORD *)(v13 + 24) ^ (*(_DWORD *)(v13 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v13 + 24) = v15;
  *(_DWORD *)(v13 + 24) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
  ErrorSourceFunction = (__int64 (__fastcall *)(__int64, __int64, char *, _QWORD, _QWORD))WheapGetErrorSourceFunction(
                                                                                            v11,
                                                                                            2,
                                                                                            0);
  if ( ErrorSourceFunction )
    v17 = ErrorSourceFunction(v11 + 96, a1, v14 + 40, (unsigned int)(v20 - 40), *(_QWORD *)(v11 + 56));
  else
    v17 = -1073741822;
  v21 = v17;
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 92));
  if ( v17 >= 0 )
  {
    if ( v4 || v19 )
      *((_DWORD *)v14 + 36) |= 8u;
    if ( (v14[144] & 2) != 0 )
    {
      if ( (*((_DWORD *)v14 + 6) & 1) != 0 && !WheaIsCriticalState() )
      {
        if ( WheapEventingInitialized != 1 )
        {
LABEL_45:
          WheapFreeErrorRecord(v14);
          return v2;
        }
LABEL_44:
        WheapGenerateETWEvents(v14 + 40);
        goto LABEL_45;
      }
LABEL_68:
      WheapWorkQueueAddItem(v22[2], v14);
      return v2;
    }
    if ( !WheapPolicyIgnoreDummyWrite && !v4 )
    {
      WheapCompressErrorRecord(0LL, v14 + 40);
      if ( (int)PshedWriteErrorRecord(1LL, *((unsigned int *)v14 + 15), v14 + 40) < 0 )
        WheapPolicyIgnoreDummyWrite = 1;
    }
    v18 = *(_DWORD *)(a1 + 20);
    if ( v18 == 1 )
    {
      if ( !v4 )
      {
        PshedFinalizeErrorRecord(v14 + 40, v11 + 96);
        WheapPersistPageForMemoryError(v14 + 40);
        WheapCompressErrorRecord(3LL, v14 + 40);
        PshedWriteErrorRecord(0LL, *((unsigned int *)v14 + 15), v14 + 40);
        WheapAddToDumpFile(v14 + 40, *((unsigned int *)v14 + 15));
        if ( v19 )
          KeBugCheckEx(0x124u, *(int *)(v11 + 104), (ULONG_PTR)(v14 + 40), *(_QWORD *)(v23 + 72), *(_QWORD *)(v23 + 80));
        PshedBugCheckSystem(v11 + 96, v14 + 40);
        return v2;
      }
    }
    else if ( (unsigned int)(v18 - 2) > 1 )
    {
      if ( v18 )
      {
        WheapFreeErrorRecord(v14);
        return (unsigned int)-1073741811;
      }
      PshedFinalizeErrorRecord(v14 + 40, v11 + 96);
      WheapAttemptErrorRecovery(v14 + 40);
      if ( *((_DWORD *)v14 + 13) == 2 )
      {
        *((_DWORD *)v14 + 36) |= 1u;
      }
      else if ( !v4 )
      {
        WheaRecoveryBugCheck((__int64)(v14 + 40), v11 + 96);
        return v2;
      }
      if ( (*((_DWORD *)v14 + 6) & 1) != 0 && WheapEventingInitialized == 1 && !WheaIsCriticalState() && v14[144] >= 0 )
        goto LABEL_44;
      goto LABEL_68;
    }
    PshedFinalizeErrorRecord(v14 + 40, v11 + 96);
    goto LABEL_68;
  }
  if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
    KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
  WheapFreeErrorRecord(v14);
  return v21;
}
