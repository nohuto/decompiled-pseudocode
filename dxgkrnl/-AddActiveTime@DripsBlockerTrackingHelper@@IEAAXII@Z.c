/*
 * XREFs of ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1C02FE6F8
 * Callers:
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1C02FF9E8 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 * Callees:
 *     McTemplateK0qqqszq_EtwWriteTransfer @ 0x1C004C2A8 (McTemplateK0qqqszq_EtwWriteTransfer.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C02FFB40 (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C03025A0 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::AddActiveTime(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bp
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 Elapsed; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  const wchar_t *v11; // r8
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v3 = a3;
  v6 = 4720LL * a2;
  v7 = v6 + 72LL * a3;
  if ( *((_BYTE *)this + v7 + 112) )
  {
    Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*(_QWORD *)((char *)this + v7 + 120));
    v9 = Elapsed;
    if ( *(int *)((char *)this + v6 + 108) <= 0 )
      *(_QWORD *)((char *)this + v7 + 128) += Elapsed;
    else
      *(_QWORD *)((char *)this + v7 + 136) += Elapsed;
    if ( bTracingEnabled )
    {
      v10 = *(unsigned int *)((char *)this + v7 + 172);
      v12 = 0;
      v11 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(v10, &v12);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0qqqszq_EtwWriteTransfer(
          (__int64)this + v6 + 8,
          &DripsBlockerTracking_AddActiveTime,
          (__int64)v11,
          a2,
          v3,
          *(_DWORD *)((char *)this + v6 + 108),
          (const char *)this + v6 + 8,
          v11,
          v9 / 0x2710);
    }
  }
}
