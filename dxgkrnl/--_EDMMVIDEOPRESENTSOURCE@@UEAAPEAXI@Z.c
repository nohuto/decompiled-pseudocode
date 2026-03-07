DMMVIDEOPRESENTSOURCE *__fastcall DMMVIDEOPRESENTSOURCE::`vector deleting destructor'(
        DMMVIDEOPRESENTSOURCE *P,
        char a2)
{
  DMMVIDEOPRESENTSOURCE::~DMMVIDEOPRESENTSOURCE(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
