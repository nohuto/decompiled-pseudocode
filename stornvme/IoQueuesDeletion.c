char __fastcall IoQueuesDeletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  unsigned __int16 i; // di
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // r8
  __int64 v11; // r9
  unsigned __int16 j; // di
  unsigned __int16 v14; // [rsp+78h] [rbp+38h]
  unsigned __int16 v15; // [rsp+78h] [rbp+38h]
  unsigned __int16 v16; // [rsp+78h] [rbp+38h]
  unsigned __int16 k; // [rsp+78h] [rbp+38h]
  unsigned __int16 m; // [rsp+78h] [rbp+38h]

  v5 = 1;
  v14 = 0;
  if ( *(_WORD *)(a1 + 472) > 4u )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      if ( *(_WORD *)(a1 + 472) <= 4u )
        break;
      ++v14;
    }
    while ( v14 < 0x3E8u );
  }
  v15 = 0;
  if ( *(_WORD *)(a1 + 336) )
  {
    do
    {
      for ( i = 0; i < 0x3E8u; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, a4);
        v7 = v15;
        if ( !*(_WORD *)(136LL * v15 + *(_QWORD *)(a1 + 872) + 128) )
          break;
      }
      ++v15;
    }
    while ( (unsigned __int16)(v7 + 1) < *(_WORD *)(a1 + 336) );
  }
  v8 = 0;
  v16 = 0;
  if ( *(_WORD *)(a1 + 338) )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = *(_QWORD *)(a1 + 880);
      if ( *(_BYTE *)(392LL * v9 + v11 + 248) )
      {
        if ( *(_QWORD *)(392LL * v10 + v11 + 256) )
        {
          for ( j = 0; j < *(_WORD *)(a1 + 242); ++j )
          {
            StorPortExtendedFunction(
              90LL,
              a1,
              *(_QWORD *)(*(_QWORD *)(392LL * v8 + *(_QWORD *)(a1 + 880) + 256) + 8LL * j),
              0LL);
            v8 = v16;
          }
        }
      }
      v10 = ++v8;
      v16 = v8;
      v9 = v8;
    }
    while ( v8 < *(_WORD *)(a1 + 338) );
  }
  for ( k = 0; k < *(_WORD *)(a1 + 336); ++k )
  {
    v5 = NVMeIoSubmissionQueueDelete(a1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 36) = 15;
      StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
    }
  }
  for ( m = 0; m < *(_WORD *)(a1 + 338); ++m )
  {
    v5 = NVMeIoCompletionQueueDelete(a1);
    if ( !v5 )
    {
      *(_DWORD *)(a1 + 36) = 16;
      StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
    }
  }
  return v5;
}
