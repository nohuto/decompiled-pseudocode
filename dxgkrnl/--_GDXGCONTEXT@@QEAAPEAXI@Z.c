DXGCONTEXT *__fastcall DXGCONTEXT::`scalar deleting destructor'(DXGCONTEXT *P)
{
  DXGCONTEXT::~DXGCONTEXT(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
