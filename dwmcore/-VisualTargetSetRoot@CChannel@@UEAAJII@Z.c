__int64 __fastcall CChannel::VisualTargetSetRoot(CChannel *this, unsigned int a2, unsigned int a3)
{
  int inserted; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v13; // [rsp+50h] [rbp+8h] BYREF
  void *v14; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    v13 = 0LL;
    v14 = 0LL;
    v8 = CChannel::QueryResourceInterface(this, a2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, &v14);
    inserted = v8;
    if ( v8 >= 0 )
    {
      if ( !a3 )
        goto LABEL_13;
      if ( v13 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
      v8 = CChannel::QueryResourceInterface(this, a3, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v13);
      inserted = v8;
      if ( v8 < 0 )
      {
        v9 = 1601LL;
      }
      else
      {
LABEL_13:
        v8 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v14 + 24LL))(v14, v13);
        inserted = v8;
        if ( v8 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
          return 0LL;
        }
        v9 = 1604LL;
      }
    }
    else
    {
      v9 = 1598LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8,
      v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  }
  else
  {
    inserted = CChannel::VisualRemoveAllChildren(this, a2);
    if ( inserted < 0 )
    {
      v10 = 1608LL;
    }
    else
    {
      if ( !a3 )
        return 0LL;
      inserted = CChannel::VisualInsertChild(this, a2, a3, 0, 0);
      if ( inserted >= 0 )
        return 0LL;
      v10 = 1611LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)inserted,
      v11);
  }
  return (unsigned int)inserted;
}
