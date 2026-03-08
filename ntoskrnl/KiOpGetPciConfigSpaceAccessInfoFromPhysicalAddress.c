/*
 * XREFs of KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress @ 0x14057CF34
 * Callers:
 *     KiOpCheckUnhandledSecurePciAccessViolation @ 0x14057CD3C (KiOpCheckUnhandledSecurePciAccessViolation.c)
 *     KiOpPciConfigSpaceAccessCommon @ 0x14057D12C (KiOpPciConfigSpaceAccessCommon.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress(
        __int16 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  if ( !off_140C01E70 || !off_140C01E70() )
    return 3221225473LL;
  *a6 = a1 & 0xFFF;
  return 0LL;
}
