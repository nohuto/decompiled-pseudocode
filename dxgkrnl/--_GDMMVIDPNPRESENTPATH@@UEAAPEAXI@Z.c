DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::`scalar deleting destructor'(DMMVIDPNPRESENTPATH *P, char a2)
{
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
