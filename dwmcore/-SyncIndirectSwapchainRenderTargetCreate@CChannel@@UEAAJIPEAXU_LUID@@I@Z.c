__int64 __fastcall CChannel::SyncIndirectSwapchainRenderTargetCreate(
        CChannel *this,
        unsigned int a2,
        void *a3,
        struct _LUID a4,
        unsigned int a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _BYTE v14[16]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-40h] BYREF
  char *v16; // [rsp+38h] [rbp-38h]
  _DWORD v17[2]; // [rsp+50h] [rbp-20h] BYREF
  void *v18; // [rsp+58h] [rbp-18h]
  struct _LUID v19; // [rsp+60h] [rbp-10h]
  unsigned int v20; // [rsp+68h] [rbp-8h]
  int v21; // [rsp+6Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v14, this);
  CChannel::CheckHandle((__int64)this, a2, 86);
  CChannel::CheckHandle((__int64)this, a5, 196);
  v17[0] = 180;
  v21 = 0;
  v17[1] = a2;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  v9 = CChannel::SendSyncCommand(this, v17, 0x20u, (struct MIL_MESSAGE *)v15);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v10 = (unsigned int)v16;
    if ( (int)v16 >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v11 = (unsigned int)v16;
    v12 = 2113LL;
  }
  else
  {
    v11 = (unsigned int)v9;
    v12 = 2111LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v11);
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v14);
  return v10;
}
