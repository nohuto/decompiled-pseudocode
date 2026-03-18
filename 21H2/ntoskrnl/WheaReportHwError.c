/*
 * XREFs of WheaReportHwError @ 0x140643630
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14021294C (HalpCheckAndReportGhes.c)
 *     HalpMcaReportError @ 0x14050745C (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x14050A180 (HalHandleNMI.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x1403C0934 (WheapGetErrorSourceFunction.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     WheaIsCriticalState @ 0x1403D2BA0 (WheaIsCriticalState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     WheaRecoveryBugCheck @ 0x1406435C0 (WheaRecoveryBugCheck.c)
 *     WheapAddToDumpFile @ 0x140643AFC (WheapAddToDumpFile.c)
 *     WheapAllocErrorRecord @ 0x140643B40 (WheapAllocErrorRecord.c)
 *     WheapApplyThresholdChecks @ 0x140643BBC (WheapApplyThresholdChecks.c)
 *     WheapAttemptErrorRecovery @ 0x140643D54 (WheapAttemptErrorRecovery.c)
 *     WheapCompressErrorRecord @ 0x140643DCC (WheapCompressErrorRecord.c)
 *     WheapFreeErrorRecord @ 0x140643F08 (WheapFreeErrorRecord.c)
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 *     WheapPersistPageForMemoryError @ 0x140643FCC (WheapPersistPageForMemoryError.c)
 *     WheapGenerateETWEvents @ 0x140645F80 (WheapGenerateETWEvents.c)
 *     WheapWorkQueueAddItem @ 0x140646270 (WheapWorkQueueAddItem.c)
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
  __int64 v11; // r15
  _DWORD *v12; // rcx
  __int64 v13; // rax
  char *v14; // r14
  __int64 (__fastcall *ErrorSourceFunction)(__int64, __int64, char *, _QWORD, _QWORD); // rax
  int v16; // eax
  int v17; // edx
  char v18; // [rsp+30h] [rbp-39h]
  int v19; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-31h]
  _QWORD *v21; // [rsp+40h] [rbp-29h]
  unsigned __int64 v22; // [rsp+48h] [rbp-21h]
  _DWORD Src[6]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  _DWORD v25[10]; // [rsp+70h] [rbp+7h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0;
  v19 = 0;
  v18 = 0;
  v22 = 0LL;
  v4 = 0;
  if ( (v1 & 0xC0000000) == 0xC0000000 )
    return 3221225485LL;
  if ( (v1 & 0x40000000) != 0 )
  {
    v18 = 1;
    v1 &= ~0x40000000u;
    v22 = (*(unsigned int *)(a1 + 8) + a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
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
  v21 = WheaInfo;
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
    v24 = 2LL;
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
    v12 = v25;
    v25[8] = *(_DWORD *)(a1 + 28);
    v25[9] = *(_DWORD *)(a1 + 24);
    v25[0] = 1733060695;
    v25[1] = 1;
    v25[2] = 40;
    v25[3] = 1;
    v25[5] = -2147483644;
    v25[4] = 1280201291;
    v25[6] = 2;
    v25[7] = 8;
LABEL_75:
    WheaLogInternalEvent(v12);
    return 0LL;
  }
  v13 = WheapAllocErrorRecord(v11, &v19);
  v14 = (char *)v13;
  if ( !v13 )
  {
    ++*(_DWORD *)(v11 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  *(_DWORD *)(v13 + 24) ^= (*(_DWORD *)(v13 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v13 + 24) ^= ((unsigned __int8)*(_DWORD *)(v13 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
  ErrorSourceFunction = (__int64 (__fastcall *)(__int64, __int64, char *, _QWORD, _QWORD))WheapGetErrorSourceFunction(
                                                                                            v11,
                                                                                            2,
                                                                                            0);
  if ( ErrorSourceFunction )
    v16 = ErrorSourceFunction(v11 + 96, a1, v14 + 40, (unsigned int)(v19 - 40), *(_QWORD *)(v11 + 56));
  else
    v16 = -1073741822;
  v20 = v16;
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 92));
  if ( v16 >= 0 )
  {
    if ( v4 || v18 )
      *((_DWORD *)v14 + 36) |= 8u;
    if ( (*((_DWORD *)v14 + 36) & 2) != 0 )
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
      WheapWorkQueueAddItem(v21[2], v14);
      return v2;
    }
    if ( !WheapPolicyIgnoreDummyWrite && !v4 )
    {
      WheapCompressErrorRecord(0LL, v14 + 40);
      if ( (int)PshedWriteErrorRecord(1LL, *((unsigned int *)v14 + 15), v14 + 40) < 0 )
        WheapPolicyIgnoreDummyWrite = 1;
    }
    v17 = *(_DWORD *)(a1 + 20);
    if ( v17 == 1 )
    {
      if ( !v4 )
      {
        PshedFinalizeErrorRecord(v14 + 40, v11 + 96);
        WheapPersistPageForMemoryError(v14 + 40);
        WheapCompressErrorRecord(3LL, v14 + 40);
        PshedWriteErrorRecord(0LL, *((unsigned int *)v14 + 15), v14 + 40);
        WheapAddToDumpFile(v14 + 40, *((unsigned int *)v14 + 15));
        if ( v18 )
          KeBugCheckEx(0x124u, *(int *)(v11 + 104), (ULONG_PTR)(v14 + 40), *(_QWORD *)(v22 + 72), *(_QWORD *)(v22 + 80));
        PshedBugCheckSystem(v11 + 96, v14 + 40);
        return v2;
      }
    }
    else if ( (unsigned int)(v17 - 2) > 1 )
    {
      if ( v17 )
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
  return v20;
}
