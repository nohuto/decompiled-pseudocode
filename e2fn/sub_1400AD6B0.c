CBaseReferenceClock *__fastcall sub_1400AD6B0(CBaseReferenceClock *P, char a2)
{
  CBaseReferenceClock::~CBaseReferenceClock(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
