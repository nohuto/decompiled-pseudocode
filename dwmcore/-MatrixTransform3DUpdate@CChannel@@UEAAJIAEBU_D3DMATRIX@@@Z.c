__int64 __fastcall CChannel::MatrixTransform3DUpdate(CChannel *this, unsigned int a2, const struct _D3DMATRIX *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v10; // ebx
  _BYTE v12[16]; // [rsp+20h] [rbp-68h] BYREF
  int v13; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-54h] BYREF
  __int128 v15; // [rsp+38h] [rbp-50h]
  __int128 v16; // [rsp+48h] [rbp-40h]
  __int128 v17; // [rsp+58h] [rbp-30h]
  __int128 v18; // [rsp+68h] [rbp-20h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
  CChannel::CheckHandle((__int64)this, a2, 110);
  v13 = 469;
  memset_0(&v14, 0, 0x44uLL);
  v6 = *(_OWORD *)&a3->_11;
  v7 = *(_OWORD *)&a3->_21;
  v14 = a2;
  v15 = v6;
  v8 = *(_OWORD *)&a3->_31;
  v16 = v7;
  v9 = *(_OWORD *)&a3->_41;
  v17 = v8;
  v18 = v9;
  v10 = CChannel::SendCommand(this, &v13, 0x48u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
  return v10;
}
