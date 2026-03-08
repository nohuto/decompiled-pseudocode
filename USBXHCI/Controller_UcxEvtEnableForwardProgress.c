/*
 * XREFs of Controller_UcxEvtEnableForwardProgress @ 0x1C0079230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UcxEvtEnableForwardProgress(__int64 a1)
{
  *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               a1,
               off_1C0063428)
           + 384) = 1;
  return 0LL;
}
