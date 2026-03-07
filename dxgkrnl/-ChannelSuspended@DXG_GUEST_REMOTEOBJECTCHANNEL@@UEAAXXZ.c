void __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ChannelSuspended(DXG_GUEST_REMOTEOBJECTCHANNEL *this)
{
  *((_BYTE *)this + 17) = 1;
}
