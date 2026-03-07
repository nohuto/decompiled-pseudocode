void __fastcall DXGRESOURCE::~DXGRESOURCE(DXGRESOURCE *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
    operator delete(v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGRESOURCE *)((char *)this + 80));
}
