/*
 * XREFs of ViPoolLogStackCallout @ 0x1409C5940
 * Callers:
 *     IovpLogStackTrace @ 0x1409C5978 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1409E0398 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CE20 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViPoolLogStackCallout(PVOID *Parameter)
{
  USHORT v2; // ax

  v2 = RtlCaptureStackBackTrace(2u, 0xDu, Parameter + 3, 0LL);
  if ( v2 < 0xDu )
    Parameter[v2 + 3] = 0LL;
}
