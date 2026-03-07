__int64 __fastcall CChannel::PartitionUpdateCursorMouseMove(CChannel *this)
{
  CChannel *v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = this;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v3, this);
  v4 = 279;
  LODWORD(v1) = CChannel::SendCommand(v1, &v4, 4u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v3);
  return (unsigned int)v1;
}
