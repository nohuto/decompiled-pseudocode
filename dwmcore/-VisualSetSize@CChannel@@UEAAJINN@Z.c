__int64 __fastcall CChannel::VisualSetSize(CChannel *this, unsigned int a2, double a3, double a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  unsigned int v8; // ebx
  _DWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle(this, a2, 196LL);
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v6 = a3;
  v7 = a4;
  *(float *)&v10[2] = v6;
  *(float *)&v10[3] = v7;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
