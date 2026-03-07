DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::`scalar deleting destructor'(DXGDIAGNOSTICS *P)
{
  DXGDIAGNOSTICS::~DXGDIAGNOSTICS(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
