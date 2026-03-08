/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0153EEC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0153D04 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00A3274 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 */

void __fastcall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(
        NSInstrumentation::CLeakTrackingAllocator *a1)
{
  if ( *(_UNKNOWN **)a1 != &gSmartObjNullRef && !--*(_DWORD *)(*(_QWORD *)a1 + 8LL) )
  {
    if ( *(_BYTE *)(*(_QWORD *)a1 + 12LL) )
      NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(a1, (char *)gpStackRefLookAside, *(char **)a1);
  }
}
