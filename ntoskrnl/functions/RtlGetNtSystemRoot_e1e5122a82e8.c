char *__fastcall RtlGetNtSystemRoot(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return (char *)&PsGetCurrentServerSiloGlobals()[82].Blink[1].Blink + 6;
  else
    return (char *)0xFFFFF78000000030LL;
}
