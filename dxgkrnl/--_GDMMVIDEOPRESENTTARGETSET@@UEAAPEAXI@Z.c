DMMVIDEOPRESENTTARGETSET *__fastcall DMMVIDEOPRESENTTARGETSET::`scalar deleting destructor'(
        DMMVIDEOPRESENTTARGETSET *P,
        char a2)
{
  DMMVIDEOPRESENTTARGETSET::~DMMVIDEOPRESENTTARGETSET(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
