/*
 * XREFs of ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0014FD0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C01DEF90 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C01DF080 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02D4710 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C02D52A0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D924C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C02DB0A0 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030FF7C (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0310FBC (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0346610 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0346860 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0346C20 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0346D90 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C03471C0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0347D40 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
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
    WdLogSingleEntry1(1LL, 1820LL);
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
          1820LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !*((_QWORD *)this + 2) )
  {
    WdLogSingleEntry1(1LL, 1821LL);
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
          1821LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return (struct DXGPROCESS *)*((_QWORD *)this + 2);
}
