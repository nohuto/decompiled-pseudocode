__int64 __fastcall CChannel::InternalCommit(CChannel *this, void *a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, void *))(*(_QWORD *)v2 + 72LL))(*((_QWORD *)this + 8), a2);
    if ( v3 >= 0 )
      return 0LL;
    v5 = 570LL;
  }
  else
  {
    v3 = CChannel::FlushCommands(this, a2);
    if ( v3 >= 0 )
      return 0LL;
    v5 = 574LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return (unsigned int)v3;
}
