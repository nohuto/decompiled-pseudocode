void __fastcall wil::details_abi::SemaphoreValue::~SemaphoreValue(wil::details_abi::SemaphoreValue *this, void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 1);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  if ( *(_QWORD *)this )
    wil::details::CloseHandle(*(wil::details **)this, a2);
}
