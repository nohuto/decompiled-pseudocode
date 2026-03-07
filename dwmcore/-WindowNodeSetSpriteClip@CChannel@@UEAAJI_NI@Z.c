__int64 __fastcall CChannel::WindowNodeSetSpriteClip(CChannel *this, unsigned int a2, __int8 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle((__int64)this, a2, 204);
  if ( a4 )
    CChannel::CheckHandle((__int64)this, a4, 67);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  si128.m128i_i8[8] = a3;
  si128.m128i_i32[3] = a4;
  v8 = CChannel::SendCommand(this, &si128, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
