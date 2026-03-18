/*
 * XREFs of InitOLEFormats @ 0x1C03B4E70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 InitOLEFormats()
{
  char v0; // dl
  int v1; // ebx
  wchar_t **i; // rdi

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v0 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v0 = 0;
  }
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      13,
      4,
      3,
      13,
      (__int64)&WPP_1c171ce113663c9ff9c000b7a1ac03c0_Traceguids);
  v1 = 0;
  for ( i = off_1C03093C0; (unsigned __int16)UserAddAtomEx(*i, 1LL, 2LL); ++i )
  {
    if ( (unsigned int)++v1 >= 0x15 )
      return 1LL;
  }
  return 0LL;
}
