__int64 __fastcall CChannel::VisualInsertChild(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        bool a5)
{
  unsigned int v5; // edi
  const char *v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  int ResourceInterface; // eax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-40h]
  void *v16; // [rsp+30h] [rbp-30h] BYREF
  void *v17[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v18[6]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  void *v20; // [rsp+80h] [rbp+20h] BYREF

  v5 = (unsigned int)a4;
  if ( *((_QWORD *)this + 8) )
  {
    if ( (_DWORD)a4 == a3 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5A9,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        a4);
    v16 = 0LL;
    v20 = 0LL;
    v17[0] = 0LL;
    ResourceInterface = CChannel::QueryResourceInterface(this, a2, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, v17);
    v11 = ResourceInterface;
    if ( ResourceInterface >= 0 )
    {
      ResourceInterface = CChannel::QueryResourceInterface(this, a3, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v16);
      v11 = ResourceInterface;
      if ( ResourceInterface >= 0 )
      {
        if ( !v5 )
          goto LABEL_19;
        if ( v20 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
        ResourceInterface = CChannel::QueryResourceInterface(this, v5, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v20);
        v11 = ResourceInterface;
        if ( ResourceInterface < 0 )
        {
          v14 = 1459LL;
        }
        else
        {
LABEL_19:
          ResourceInterface = (*(__int64 (__fastcall **)(void *, void *, bool, void *))(*(_QWORD *)v17[0] + 128LL))(
                                v17[0],
                                v16,
                                a5,
                                v20);
          v11 = ResourceInterface;
          if ( ResourceInterface >= 0 )
          {
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v17);
            return 0LL;
          }
          v14 = 1464LL;
        }
      }
      else
      {
        v14 = 1456LL;
      }
    }
    else
    {
      v14 = 1455LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)ResourceInterface,
      v15);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v17);
  }
  else
  {
    CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v17, this);
    CChannel::CheckHandle(this, a2, 196LL);
    CChannel::CheckHandle(this, a3, 196LL);
    if ( v5 )
      CChannel::CheckHandle(this, v5, 196LL);
    if ( v5 == a3 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5C1,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        v9);
    v18[0] = 390;
    v18[1] = a2;
    v18[2] = a3;
    v18[3] = v5;
    v18[4] = a5;
    v10 = CChannel::SendCommand(this, v18, 0x14u);
    v11 = v10;
    if ( v10 >= 0 )
    {
      CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v17);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10,
      v15);
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v17);
  }
  return v11;
}
