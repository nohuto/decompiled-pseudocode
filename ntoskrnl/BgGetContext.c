__int64 BgGetContext()
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v1 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v1 = v2;
  }
  BgpFwReleaseLock();
  return v1;
}
