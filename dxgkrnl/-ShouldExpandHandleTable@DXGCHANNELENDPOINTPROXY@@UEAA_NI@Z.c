bool __fastcall DXGCHANNELENDPOINTPROXY::ShouldExpandHandleTable(DXGCHANNELENDPOINTPROXY *this, unsigned int a2)
{
  return a2 <= *((_DWORD *)this + 28);
}
