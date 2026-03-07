_QWORD *__fastcall Set<DMMVIDPNSOURCE>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
