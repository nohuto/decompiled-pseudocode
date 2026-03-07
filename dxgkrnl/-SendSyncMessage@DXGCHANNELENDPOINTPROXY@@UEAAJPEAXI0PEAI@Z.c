__int64 __fastcall DXGCHANNELENDPOINTPROXY::SendSyncMessage(
        DXGCHANNELENDPOINTPROXY *this,
        _DWORD *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  return DXGVMBUSCHANNEL::AddMessageToChannel(
           *((DXGVMBUSCHANNEL **)this + 16),
           *((_DWORD *)this + 9),
           a2,
           a3,
           a4,
           a5,
           1);
}
