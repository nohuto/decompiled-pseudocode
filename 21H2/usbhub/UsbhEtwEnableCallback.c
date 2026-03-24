/*
 * XREFs of UsbhEtwEnableCallback @ 0x1C005C340
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwRundown @ 0x1C005CC90 (UsbhEtwRundown.c)
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_1C006C5F0 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_1C006C5F0 = 0;
  }
}
