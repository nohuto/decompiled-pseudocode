void __fastcall CGlobalMit::~CGlobalMit(wil::details **this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx

  *this = (wil::details *)&CGlobalMit::`vftable';
  CMit::Stop((CMit *)this);
  v3 = this[18];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = this[17];
  if ( v4 )
    wil::details::CloseHandle(v4, v2);
  CMmcssTask::UnloadRuntime((CMmcssTask *)(this + 6));
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 6));
  CMit::~CMit((CMit *)this);
}
