/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0014CD4
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C01D3B20 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C01D3C10 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02CF990 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C02D0520 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D44BC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C02D6310 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030B14C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C030C18C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0341BD0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0341E20 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C03421E0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0342350 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0342780 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0343300 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

struct DXGPROCESS *__fastcall DXGPROCESSMUTEXBYHANDLE::GetProcess(DXGPROCESSMUTEXBYHANDLE *this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  if ( !*((_BYTE *)this + 28) )
  {
    WdLogSingleEntry1(1LL, 1676LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0,
          2,
          -1,
          (__int64)L"m_Acquired != FALSE",
          1676LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !*((_QWORD *)this + 2) )
  {
    WdLogSingleEntry1(1LL, 1677LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0,
          2,
          -1,
          (__int64)L"m_pProcess != NULL",
          1677LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
