/*
 * XREFs of ViPoolLogStackCallout @ 0x1409C6940
 * Callers:
 *     IovpLogStackTrace @ 0x1409C6978 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1409E1398 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
