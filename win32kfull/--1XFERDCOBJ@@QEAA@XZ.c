void __fastcall XFERDCOBJ::~XFERDCOBJ(XFERDCOBJ *this)
{
  if ( *((_DWORD *)this + 12) )
    PopThreadGuardedObject((char *)this + 16);
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
