void __fastcall DXGDIAGNOSTICS::~DXGDIAGNOSTICS(DXGDIAGNOSTICS *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGDIAGNOSTICS *)((char *)this + 64));
}
