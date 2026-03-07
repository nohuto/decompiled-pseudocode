__int64 __fastcall BgSetBootGraphicsInformation(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  if ( !a2 )
    return 3221225485LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
    v5 = BgpFwSetBootGraphicsInformation(v4, a2);
  else
    v5 = -1073741823;
  BgpFwReleaseLock();
  return v5;
}
