__int64 __fastcall DirectComposition::ResourceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  struct ICompositionObject *v3; // rax
  int v4; // esi
  DirectComposition::CConnection *DefaultConnection; // rax
  int SystemResource; // edi

  v3 = (struct CompositionObject *)((char *)a1 + 24);
  v4 = (int)a2;
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    *(_QWORD *)((char *)a1 + 44) = 0LL;
    *(_QWORD *)((char *)a1 + 52) = 0LL;
    *((_DWORD *)a1 + 15) = 0;
    *((_DWORD *)a1 + 10) = 0;
    *(_QWORD *)v3 = &DirectComposition::CSharedSystemResource::`vftable';
  }
  *a3 = v3;
  *((_DWORD *)a1 + 10) = 0;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 15) = 0;
  KeEnterCriticalRegion();
  *((_DWORD *)a1 + 9) = v4;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  *((_QWORD *)a1 + 6) = DefaultConnection;
  if ( DefaultConnection )
  {
    SystemResource = DirectComposition::CConnection::CreateSystemResource(
                       DefaultConnection,
                       *((_DWORD *)a1 + 9),
                       (struct CompositionObject *)((char *)a1 + 40));
    if ( SystemResource >= 0 )
      *((_BYTE *)a1 + 32) = 1;
  }
  else
  {
    SystemResource = -1073741790;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SystemResource;
}
