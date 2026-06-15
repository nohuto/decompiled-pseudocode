/*
 * XREFs of ?PulseEndpoint@CSpatialCrossProcessServerInputEndpoint@@UEAAXXZ @ 0x14006D970
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006854C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14006A0DC (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14006D2BC (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::PulseEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CSpatialCrossProcessServerEndpoint *v4; // rbx
  __int64 v5; // rdx

  if ( *((_BYTE *)this - 1328) )
  {
    v4 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1424);
    if ( `PingPongState::GetEmptyBufferCount'::`2'::emptyBufferCount_[(unsigned int)PingPongState::GetState((__int64)this - 848)] )
      *((_BYTE *)v4 + 1328) = CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(v4, v5);
  }
  else
  {
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::PulseEndpoint", 398, 2289827859LL, a4);
  }
}
