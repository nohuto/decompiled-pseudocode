/*
 * XREFs of DeleteMetricsFont @ 0x1C00C7520
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0063C80 (GetScaledLogFontForDpi.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00C6CC4 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00C74E8 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01E489C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1C00C5A20 (GreMarkDeletableFont.c)
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
