/*
 * XREFs of DeleteMetricsFont @ 0x1C008A250
 * Callers:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0076194 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C008A218 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00F0B8C (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00F0E0C (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01BF14C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C0076A08 (GreMarkDeletableFont.c)
 */

__int64 __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    return GreDeleteObject(a1);
  }
  return result;
}
