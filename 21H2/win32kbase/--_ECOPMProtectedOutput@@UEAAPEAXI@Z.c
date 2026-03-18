/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C016C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COPMProtectedOutput@@UEAA@XZ @ 0x1C016C890 (--1COPMProtectedOutput@@UEAA@XZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *P, char a2)
{
  COPMProtectedOutput::~COPMProtectedOutput(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x4D504F47u);
  return P;
}
