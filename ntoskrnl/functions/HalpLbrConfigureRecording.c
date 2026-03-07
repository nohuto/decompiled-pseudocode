__int64 __fastcall HalpLbrConfigureRecording(int a1, int a2)
{
  if ( a2 != HalpLbrCurrentHandle || !HalpLbrIsInUse )
    return 3221225485LL;
  HalpLbrConfigurationWorker(a1, 1u);
  return 0LL;
}
