/*
 * XREFs of PfSnLogHelper @ 0x14062F03C
 * Callers:
 *     PfSnLogVolumeCreate @ 0x14062E2BC (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x14062EED4 (PfSnLogStreamCreate.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x14029AF20 (PfSnTraceGetLogEntry.c)
 *     PfSnReferenceProcessTrace @ 0x14029E950 (PfSnReferenceProcessTrace.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     PfSnFailProcessTrace @ 0x140735010 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rdi
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry((__int64)v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
    }
    else
    {
      v5 = v7;
      v7 = 0LL;
    }
    if ( v7 )
      ExReleaseRundownProtection(v7 + 45);
  }
  return v5;
}
