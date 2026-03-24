/*
 * XREFs of ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BD83C
 * Callers:
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02BE8F0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Feature_TrackedWorkloadDirectDeadline__private_ReportDeviceUsage @ 0x1C002826C (Feature_TrackedWorkloadDirectDeadline__private_ReportDeviceUsage.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C006EDFC (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C02BCD10 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 *     ?FindInstancePair@DXGTRACKEDWORKLOAD@@IEAA_NPEAPEAUWorkloadInstancePair@1@@Z @ 0x1C02BCE98 (-FindInstancePair@DXGTRACKEDWORKLOAD@@IEAA_NPEAPEAUWorkloadInstancePair@1@@Z.c)
 *     ?GetInstanceForPair@DXGTRACKEDWORKLOAD@@IEAA_N_N_KPEAUWorkloadInstancePair@1@@Z @ 0x1C02BCFE0 (-GetInstanceForPair@DXGTRACKEDWORKLOAD@@IEAA_N_N_KPEAUWorkloadInstancePair@1@@Z.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C02BD718 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        const struct _D3DKMT_UPDATETRACKEDWORKLOAD *a3,
        __int64 a4)
{
  int v6; // ebx
  __int64 VBlankOffsetHundredsNS_low; // rdx
  __int64 v9; // rcx
  unsigned int AbsoluteQPC_high; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  LARGE_INTEGER v17; // rdx
  LARGE_INTEGER v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE v24[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v25; // [rsp+28h] [rbp-30h]
  int v26; // [rsp+30h] [rbp-28h]
  struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *v27; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  v27 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24, (struct _KTHREAD **)this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v25);
  VBlankOffsetHundredsNS_low = LODWORD(a3->FinishDeadline.VBlankOffsetHundredsNS);
  v9 = *((unsigned int *)this + 28);
  v26 = 2;
  if ( (unsigned int)VBlankOffsetHundredsNS_low >= (unsigned int)v9
    || (AbsoluteQPC_high = HIDWORD(a3->FinishDeadline.AbsoluteQPC), AbsoluteQPC_high >= (unsigned int)v9)
    || (_DWORD)VBlankOffsetHundredsNS_low == AbsoluteQPC_high )
  {
    v6 = -1073741811;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v9, VBlankOffsetHundredsNS_low);
    v13[4] = 1562LL;
    goto LABEL_18;
  }
  *((_QWORD *)this + 39) = a3->GPUCalibrationTimestamp;
  if ( !DXGTRACKEDWORKLOAD::FindInstancePair(this, &v27) )
  {
    v6 = -2147483622;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v13[3] = this;
    v13[4] = -2147483622LL;
    v13[5] = 1571LL;
LABEL_19:
    WdLogEvent5_WdError(v13);
    goto LABEL_20;
  }
  v14 = v27;
  if ( !DXGTRACKEDWORKLOAD::GetInstanceForPair(this, a3->BeginTrackedWorkloadIndex != 0, a3->FenceSubmissionValue, v27) )
  {
    v6 = a3->BeginTrackedWorkloadIndex != 0 ? -1073741811 : -2147483622;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v13[3] = this;
    v13[4] = a3->FenceSubmissionValue;
    v13[5] = v6;
    v13[6] = 1578LL;
    goto LABEL_19;
  }
  *((_BYTE *)v14 + 120) = 1;
  *(_DWORD *)v14 = a3->FinishDeadline.VBlankOffsetHundredsNS;
  *((_DWORD *)v14 + 2) = HIDWORD(a3->FinishDeadline.AbsoluteQPC);
  *((_BYTE *)v14 + 4) = a3->BeginTrackedWorkloadIndex != 0;
  *((_BYTE *)v14 + 12) = a3->EndTrackedWorkloadIndex != 0;
  *((_QWORD *)v14 + 2) = a3->FenceCompletedValue;
  *((_QWORD *)v14 + 5) = *(_QWORD *)&a3[1].hDevice;
  *((_QWORD *)v14 + 6) = a3->CPUCalibrationTimestamp;
  *((LARGE_INTEGER *)v14 + 14) = KeQueryPerformanceCounter(0LL);
  if ( !*((_BYTE *)v14 + 12) )
  {
    v19 = *((_DWORD *)this + 284);
    if ( !v19 )
    {
      v20 = *(_QWORD *)&a3->FinishDeadline.Type;
      *((_QWORD *)v14 + 3) = v20;
      if ( v20 - *((_QWORD *)v14 + 14) < 0 )
        TrackedWorkloadMonitor::Boost(
          (DXGTRACKEDWORKLOAD *)((char *)this + 328),
          (DXGTRACKEDWORKLOAD *)((char *)this + 232));
LABEL_12:
      Feature_TrackedWorkloadDirectDeadline__private_ReportDeviceUsage();
      v6 = DXGTRACKEDWORKLOAD::EndTrackedWorkload(this);
      goto LABEL_20;
    }
    if ( v19 != 1 )
    {
      v6 = -1073741811;
      v13 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(
                        (LARGE_INTEGER)v18.QuadPart,
                        (LARGE_INTEGER)v17.QuadPart);
      v13[3] = *((int *)this + 284);
      v13[4] = -1073741811LL;
      v13[5] = 1617LL;
      goto LABEL_19;
    }
    *((_BYTE *)v14 + 104) = 1;
    *((_QWORD *)v14 + 3) = 0LL;
    if ( (int)MonitoredFenceHelper::Update(
                (struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *)((char *)v14 + 56),
                *((struct ADAPTER_RENDER ***)this + 2),
                *(_QWORD *)&a3->FinishDeadline.Type,
                a4) >= 0 )
      goto LABEL_12;
    v6 = -1073741811;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v13[4] = 1610LL;
LABEL_18:
    v13[3] = -1073741811LL;
    goto LABEL_19;
  }
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return (unsigned int)v6;
}
