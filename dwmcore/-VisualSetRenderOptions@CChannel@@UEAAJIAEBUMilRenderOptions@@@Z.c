__int64 __fastcall CChannel::VisualSetRenderOptions(CChannel *this, unsigned int a2, const struct MilRenderOptions *a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+38h] [rbp-28h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v10, this);
  CChannel::CheckHandle((__int64)this, a2, 196);
  v6 = *((_OWORD *)a3 + 1);
  v11[0] = 414;
  v11[1] = a2;
  memset(&v12[4], 0, 32);
  v7 = *(_OWORD *)a3;
  *(_OWORD *)&v12[16] = v6;
  *(_OWORD *)v12 = v7;
  *(_QWORD *)&v12[32] = *((_QWORD *)a3 + 4);
  v8 = CChannel::SendCommand(this, v11, 0x30u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v10);
  return v8;
}
