void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  bool v1; // zf
  void *v3; // r8
  void *v4; // rcx

  v1 = *((_BYTE *)this + 24) == 0;
  *(_QWORD *)this = &CPortClient::`vftable';
  if ( !v1 )
  {
    v4 = (void *)*((_QWORD *)this + 2);
    if ( v4 )
    {
      CloseHandle(v4);
      *((_BYTE *)this + 24) = 0;
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  v3 = (void *)*((_QWORD *)this + 5);
  *((_DWORD *)this + 2) = 0;
  if ( v3 )
  {
    HeapFree(*((HANDLE *)this + 6), 0, v3);
    *((_QWORD *)this + 5) = 0LL;
  }
}
