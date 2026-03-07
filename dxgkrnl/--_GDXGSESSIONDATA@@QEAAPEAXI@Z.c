DXGSESSIONDATA *__fastcall DXGSESSIONDATA::`scalar deleting destructor'(DXGSESSIONDATA *P)
{
  DXGSESSIONDATA::~DXGSESSIONDATA(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
