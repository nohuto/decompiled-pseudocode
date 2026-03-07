DXGVIRTUALMACHINE *__fastcall DXGVIRTUALMACHINE::`scalar deleting destructor'(DXGVIRTUALMACHINE *P)
{
  DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
