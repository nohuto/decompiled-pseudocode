/*
 * XREFs of DxgkReportDeviceDirectedPowerDown @ 0x1C0041FE4
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReportDeviceDirectedPowerDown(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 3032) )
      return PoFxCompleteDirectedPowerDown();
  }
  return result;
}
