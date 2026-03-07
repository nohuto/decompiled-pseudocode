DXGPAGINGQUEUE *__fastcall DXGPAGINGQUEUE::`scalar deleting destructor'(DXGPAGINGQUEUE *P)
{
  DXGPAGINGQUEUE::~DXGPAGINGQUEUE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
