_QWORD *__fastcall DMM::AutoBuffer<unsigned int>::`vector deleting destructor'(_QWORD *P, char a2)
{
  DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
