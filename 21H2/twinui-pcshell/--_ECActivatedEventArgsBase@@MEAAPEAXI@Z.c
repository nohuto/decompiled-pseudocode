/*
 * XREFs of ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x1804E1D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x180078838 (--1CActivatedEventArgsBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 */

CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::`vector deleting destructor'(
        CActivatedEventArgsBase *this,
        char a2)
{
  CActivatedEventArgsBase::~CActivatedEventArgsBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
