char VfDifCallbackReplacementRequested()
{
  int v0; // ecx
  __int64 v1; // rax

  v0 = 0;
  if ( !VfDifIoCallbackThunks )
    return 0;
  v1 = 0LL;
  while ( ((__int64)(&VfDifIoCallbackThunks)[v1 + 1] & 1) == 0 )
  {
    v1 = 4LL * (unsigned int)++v0;
    if ( !(&VfDifIoCallbackThunks)[v1] )
      return 0;
  }
  return 1;
}
