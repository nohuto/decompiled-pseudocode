DMMVIDPNTOPOLOGY *__fastcall DMMVIDPNTOPOLOGY::`vector deleting destructor'(DMMVIDPNTOPOLOGY *P, char a2)
{
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
