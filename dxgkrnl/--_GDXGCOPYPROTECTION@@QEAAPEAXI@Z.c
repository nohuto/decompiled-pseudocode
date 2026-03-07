DXGCOPYPROTECTION *__fastcall DXGCOPYPROTECTION::`scalar deleting destructor'(DXGCOPYPROTECTION *P)
{
  DXGCOPYPROTECTION::~DXGCOPYPROTECTION(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
