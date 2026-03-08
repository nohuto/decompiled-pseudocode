/*
 * XREFs of ??_E?$AutoBuffer@I@DMM@@UEAAPEAXI@Z @ 0x1C0067A40
 * Callers:
 *     ??_E?$AutoBuffer@I@DMM@@WBI@EAAPEAXI@Z @ 0x1C0027B60 (--_E-$AutoBuffer@I@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C001F9F4 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<unsigned int>::`vector deleting destructor'(_QWORD *P, char a2)
{
  DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
