_QWORD *__fastcall DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
