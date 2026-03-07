__int64 __fastcall CChannel::SyncLegacyVisualCaptureRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        enum DXGI_FORMAT *a10,
        void **a11)
{
  int v14; // eax
  unsigned int v15; // ebx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  _BYTE v19[16]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-41h] BYREF
  void *v21; // [rsp+40h] [rbp-39h]
  enum DXGI_FORMAT v22; // [rsp+4Ch] [rbp-2Dh]
  char *v23; // [rsp+50h] [rbp-29h]
  _DWORD v24[8]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-1h]
  int v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+84h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+27h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v19, this);
  CChannel::CheckHandle((__int64)this, a2, 98);
  CChannel::CheckHandle((__int64)this, a3, 196);
  v24[0] = 237;
  v26 = 0;
  v27 = 0;
  v24[4] = a5;
  v24[5] = a6;
  v24[6] = a7;
  v24[7] = a8;
  v24[2] = a3;
  v25 = a9;
  *(float *)&v24[3] = a4;
  v24[1] = a2;
  v26 = *a10;
  v14 = CChannel::SendSyncCommand(this, v24, 0x30u, (struct MIL_MESSAGE *)v20);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v15 = (unsigned int)v23;
    if ( (int)v23 >= 0 )
    {
      v15 = 0;
      *a10 = v22;
      *a11 = v21;
      goto LABEL_7;
    }
    v16 = (unsigned int)v23;
    v17 = 1179LL;
  }
  else
  {
    v16 = (unsigned int)v14;
    v17 = 1177LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v16);
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v19);
  return v15;
}
