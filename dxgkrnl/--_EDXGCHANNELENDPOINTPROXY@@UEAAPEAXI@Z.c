DXGCHANNELENDPOINTPROXY *__fastcall DXGCHANNELENDPOINTPROXY::`vector deleting destructor'(
        DXGCHANNELENDPOINTPROXY *this,
        char a2)
{
  DXGCHANNELENDPOINTPROXY::~DXGCHANNELENDPOINTPROXY(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
