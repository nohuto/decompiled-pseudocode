void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  if ( *(_QWORD *)this && *((_BYTE *)this + 16) )
  {
    *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
    *((_BYTE *)this + 16) = 0;
  }
  XDCOBJ::vUnlockNoNullSet(this);
  *(_QWORD *)this = 0LL;
}
