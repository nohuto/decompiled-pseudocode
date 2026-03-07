__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2)
{
  bool v2; // zf

  v2 = KiPristineTriageDump == 0;
  *a2 = 0;
  if ( v2 || (KiBugcheckRecoveryDumpPolicy & 0xF) == 1 )
  {
    if ( !IoDemoteToTriageDump() )
      return 3221225473LL;
    *a2 = 1;
  }
  if ( !byte_140C424A1 )
    KiInvokeBugCheckAddTriageDumpDataCallbacks(0);
  return IoCapturePristineTriageDump(
           KiBugCheckData,
           qword_140C42448,
           xmmword_140C42450,
           *((__int64 *)&xmmword_140C42450 + 1),
           qword_140C42460,
           KiCrashDumpContext,
           qword_140C42488,
           qword_140C42490 == 0);
}
