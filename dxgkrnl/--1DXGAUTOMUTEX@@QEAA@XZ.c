void __fastcall DXGAUTOMUTEX::~DXGAUTOMUTEX(DXGAUTOMUTEX *this)
{
  if ( *((_BYTE *)this + 8) )
    DXGAUTOMUTEX::Release(this);
}
