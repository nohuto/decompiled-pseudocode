__int64 __fastcall DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        const struct _D3DKMT_UPDATETRACKEDWORKLOAD *a3,
        __int64 a4)
{
  int v6; // ebp
  unsigned int VBlankOffsetHundredsNS; // ecx
  unsigned int v9; // edx
  unsigned int AbsoluteQPC_high; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rdi
  const wchar_t *v20; // r9
  _BYTE v22[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+58h] [rbp-30h]
  int v24; // [rsp+60h] [rbp-28h]

  v6 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v23);
  VBlankOffsetHundredsNS = a3->FinishDeadline.VBlankOffsetHundredsNS;
  v9 = *((_DWORD *)this + 28);
  v24 = 2;
  if ( VBlankOffsetHundredsNS >= v9
    || (AbsoluteQPC_high = HIDWORD(a3->FinishDeadline.AbsoluteQPC), AbsoluteQPC_high >= v9)
    || VBlankOffsetHundredsNS == AbsoluteQPC_high )
  {
    v6 = -1073741811;
    v19 = 1826LL;
    WdLogSingleEntry2(2LL, -1073741811LL, 1826LL);
    v20 = L"Invalid index, returning 0x%I64x";
    goto LABEL_21;
  }
  v11 = 0;
  v12 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 39) = a3->GPUCalibrationTimestamp;
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 4);
    while ( 1 )
    {
      v14 = 136LL * v11;
      if ( !*(_BYTE *)(v14 + v13 + 32) )
        break;
      if ( ++v11 >= v12 )
        goto LABEL_8;
    }
    *(_BYTE *)(v14 + v13 + 32) = 1;
    v15 = v14 + *((_QWORD *)this + 4);
    if ( !DXGTRACKEDWORKLOAD::GetInstanceForPair(
            this,
            a3->BeginTrackedWorkloadIndex != 0,
            a3->FenceSubmissionValue,
            (struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *)v15) )
    {
      v6 = a3->BeginTrackedWorkloadIndex != 0 ? -1073741811 : -2147483622;
      WdLogSingleEntry4(2LL, this, a3->FenceSubmissionValue, v6, 1842LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"TrackedWorkload 0x%I64x: Unable to find entry for pairID %d, returning 0x%I64x",
        (__int64)this,
        a3->FenceSubmissionValue,
        v6,
        1842LL,
        0LL);
      goto LABEL_22;
    }
    *(_BYTE *)(v15 + 120) = 1;
    *(_DWORD *)v15 = a3->FinishDeadline.VBlankOffsetHundredsNS;
    *(_DWORD *)(v15 + 8) = HIDWORD(a3->FinishDeadline.AbsoluteQPC);
    *(_BYTE *)(v15 + 4) = a3->BeginTrackedWorkloadIndex != 0;
    *(_BYTE *)(v15 + 12) = a3->EndTrackedWorkloadIndex != 0;
    *(_QWORD *)(v15 + 16) = a3->FenceCompletedValue;
    *(_QWORD *)(v15 + 40) = *(_QWORD *)&a3[1].hDevice;
    *(_QWORD *)(v15 + 48) = a3->CPUCalibrationTimestamp;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)(v15 + 112) = PerformanceCounter;
    if ( *(_BYTE *)(v15 + 12) )
      goto LABEL_22;
    v17 = *((_DWORD *)this + 286);
    if ( !v17 )
    {
      v18 = *(_QWORD *)&a3->FinishDeadline.Type;
      *(_QWORD *)(v15 + 24) = v18;
      if ( v18 - PerformanceCounter.QuadPart < 0 )
        TrackedWorkloadMonitor::Boost(
          (DXGTRACKEDWORKLOAD *)((char *)this + 328),
          (DXGTRACKEDWORKLOAD *)((char *)this + 232));
LABEL_15:
      v6 = DXGTRACKEDWORKLOAD::EndTrackedWorkload(this);
      goto LABEL_22;
    }
    if ( v17 != 1 )
    {
      v6 = -1073741811;
      WdLogSingleEntry3(2LL, *((int *)this + 286), -1073741811LL, 1881LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unknown deadline type %d, returning 0x%I64x",
        *((int *)this + 286),
        -1073741811LL,
        1881LL,
        0LL,
        0LL);
      goto LABEL_22;
    }
    *(_BYTE *)(v15 + 104) = 1;
    *(_QWORD *)(v15 + 24) = 0LL;
    if ( (int)MonitoredFenceHelper::Update(
                (MonitoredFenceHelper *)(v15 + 56),
                *((struct ADAPTER_RENDER ***)this + 2),
                *(_QWORD *)&a3->FinishDeadline.Type,
                a4) >= 0 )
      goto LABEL_15;
    v6 = -1073741811;
    v19 = 1874LL;
    WdLogSingleEntry2(2LL, -1073741811LL, 1874LL);
    v20 = L"Couldn't update fence, returning 0x%I64x";
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, -1073741811LL, v19, 0LL, 0LL, 0LL);
    goto LABEL_22;
  }
LABEL_8:
  v6 = -2147483622;
  WdLogSingleEntry3(2LL, this, -2147483622LL, 1835LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"TrackedWorkload 0x%I64x: Unable to find available entry, returning 0x%I64x",
    (__int64)this,
    -2147483622LL,
    1835LL,
    0LL,
    0LL);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return (unsigned int)v6;
}
