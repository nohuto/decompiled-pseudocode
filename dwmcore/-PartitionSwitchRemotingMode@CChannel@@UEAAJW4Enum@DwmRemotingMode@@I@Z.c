__int64 __fastcall CChannel::PartitionSwitchRemotingMode(struct CChannel *a1, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, a1);
  v8[0] = 276;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(a1, v8, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v6;
}
