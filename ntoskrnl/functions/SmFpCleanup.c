void __fastcall SmFpCleanup(__int64 a1)
{
  unsigned __int16 *v2; // r14
  unsigned int v3; // ebx
  void **v4; // rsi
  void **v5; // rdi

  v2 = (unsigned __int16 *)(a1 + 96);
  v3 = 0;
  v4 = (void **)(a1 + 40);
  do
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      if ( !*v4 )
        break;
      *v4 = *v5;
      if ( v3 < 5 )
      {
        if ( v3 == 2 )
        {
          SmKmFreeMdlForLock(*(_QWORD *)(a1 + 32), v5[1]);
        }
        else if ( v3 == 3 )
        {
          SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), (unsigned __int64)*v2 << 12, 1LL, 1LL);
        }
        else
        {
          ExFreePoolWithTag(v5[1], 0);
        }
      }
      else
      {
        MmFreeMappingAddress(v5[1], 0x6D526D73u);
      }
      ExFreePoolWithTag(v5, 0);
    }
    ++v3;
    ++v4;
    ++v2;
  }
  while ( v3 < 6 );
}
