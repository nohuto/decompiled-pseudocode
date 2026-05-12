/*
 * XREFs of StorSetIoGatewayNotBusy @ 0x1C004E610
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008E00 (StorRemoveIoGatewayItem.c)
 *     StorSetIoGatewayBusy @ 0x1C004E4FC (StorSetIoGatewayBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorSetIoGatewayNotBusy(unsigned int *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1[10] )
    {
      result = a1[7];
      a1[10] = 0;
      a1[8] = result;
    }
  }
  return result;
}
