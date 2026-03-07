void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(struct _ERESOURCE *this)
{
  _DWORD *SharedWaiters; // rax

  DEVLOCKOBJ::vDestructor(this);
  SharedWaiters = this->SharedWaiters;
  if ( SharedWaiters )
  {
    if ( LOBYTE(this->OwnerEntry.OwnerThread) )
    {
      SharedWaiters[10] &= ~2u;
      LOBYTE(this->OwnerEntry.OwnerThread) = 0;
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&this->SharedWaiters);
    this->SharedWaiters = 0LL;
  }
}
