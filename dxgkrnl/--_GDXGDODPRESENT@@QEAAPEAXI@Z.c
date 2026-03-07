DXGDODPRESENT *__fastcall DXGDODPRESENT::`scalar deleting destructor'(DXGDODPRESENT *P)
{
  DXGDODPRESENT::~DXGDODPRESENT(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
