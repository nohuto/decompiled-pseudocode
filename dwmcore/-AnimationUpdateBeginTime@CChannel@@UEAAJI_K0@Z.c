__int64 __fastcall CChannel::AnimationUpdateBeginTime(CChannel *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int128 v6; // rdi
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]

  *((_QWORD *)&v6 + 1) = a4;
  *(_QWORD *)&v6 = a3;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle((__int64)this, a2, 2);
  v10[0] = 11;
  v10[1] = a2;
  v11 = v6;
  v7 = CChannel::SendCommand(this, v10, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v7;
}
