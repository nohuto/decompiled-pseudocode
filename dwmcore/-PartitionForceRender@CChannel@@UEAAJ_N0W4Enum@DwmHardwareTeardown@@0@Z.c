__int64 __fastcall CChannel::PartitionForceRender(struct CChannel *a1, __int8 a2, __int8 a3, __int32 a4, __int8 a5)
{
  unsigned int v9; // ebx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i8[4] = a2;
  si128.m128i_i8[5] = a3;
  si128.m128i_i32[2] = a4;
  si128.m128i_i8[12] = a5;
  v9 = CChannel::SendCommand(a1, &si128, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
  return v9;
}
