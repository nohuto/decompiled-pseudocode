/*
 * XREFs of EtwLogTraceEvent @ 0x180050CA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceUmEvent @ 0x180050CE4 (EtwpTraceUmEvent.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 */

__int64 __fastcall EtwLogTraceEvent(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v5; // eax

  v2 = 0;
  if ( a2 )
  {
    if ( (a1 & 0x1000000) != 0 )
    {
      return (unsigned int)EtwpTraceUmEvent(a1, a2, 48LL, 3222536192LL);
    }
    else
    {
      v5 = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x100u, 0x30u, a2);
      if ( !v5 )
        return v2;
      return RtlNtStatusToDosError(v5);
    }
  }
  return 87LL;
}
