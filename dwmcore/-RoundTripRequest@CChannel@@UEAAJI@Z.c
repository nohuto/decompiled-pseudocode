__int64 __fastcall CChannel::RoundTripRequest(CChannel *this, int a2)
{
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+54h] [rbp+1Ch]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v6, this);
  v7 = 48;
  v8 = a2;
  v4 = CChannel::SendCommand(this, &v7, 8u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v6);
  return v4;
}
