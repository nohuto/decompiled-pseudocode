DXGTRACKEDWORKLOAD *__fastcall DXGTRACKEDWORKLOAD::`scalar deleting destructor'(DXGTRACKEDWORKLOAD *P)
{
  DXGTRACKEDWORKLOAD::~DXGTRACKEDWORKLOAD(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
