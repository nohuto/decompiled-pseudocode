void __fastcall PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rbx
  unsigned int i; // edi

  v2 = *(char **)a1;
  if ( v2 == (char *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
    {
      if ( v2[16 * i + 8] )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v2[16 * i]);
        v2 = *(char **)a1;
      }
    }
  }
  else if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      16LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX);
    operator delete(v3);
  }
}
