/*
 * XREFs of AMLIIterateParentNext @ 0x1C00488C4
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C003287C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceCheck @ 0x1C0032CA0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C0032EBC (OSNotifyDeviceEnum.c)
 *     GetOpRegionScopeWorker @ 0x1C0034C40 (GetOpRegionScopeWorker.c)
 *     AcpiHandleInternalNotify @ 0x1C0037488 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B60 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048744 (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(volatile signed __int32 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  v2 = AMLIGetParent((__int64)a1);
  AMLIDereferenceHandleEx(a1, v3);
  return v2;
}
