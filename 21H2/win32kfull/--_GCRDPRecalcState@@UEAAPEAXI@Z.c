/*
 * XREFs of ??_GCRDPRecalcState@@UEAAPEAXI@Z @ 0x1C0110CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRecalcState@@UEAA@XZ @ 0x1C0110CF0 (--1CRecalcState@@UEAA@XZ.c)
 */

CRDPRecalcState *__fastcall CRDPRecalcState::`scalar deleting destructor'(CRDPRecalcState *this, char a2)
{
  CRecalcState::~CRecalcState(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
