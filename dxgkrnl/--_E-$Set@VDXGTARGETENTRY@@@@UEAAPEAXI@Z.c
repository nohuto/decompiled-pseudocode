_QWORD *__fastcall Set<DXGTARGETENTRY>::`vector deleting destructor'(_QWORD *P, char a2)
{
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
