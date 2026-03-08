/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C0187E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x1C0187E04 (--1COPMProtectedOutput@@UEAA@XZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(
        COPMProtectedOutput *P,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  COPMProtectedOutput::~COPMProtectedOutput(P, a2);
  if ( (v2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x4D504F47u);
  return P;
}
