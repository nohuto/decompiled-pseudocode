_QWORD *__fastcall Set<DMMVIDPNTARGET>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
