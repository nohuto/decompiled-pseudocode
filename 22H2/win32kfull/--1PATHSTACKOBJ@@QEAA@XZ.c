/*
 * XREFs of ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C016AEC4
 * Callers:
 *     GrePolyDraw @ 0x1C029FF08 (GrePolyDraw.c)
 * Callees:
 *     <none>
 */

void __fastcall PATHSTACKOBJ::~PATHSTACKOBJ(PATHSTACKOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((char *)this + 80);
    *((_DWORD *)this + 28) = 0;
  }
}
