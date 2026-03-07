__int64 DwmSyncLPCAllowed(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned __int8)UserIsInVideoPnpCallout() )
    return (unsigned int)-1073741823;
  return v0;
}
