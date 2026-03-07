BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  if ( Exception <= -1073741753 )
  {
    if ( Exception != -1073741753
      && Exception != -2147483647
      && Exception != -2147483646
      && Exception != -2147483645
      && Exception != -1073741819
      && Exception != -1073741795
      && Exception != -1073741754 )
    {
      return 1;
    }
  }
  else if ( Exception != -1073741684
         && Exception != -1073741676
         && Exception != -1073741674
         && Exception != -1073741654
         && Exception != -1073740791 )
  {
    return Exception != -1073740768;
  }
  return 0;
}
