/*
 * XREFs of ViXdvSetRequestedAPIsforDIF @ 0x1409C9230
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C8E3C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViSetRequestedIoCallbacks @ 0x1405A0CCC (ViSetRequestedIoCallbacks.c)
 *     ViSetRequestedOrderDependentAPIs @ 0x1405A0D48 (ViSetRequestedOrderDependentAPIs.c)
 *     ViSetRequestedAPIs @ 0x1409C8BEC (ViSetRequestedAPIs.c)
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
