/*
 * XREFs of ViXdvSetRequestedAPIsforDIF @ 0x1409CA220
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C9E2C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViSetRequestedIoCallbacks @ 0x1405A0FBC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x1405A1038 (ViSetRequestedOrderDependentAPIs.c)
 *     ViSetRequestedAPIs @ 0x1409C9BDC (ViSetRequestedAPIs.c)
 */

char __fastcall ViXdvSetRequestedAPIsforDIF(int (__fastcall *a1)(__int64 *, __int64 (__fastcall **)()))
{
  if ( a1(&VfDifAPIThunkContextHead, ViUtilsForDIF) < 0 )
    return 0;
  ViSetRequestedAPIs((__int64)&VfRegularThunks);
  ViSetRequestedOrderDependentAPIs();
  ViSetRequestedAPIs((__int64)&VfPoolThunks);
  ViSetRequestedAPIs((__int64)&VfMandatoryThunks);
  ViSetRequestedAPIs((__int64)&VfXdvThunks);
  ViSetRequestedIoCallbacks();
  return 1;
}
