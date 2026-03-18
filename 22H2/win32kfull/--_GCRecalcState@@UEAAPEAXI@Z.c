/*
 * XREFs of ??_GCRecalcState@@UEAAPEAXI@Z @ 0x1C00C2170
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRecalcState@@UEAA@XZ @ 0x1C00C21B0 (--1CRecalcState@@UEAA@XZ.c)
 */

CRecalcState *__fastcall CRecalcState::`scalar deleting destructor'(CRecalcState *this, char a2)
{
  CRecalcState::~CRecalcState(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
