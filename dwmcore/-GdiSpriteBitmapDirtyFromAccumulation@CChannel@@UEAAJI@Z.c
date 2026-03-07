__int64 __fastcall CChannel::GdiSpriteBitmapDirtyFromAccumulation(CChannel *this, unsigned int a2)
{
  unsigned int v4; // ebx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v7, this);
  CChannel::CheckHandle((__int64)this, a2, 65);
  v6[0] = 509;
  v6[2] = 1;
  v6[1] = a2;
  v4 = CChannel::SendCommand(this, v6, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v7);
  return v4;
}
