DMMVIDEOPRESENTSOURCESET *__fastcall DMMVIDEOPRESENTSOURCESET::`scalar deleting destructor'(
        DMMVIDEOPRESENTSOURCESET *P,
        char a2)
{
  DMMVIDEOPRESENTSOURCESET::~DMMVIDEOPRESENTSOURCESET(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
