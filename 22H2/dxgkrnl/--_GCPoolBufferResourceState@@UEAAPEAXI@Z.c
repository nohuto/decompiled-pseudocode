/*
 * XREFs of ??_GCPoolBufferResourceState@@UEAAPEAXI@Z @ 0x1C006C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C006BFAC (--1CFlipResourceState@@MEAA@XZ.c)
 */

CFlipResourceState *__fastcall CPoolBufferResourceState::`scalar deleting destructor'(CFlipResourceState *P, char a2)
{
  *(_QWORD *)P = &CPoolBufferResourceState::`vftable';
  CFlipResourceState::~CFlipResourceState(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
