/*
 * XREFs of AMLIIterateParentNext @ 0x1C00488A4
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C003285C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceCheck @ 0x1C0032C80 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C0032E9C (OSNotifyDeviceEnum.c)
 *     GetOpRegionScopeWorker @ 0x1C0034C20 (GetOpRegionScopeWorker.c)
 *     AcpiHandleInternalNotify @ 0x1C0037468 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(volatile signed __int32 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  v2 = AMLIGetParent((__int64)a1);
  AMLIDereferenceHandleEx(a1, v3);
  return v2;
}
