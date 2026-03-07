void __fastcall SURFFAKEOBJ::~SURFFAKEOBJ(SURFFAKEOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *(_QWORD *)this )
  {
    CAutoTGO::~CAutoTGO((SURFFAKEOBJ *)((char *)this + 8));
    v2 = *(_QWORD *)this + 40LL;
    if ( !*(_QWORD *)this )
      v2 = 16LL;
    *(_QWORD *)v2 = *((_QWORD *)this + 6);
    v3 = *(_QWORD *)this + 48LL;
    if ( !*(_QWORD *)this )
      v3 = 24LL;
    *(_QWORD *)v3 = *((_QWORD *)this + 7);
    v4 = *(_QWORD *)this + 100LL;
    if ( !*(_QWORD *)this )
      v4 = 76LL;
    *(_WORD *)v4 = *((_WORD *)this + 32);
    SURFREF::vTryDeleteSurface(this);
  }
  CAutoTGO::~CAutoTGO((SURFFAKEOBJ *)((char *)this + 8));
  EPALOBJ::~EPALOBJ(this);
}
