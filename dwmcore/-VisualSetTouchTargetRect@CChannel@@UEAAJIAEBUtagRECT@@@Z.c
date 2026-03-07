__int64 __fastcall CChannel::VisualSetTouchTargetRect(CChannel *this, unsigned int a2, const struct tagRECT *a3)
{
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v11[2]; // [rsp+34h] [rbp-24h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle(this, a2, 196LL);
  v10 = 418;
  v11[0] = 0LL;
  v6 = (__int128)*a3;
  LODWORD(v11[0]) = a2;
  *(_OWORD *)((char *)v11 + 4) = v6;
  v7 = CChannel::SendCommand(this, &v10, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v7;
}
