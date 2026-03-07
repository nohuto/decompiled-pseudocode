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
