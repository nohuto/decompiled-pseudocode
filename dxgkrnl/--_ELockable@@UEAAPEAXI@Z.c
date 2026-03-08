/*
 * XREFs of ??_ELockable@@UEAAPEAXI@Z @ 0x1C0069EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Lockable@@UEAA@XZ @ 0x1C03B44E4 (--1Lockable@@UEAA@XZ.c)
 */

Lockable *__fastcall Lockable::`vector deleting destructor'(Lockable *P, char a2)
{
  Lockable::~Lockable(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
