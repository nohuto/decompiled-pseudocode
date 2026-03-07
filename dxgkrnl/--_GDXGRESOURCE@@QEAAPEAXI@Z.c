DXGRESOURCE *__fastcall DXGRESOURCE::`scalar deleting destructor'(DXGRESOURCE *P)
{
  DXGRESOURCE::~DXGRESOURCE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
