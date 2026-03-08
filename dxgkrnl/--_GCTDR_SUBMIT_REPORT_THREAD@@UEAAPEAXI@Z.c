/*
 * XREFs of ??_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z @ 0x1C03087E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVP_SYSTEM_THREAD@@MEAA@XZ @ 0x1C0308724 (--1CVP_SYSTEM_THREAD@@MEAA@XZ.c)
 */

CVP_SYSTEM_THREAD *__fastcall CTDR_SUBMIT_REPORT_THREAD::`scalar deleting destructor'(CVP_SYSTEM_THREAD *P, char a2)
{
  CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x52445476u);
  return P;
}
