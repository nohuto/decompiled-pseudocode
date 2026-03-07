DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::`scalar deleting destructor'(DMMVIDPNSOURCE *P, char a2)
{
  DMMVIDPNSOURCE::~DMMVIDPNSOURCE(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
