/*
 * XREFs of ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C0008320
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01A9B88 (--1DXGPROCESS@@MEAA@XZ.c)
 */

DXGPROCESS *__fastcall DXGPROCESS::`scalar deleting destructor'(DXGPROCESS *P, char a2)
{
  DXGPROCESS::~DXGPROCESS(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
