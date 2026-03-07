__int64 __fastcall MiFastReplenishWithAsync(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx

  v3 = MiReplenishSlabAllocator(a1, a2);
  if ( !v3 )
    MiAsyncSlabReplenish((__int64)a1, 0LL, 1);
  return v3;
}
