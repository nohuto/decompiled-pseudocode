/*
 * XREFs of ?Clear@ActivationHints@@UEAAJXZ @ 0x180439E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x180439980 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

__int64 __fastcall ActivationHints::Clear(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  ActivationHints::Hint *Ptr; // rbp
  ActivationHints::Hint *v4; // rbx

  v2 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  Ptr = (ActivationHints::Hint *)this[8].Ptr;
  v4 = (ActivationHints::Hint *)this[7].Ptr;
  if ( v4 != Ptr )
  {
    do
    {
      ActivationHints::Hint::~Hint(v4);
      v4 = (ActivationHints::Hint *)((char *)v4 + 80);
    }
    while ( v4 != Ptr );
    v4 = (ActivationHints::Hint *)this[7].Ptr;
  }
  this[8].Ptr = v4;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
