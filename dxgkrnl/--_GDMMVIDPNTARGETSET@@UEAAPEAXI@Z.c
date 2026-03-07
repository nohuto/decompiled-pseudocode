DMMVIDPNTARGETSET *__fastcall DMMVIDPNTARGETSET::`scalar deleting destructor'(DMMVIDPNTARGETSET *P, char a2)
{
  DMMVIDPNTARGETSET::~DMMVIDPNTARGETSET(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
