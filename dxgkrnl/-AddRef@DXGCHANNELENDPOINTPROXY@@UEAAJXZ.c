__int64 __fastcall DXGCHANNELENDPOINTPROXY::AddRef(DXGCHANNELENDPOINTPROXY *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
