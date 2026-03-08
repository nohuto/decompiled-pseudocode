/*
 * XREFs of PfSnLogHelper @ 0x1407A3FD0
 * Callers:
 *     PfSnLogVolumeCreate @ 0x14078C1D0 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x1407A3E7C (PfSnLogStreamCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x14028D560 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x14030841C (PfSnTraceGetLogEntry.c)
 *     PfSnFailProcessTrace @ 0x14097C804 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = (struct _EX_RUNDOWN_REF *)v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry(v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
      ExReleaseRundownProtection_0(v7 + 45);
    }
    else
    {
      return v7;
    }
  }
  return (struct _EX_RUNDOWN_REF *)v5;
}
