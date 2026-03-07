struct _LIST_ENTRY *__fastcall RtlGetConsoleSessionForegroundProcessId(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return PsGetCurrentServerSiloGlobals()[82].Blink->Blink;
  else
    return (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000338];
}
