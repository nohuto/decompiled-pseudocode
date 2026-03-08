/*
 * XREFs of UsbhEtwEnableCallback @ 0x1C005B510
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwRundown @ 0x1C005BED0 (UsbhEtwRundown.c)
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_1C006B690 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_1C006B690 = 0;
  }
}
