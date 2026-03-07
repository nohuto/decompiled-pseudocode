__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  float v7; // xmm1_4
  float v8; // xmm0_4
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v12[8]; // [rsp+30h] [rbp-48h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle(this, a2, 196LL);
  v12[0] = 407;
  v7 = a3;
  v12[1] = a2;
  *(float *)&v12[2] = v7;
  v8 = a4;
  *(float *)&v12[4] = a5;
  *(float *)&v12[3] = v8;
  v9 = CChannel::SendCommand(this, v12, 0x14u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v9;
}
