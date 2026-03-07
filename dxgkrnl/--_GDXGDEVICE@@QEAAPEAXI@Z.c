DXGDEVICE *__fastcall DXGDEVICE::`scalar deleting destructor'(DXGDEVICE *P)
{
  DXGDEVICE::~DXGDEVICE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
