/*
 * XREFs of ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01DF1B4
 * Callers:
 *     DxgkQueryProcessOfferInfo @ 0x1C01DF080 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02D4710 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C02D52A0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D924C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C02DB0A0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0346610 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0346860 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0346C20 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C03471C0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0347D40 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     <none>
 */

DXGPROCESSMUTEXBYHANDLE *__fastcall DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
        DXGPROCESSMUTEXBYHANDLE *this,
        void *a2,
        int a3)
{
  DXGPROCESSMUTEXBYHANDLE *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 14) = 0;
  *((_BYTE *)this + 30) = 0;
  result = this;
  *((_DWORD *)this + 6) = a3;
  return result;
}
