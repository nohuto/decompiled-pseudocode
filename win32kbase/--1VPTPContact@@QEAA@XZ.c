void __fastcall VPTPContact::~VPTPContact(VPTPContact ***this, __int64 a2, __int64 a3, __int64 a4)
{
  VPTPContact **v4; // rdx
  VPTPContact **v5; // rax
  int v6; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v4 = *this;
  if ( (*this)[1] != (VPTPContact *)this || (v5 = this[1], *v5 != (VPTPContact *)this) )
    __fastfail(3u);
  *v5 = (VPTPContact *)v4;
  v4[1] = (VPTPContact *)v5;
  if ( *this[4] == (VPTPContact *)this[4] )
  {
    v6 = *((_DWORD *)this + 7);
    v8 = 0;
    v7 = v6;
    SendMessageTo(18LL, (__int64)&v7, 8LL, a4);
  }
}
