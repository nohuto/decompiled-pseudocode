__int64 __fastcall CChannel::VisualRemoveChild(CChannel *this, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v14; // [rsp+60h] [rbp+20h] BYREF
  void *v15; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    v14 = 0LL;
    v15 = 0LL;
    v9 = CChannel::QueryResourceInterface(this, a2, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v15);
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
      v9 = CChannel::QueryResourceInterface(this, a3, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v14);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v15 + 136LL))(v15, v14);
        v7 = v9;
        if ( v9 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
          return 0LL;
        }
        v10 = 1422LL;
      }
      else
      {
        v10 = 1420LL;
      }
    }
    else
    {
      v10 = 1419LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9,
      v11[0]);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
    CChannel::CheckHandle(this, a2, 196LL);
    CChannel::CheckHandle(this, a3, 196LL);
    v11[0] = 393;
    v11[1] = a2;
    v11[2] = a3;
    v6 = CChannel::SendCommand(this, v11, 0xCu);
    v7 = v6;
    if ( v6 >= 0 )
    {
      CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59B,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v6,
      v11[0]);
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
  }
  return v7;
}
