/*
 * XREFs of PpmParkReportSoftParkChange @ 0x14057DAEC
 * Callers:
 *     PpmPerfAction @ 0x1402C5070 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x1405256EC (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140579638 (PpmEventCoreParkingSoftParkedStateChange.c)
 */

char __fastcall PpmParkReportSoftParkChange(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v2 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = ((unsigned __int64)qword_140C12A38[v2 >> 6] >> (v2 & 0x3F)) & 1;
  KeTransitionProcessorParkState(a1, v3 + 1);
  v4 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6;
  v5 = 1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F);
  if ( (_BYTE)v3 )
    _InterlockedOr64(&qword_140C12988[v4], v5);
  else
    _InterlockedAnd64(&qword_140C12988[v4], ~v5);
  *(_BYTE *)(a1 + 32819) = v3;
  return PpmEventCoreParkingSoftParkedStateChange(a1, v3);
}
