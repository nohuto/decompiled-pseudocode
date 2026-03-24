/*
 * XREFs of ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1C02B3DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C02B2E68 (-AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::PostAsyncMessage(
        DXGCHANNELENDPOINTPROXY *this,
        _DWORD *a2,
        unsigned int a3)
{
  return DXGVMBUSCHANNEL::AddMessageToChannel(
           *((DXGVMBUSCHANNEL **)this + 15),
           *((_DWORD *)this + 9),
           a2,
           a3,
           0LL,
           0LL,
           0);
}
