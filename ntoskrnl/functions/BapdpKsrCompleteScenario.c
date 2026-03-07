__int64 __fastcall BapdpKsrCompleteScenario(int a1, int a2)
{
  if ( (a1 & 0x3000000) != 0 && (a2 & 0x3000000) == 0 && *(&xmmword_140C31690 + 1) )
    return ((__int64 (*)(void))*(&xmmword_140C31690 + 1))();
  else
    return 3221225659LL;
}
