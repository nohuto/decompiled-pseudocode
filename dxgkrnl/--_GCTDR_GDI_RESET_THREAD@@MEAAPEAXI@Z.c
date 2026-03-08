/*
 * XREFs of ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1C0308790
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTDR_GDI_RESET_THREAD@@MEAA@XZ @ 0x1C03086F0 (--1CTDR_GDI_RESET_THREAD@@MEAA@XZ.c)
 */

PVOID *__fastcall CTDR_GDI_RESET_THREAD::`scalar deleting destructor'(PVOID *P, char a2)
{
  CTDR_GDI_RESET_THREAD::~CTDR_GDI_RESET_THREAD(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x52445476u);
  return P;
}
