CBaseReferenceClock *__fastcall sub_1400AE9A0(CBaseReferenceClock *P, char a2)
{
  CBaseReferenceClock::~CBaseReferenceClock(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
