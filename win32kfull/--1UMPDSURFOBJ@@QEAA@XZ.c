void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this)
{
  if ( *((_DWORD *)this + 14) )
  {
    PopThreadGuardedObject((char *)this + 24);
    *((_DWORD *)this + 14) = 0;
  }
  UMPDSURFOBJ::Cleanup(this);
  if ( *((_DWORD *)this + 14) )
  {
    PopThreadGuardedObject((char *)this + 24);
    *((_DWORD *)this + 14) = 0;
  }
}
