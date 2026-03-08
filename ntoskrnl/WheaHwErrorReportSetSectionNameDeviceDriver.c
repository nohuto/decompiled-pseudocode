/*
 * XREFs of WheaHwErrorReportSetSectionNameDeviceDriver @ 0x14060EFA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyA @ 0x1403BD50C (RtlStringCchCopyA.c)
 */

__int64 __fastcall WheaHwErrorReportSetSectionNameDeviceDriver(__int64 a1, unsigned int a2, const char *a3)
{
  if ( !a1 )
    return 3221225711LL;
  if ( a2 > 0x14 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  RtlStringCchCopyA(*(NTSTRSAFE_PSTR *)(a1 + 24), a2, a3);
  return 0LL;
}
