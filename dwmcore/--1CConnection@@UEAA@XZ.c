void __fastcall CConnection::~CConnection(CConnection *this)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &CConnection::`vftable';
  CConnection::Disconnect(this);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    SetEvent(v2);
    v3 = (void *)*((_QWORD *)this + 2);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
  v4 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
}
