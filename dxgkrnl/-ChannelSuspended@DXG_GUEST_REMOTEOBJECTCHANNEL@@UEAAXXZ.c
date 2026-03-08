/*
 * XREFs of ?ChannelSuspended@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x1C01E0320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ChannelSuspended(DXG_GUEST_REMOTEOBJECTCHANNEL *this)
{
  *((_BYTE *)this + 17) = 1;
}
