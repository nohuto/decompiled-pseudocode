__int64 __fastcall CChannel::DoubleResourceUpdate(CChannel *this, unsigned int a2, double a3)
{
  float v5; // xmm0_4
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle((__int64)this, a2, 62);
  v8[0] = 148;
  v8[1] = a2;
  v5 = a3;
  *(float *)&v8[2] = v5;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v6;
}
