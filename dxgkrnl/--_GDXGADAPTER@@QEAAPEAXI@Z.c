DXGADAPTER *__fastcall DXGADAPTER::`scalar deleting destructor'(DXGADAPTER *P)
{
  DXGADAPTER::~DXGADAPTER(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
