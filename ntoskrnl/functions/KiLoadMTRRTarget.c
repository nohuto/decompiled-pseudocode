ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
