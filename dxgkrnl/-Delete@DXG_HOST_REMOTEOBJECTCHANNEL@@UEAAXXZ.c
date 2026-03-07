void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::Delete(DXG_HOST_REMOTEOBJECTCHANNEL *this)
{
  if ( this )
  {
    DXG_HOST_REMOTEOBJECTCHANNEL::~DXG_HOST_REMOTEOBJECTCHANNEL(this);
    operator delete(this);
  }
}
