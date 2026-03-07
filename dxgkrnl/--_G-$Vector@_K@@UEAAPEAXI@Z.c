_QWORD *__fastcall Vector<unsigned __int64>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = &Vector<unsigned __int64>::`vftable';
  v4 = (void *)P[3];
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
