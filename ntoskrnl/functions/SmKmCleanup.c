void __fastcall SmKmCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET **v2; // rbx
  __int64 v3; // rbp
  struct _PRIVILEGE_SET *v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // r14
  unsigned int Id; // eax

  v2 = (struct _PRIVILEGE_SET **)a1;
  v3 = 32LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = (__int64 *)*v2;
      v6 = 32LL;
      do
      {
        if ( *v5 )
        {
          Id = SmStoreGetId(*v5);
          SmKmStoreDelete(a1, Id, 0);
        }
        v5 += 5;
        --v6;
      }
      while ( v6 );
      CmSiFreeMemory(v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
