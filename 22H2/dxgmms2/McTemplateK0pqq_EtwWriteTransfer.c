/*
 * XREFs of McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EE6C
 * Callers:
 *     VidSchiSetPriorityContext @ 0x1C00048C4 (VidSchiSetPriorityContext.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AA30 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000BE10 (VidSchiUpdateContextStatus.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000D460 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000FA10 (VidSchiExecuteMmIoFlip.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034508 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0034B10 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0089A2C (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0089CC0 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00A0510 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00A17C0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00A3320 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C00A3390 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C00A7180 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     VidSchReportAdapter @ 0x1C0107B90 (VidSchReportAdapter.c)
 *     VidSchReportContext @ 0x1C01080D0 (VidSchReportContext.c)
 *     VidSchReportDevice @ 0x1C0108170 (VidSchReportDevice.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C01095C4 (VidSchiUpdateDdiHwContextPriority.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BD2C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS McTemplateK0pqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 4u, &v4);
}
