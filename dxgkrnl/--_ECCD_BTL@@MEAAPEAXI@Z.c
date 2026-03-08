/*
 * XREFs of ??_ECCD_BTL@@MEAAPEAXI@Z @ 0x1C006A990
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_BTL@@MEAA@XZ @ 0x1C03B7E9C (--1CCD_BTL@@MEAA@XZ.c)
 */

CCD_BTL *__fastcall CCD_BTL::`vector deleting destructor'(CCD_BTL *P, char a2)
{
  CCD_BTL::~CCD_BTL(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
