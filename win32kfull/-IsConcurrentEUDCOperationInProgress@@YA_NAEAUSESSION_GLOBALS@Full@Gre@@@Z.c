char __fastcall IsConcurrentEUDCOperationInProgress(struct Gre::Full::SESSION_GLOBALS *a1)
{
  if ( !*((_DWORD *)a1 + 3325) )
    return 0;
  EngSetLastError(0xA7u);
  return 1;
}
