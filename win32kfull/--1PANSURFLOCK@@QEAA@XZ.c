void __fastcall PANSURFLOCK::~PANSURFLOCK(PANSURFLOCK *this)
{
  if ( *(_QWORD *)this )
    MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt(this);
  if ( *((_QWORD *)this + 2) )
    PANSURFLOCK::vUnLockShadow(this);
}
