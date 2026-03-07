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
