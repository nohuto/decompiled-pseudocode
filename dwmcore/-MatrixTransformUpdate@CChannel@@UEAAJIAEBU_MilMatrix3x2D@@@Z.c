__int64 __fastcall CChannel::MatrixTransformUpdate(CChannel *this, unsigned int a2, const struct _MilMatrix3x2D *a3)
{
  __int64 v6; // rax
  float *v7; // rcx
  double v8; // xmm0_8
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+34h] [rbp-24h] BYREF
  __int64 v14; // [rsp+44h] [rbp-14h]
  int v15; // [rsp+4Ch] [rbp-Ch]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle((__int64)this, a2, 109);
  v6 = 0LL;
  v12 = 468;
  v14 = 0LL;
  v13 = 0LL;
  LODWORD(v13) = a2;
  v7 = (float *)&v13 + 1;
  v15 = 0;
  do
  {
    v8 = *(&a3->S_11 + v6++);
    *v7++ = v8;
  }
  while ( v6 < 6 );
  v9 = CChannel::SendCommand(this, &v12, 0x20u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v9;
}
