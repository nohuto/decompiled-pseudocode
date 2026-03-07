__int64 __fastcall DXGCHANNELENDPOINTPROXY::PostAsyncMessage(
        DXGCHANNELENDPOINTPROXY *this,
        _DWORD *a2,
        unsigned int a3)
{
  return DXGVMBUSCHANNEL::AddMessageToChannel(
           *((DXGVMBUSCHANNEL **)this + 16),
           *((_DWORD *)this + 9),
           a2,
           a3,
           0LL,
           0LL,
           0);
}
