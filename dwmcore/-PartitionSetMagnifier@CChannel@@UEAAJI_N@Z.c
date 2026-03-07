__int64 __fastcall CChannel::PartitionSetMagnifier(CChannel *this, int a2, unsigned __int8 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  v8[0] = 275;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v6;
}
