void __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::ChannelPostStarted(DXG_GUEST_REMOTEOBJECTCHANNEL *this)
{
  *((_WORD *)this + 8) = 0;
}
