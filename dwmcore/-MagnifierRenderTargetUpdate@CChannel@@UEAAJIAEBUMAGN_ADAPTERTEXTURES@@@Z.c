__int64 __fastcall CChannel::MagnifierRenderTargetUpdate(
        CChannel *this,
        unsigned int a2,
        const struct MAGN_ADAPTERTEXTURES *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int v18; // ebx
  _BYTE v20[16]; // [rsp+20h] [rbp-F8h] BYREF
  int v21; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-E4h] BYREF
  __int128 v23; // [rsp+38h] [rbp-E0h]
  __int128 v24; // [rsp+48h] [rbp-D0h]
  __int128 v25; // [rsp+58h] [rbp-C0h]
  __int128 v26; // [rsp+68h] [rbp-B0h]
  __int128 v27; // [rsp+78h] [rbp-A0h]
  __int128 v28; // [rsp+88h] [rbp-90h]
  __int128 v29; // [rsp+98h] [rbp-80h]
  __int128 v30; // [rsp+A8h] [rbp-70h]
  __int128 v31; // [rsp+B8h] [rbp-60h]
  __int128 v32; // [rsp+C8h] [rbp-50h]
  __int128 v33; // [rsp+D8h] [rbp-40h]
  __int128 v34; // [rsp+E8h] [rbp-30h]
  __int128 v35; // [rsp+F8h] [rbp-20h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v20, this);
  CChannel::CheckHandle((__int64)this, a2, 104);
  v21 = 248;
  memset_0(&v22, 0, 0xD4uLL);
  v6 = *(_OWORD *)a3;
  v22 = a2;
  v7 = *((_OWORD *)a3 + 1);
  v23 = v6;
  v8 = *((_OWORD *)a3 + 2);
  v24 = v7;
  v9 = *((_OWORD *)a3 + 3);
  v25 = v8;
  v10 = *((_OWORD *)a3 + 4);
  v26 = v9;
  v11 = *((_OWORD *)a3 + 5);
  v27 = v10;
  v12 = *((_OWORD *)a3 + 6);
  v28 = v11;
  v29 = v12;
  v13 = *((_OWORD *)a3 + 7);
  a3 = (const struct MAGN_ADAPTERTEXTURES *)((char *)a3 + 128);
  v30 = v13;
  v14 = *((_OWORD *)a3 + 1);
  v31 = *(_OWORD *)a3;
  v15 = *((_OWORD *)a3 + 2);
  v32 = v14;
  v16 = *((_OWORD *)a3 + 3);
  v33 = v15;
  v17 = *((_OWORD *)a3 + 4);
  v34 = v16;
  v35 = v17;
  v18 = CChannel::SendCommand(this, &v21, 0xD8u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v20);
  return v18;
}
