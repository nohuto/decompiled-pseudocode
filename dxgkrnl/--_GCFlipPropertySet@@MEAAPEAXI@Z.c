/*
 * XREFs of ??_GCFlipPropertySet@@MEAAPEAXI@Z @ 0x1C007EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipPropertySetBase@@MEAA@XZ @ 0x1C00847C4 (--1CFlipPropertySetBase@@MEAA@XZ.c)
 */

CFlipPropertySetBase *__fastcall CFlipPropertySet::`scalar deleting destructor'(CFlipPropertySetBase *P, char a2)
{
  *(_QWORD *)P = &CFlipPropertySet::`vftable';
  CFlipPropertySetBase::~CFlipPropertySetBase(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
