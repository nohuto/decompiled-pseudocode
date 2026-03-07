__int64 __fastcall CChannel::WindowNodeSetBounds(
        CChannel *this,
        unsigned int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  _BYTE v13[16]; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v14[16]; // [rsp+30h] [rbp-40h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v13, this);
  CChannel::CheckHandle(this, a2, 204LL);
  v9 = (__int128)*a4;
  v14[0] = 432;
  memset(&v14[1], 0, 48);
  v14[1] = a2;
  v10 = (__int128)*a3;
  *(_OWORD *)&v14[6] = v9;
  *(_OWORD *)&v14[2] = v10;
  *(struct tagRECT *)&v14[10] = *a5;
  v11 = CChannel::SendCommand(this, v14, 0x38u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v13);
  return v11;
}
