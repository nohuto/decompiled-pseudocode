__int64 __fastcall FreeSMS(__int64 a1)
{
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
