DXGHWQUEUE *__fastcall DXGHWQUEUE::`scalar deleting destructor'(DXGHWQUEUE *P)
{
  DXGHWQUEUE::~DXGHWQUEUE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
