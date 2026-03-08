/*
 * XREFs of ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02FE7F0
 * Callers:
 *     DpiReportDevicePowerStateWorkItemCallback @ 0x1C01E5170 (DpiReportDevicePowerStateWorkItemCallback.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02216B4 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FEAF4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02FFA84 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 * Callees:
 *     McTemplateK0qqqszq_EtwWriteTransfer @ 0x1C004C2A8 (McTemplateK0qqqszq_EtwWriteTransfer.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C02FFB40 (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C03025A0 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(DripsBlockerTrackingHelper *this)
{
  unsigned __int64 Elapsed; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  const wchar_t *v6; // r10
  int v7; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 302152) )
  {
    Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 37767));
    v3 = *((unsigned int *)this + 75536);
    v4 = *((unsigned int *)this + 75537);
    if ( *((_BYTE *)this + 302153) )
      *((_QWORD *)this + 590 * v3 + 9 * v4 + 20) += Elapsed;
    else
      *((_QWORD *)this + 590 * v3 + 9 * v4 + 19) += Elapsed;
    if ( bTracingEnabled )
    {
      v5 = *((unsigned int *)this + 75536);
      v7 = 0;
      v6 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                              *((unsigned int *)this + 1180 * v5 + 18 * *((unsigned int *)this + 75537) + 43),
                              &v7);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0qqqszq_EtwWriteTransfer(
          *((unsigned __int8 *)this + 302153),
          &DripsBlockerTracking_AddD0LagTime,
          (__int64)this + 4720 * *((unsigned int *)this + 75536) + 8,
          *((_DWORD *)this + 75536),
          *((_DWORD *)this + 75537),
          *((_BYTE *)this + 302153),
          (const char *)this + 4720 * *((unsigned int *)this + 75536) + 8,
          v6,
          Elapsed / 0x2710);
    }
    *((_BYTE *)this + 302152) = 0;
  }
}
