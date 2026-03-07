_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140C69380 || MiInPageGapPage(a1);
}
