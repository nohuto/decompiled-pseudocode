DXGDOORBELL *__fastcall DXGDOORBELL::`scalar deleting destructor'(DXGDOORBELL *P)
{
  DXGDOORBELL::~DXGDOORBELL(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
