DXGOVERLAY *__fastcall DXGOVERLAY::`scalar deleting destructor'(DXGOVERLAY *P)
{
  DXGOVERLAY::~DXGOVERLAY(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
