/*
 * XREFs of ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0042450
 * Callers:
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0039EAC (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C003A144 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??0FxRequestMemory@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0042308 (--0FxRequestMemory@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequestMemory::Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Object,
        FxRequestMemory **a3)
{
  FxRequestMemory *v5; // rax
  FxRequestMemory *v6; // rax
  FxPoolTypeOrPoolFlags v8; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v8.UsePoolType = 0LL;
  v8.u.PoolFlags = 64LL;
  v5 = (FxRequestMemory *)FxObjectHandleAllocCommon(DriverGlobals, &v8, 0x98uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( !v5 )
    return 3221225626LL;
  FxRequestMemory::FxRequestMemory(v5, DriverGlobals);
  if ( !v6 )
    return 3221225626LL;
  *a3 = v6;
  return 0LL;
}
