void __fastcall OPM::CAutoMutex::~CAutoMutex(struct _KMUTANT ***this)
{
  struct _KMUTANT *v2; // rcx

  v2 = **this;
  if ( v2 )
    KeReleaseMutex(v2, 0);
  *this = 0LL;
}
