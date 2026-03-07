void __fastcall ViMiscEnforceRule(__int64 a1, __int64 a2, char a3)
{
  if ( (VfRuleClasses & 0x400000) != 0 || !VfUtilIsSignedDriver() )
  {
    if ( a3 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x8BuLL, 0LL, 0LL, 0LL);
  }
}
