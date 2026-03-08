/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C018277C
 * Callers:
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BA1C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

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
