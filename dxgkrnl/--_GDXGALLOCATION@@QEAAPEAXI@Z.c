DXGALLOCATION *__fastcall DXGALLOCATION::`scalar deleting destructor'(DXGALLOCATION *P)
{
  DXGALLOCATION::~DXGALLOCATION(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
