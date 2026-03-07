__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_EJOB *,void (_EJOB *),&void PsDetachSiloFromCurrentThread(_EJOB *),wistd::integral_constant<unsigned __int64,0>,_EJOB *,_EJOB *,0,std::nullptr_t>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return PsDetachSiloFromCurrentThread();
  return result;
}
