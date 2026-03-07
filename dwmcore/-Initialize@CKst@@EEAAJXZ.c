__int64 __fastcall CKst::Initialize(CKst *this)
{
  int v2; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CKstBase::Initialize(this);
  if ( v2 < 0 )
  {
    v4 = 47LL;
  }
  else
  {
    v2 = CKst::InitializeMmcssTask(this);
    if ( v2 >= 0 )
      return 0LL;
    v4 = 50LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return (unsigned int)v2;
}
