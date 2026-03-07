__int64 __fastcall EmonIsModifiedByBadActor(unsigned int a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  if ( a1 >= EmonNumberArchCounters )
    v3 = (15LL << (4 * ((unsigned __int8)a1 - (unsigned __int8)EmonNumberArchCounters))) & __readmsr(0x38Du);
  else
    v3 = __readmsr(a1 + 390);
  return EmonIsModifiedByBadActorInternal(a1, v3, a2);
}
