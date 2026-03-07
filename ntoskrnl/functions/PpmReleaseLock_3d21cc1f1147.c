void __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
  {
    KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread());
    KeLeaveCriticalRegion();
  }
}
