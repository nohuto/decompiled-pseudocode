__int64 __fastcall DirectComposition::CSharedSystemResource::Delete(
        DirectComposition::CSharedSystemResource *this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  __int64 v3; // rcx

  (*(void (__fastcall **)(DirectComposition::CSharedSystemResource *, struct _WIN32_DELETEMETHOD_PARAMETERS *))(*(_QWORD *)this + 8LL))(
    this,
    a2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( *((_DWORD *)this + 4) )
      DirectComposition::CConnection::ReleaseSystemResource(v3, *((unsigned int *)this + 4));
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  return 0LL;
}
