void __fastcall CKstBase::~CKstBase(wil::details **this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx

  *this = (wil::details *)&CKstBase::`vftable';
  CKstBase::Stop((CKstBase *)this);
  v3 = this[4];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = this[2];
  if ( (unsigned __int64)v4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = this[1];
  if ( v5 )
    wil::details::CloseHandle(v5, v2);
}
