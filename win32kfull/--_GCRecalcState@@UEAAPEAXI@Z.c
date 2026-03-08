/*
 * XREFs of ??_GCRecalcState@@UEAAPEAXI@Z @ 0x1C00FC3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRecalcState@@UEAA@XZ @ 0x1C00FC3F0 (--1CRecalcState@@UEAA@XZ.c)
 */

CRecalcState *__fastcall CRecalcState::`scalar deleting destructor'(CRecalcState *this, char a2)
{
  CRecalcState::~CRecalcState(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
