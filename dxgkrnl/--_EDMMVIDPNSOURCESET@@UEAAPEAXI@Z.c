DMMVIDPNSOURCESET *__fastcall DMMVIDPNSOURCESET::`vector deleting destructor'(DMMVIDPNSOURCESET *P, char a2)
{
  DMMVIDPNSOURCESET::~DMMVIDPNSOURCESET(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
