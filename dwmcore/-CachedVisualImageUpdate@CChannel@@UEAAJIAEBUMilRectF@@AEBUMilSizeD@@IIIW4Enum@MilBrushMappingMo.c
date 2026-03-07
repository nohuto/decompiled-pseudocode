__int64 __fastcall CChannel::CachedVisualImageUpdate(
        struct CChannel *a1,
        unsigned int a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // ebx
  _BYTE v17[16]; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 v20; // [rsp+38h] [rbp-48h]
  __int128 v21; // [rsp+48h] [rbp-38h]
  unsigned int v22; // [rsp+58h] [rbp-28h]
  unsigned int v23; // [rsp+5Ch] [rbp-24h]
  unsigned int v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+64h] [rbp-1Ch]
  int v26; // [rsp+74h] [rbp-Ch]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v17, a1);
  CChannel::CheckHandle((__int64)a1, a2, 18);
  if ( a5 )
    CChannel::CheckHandle((__int64)a1, a5, 140);
  if ( a6 )
    CChannel::CheckHandle((__int64)a1, a6, 172);
  if ( a7 )
    CChannel::CheckHandle((__int64)a1, a7, 196);
  v18 = 29;
  memset_0(&v19, 0, 0x44uLL);
  v13 = *a3;
  v25 = a8;
  v14 = *a4;
  v20 = v13;
  v19 = a2;
  v21 = v14;
  v22 = a5;
  v23 = a6;
  v24 = a7;
  v26 = a9;
  v15 = CChannel::SendCommand(a1, &v18, 0x48u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v17);
  return v15;
}
