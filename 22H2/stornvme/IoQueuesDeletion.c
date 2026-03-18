/*
 * XREFs of IoQueuesDeletion @ 0x1C000ABE4
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000E020 (NVMeControllerPowerDown.c)
 *     NVMeControllerStop @ 0x1C000EC50 (NVMeControllerStop.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x1C001F414 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C001FB24 (NVMeIoSubmissionQueueDelete.c)
 */

char __fastcall IoQueuesDeletion(__int64 a1)
{
  char v2; // si
  unsigned __int16 i; // di
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r8
  __int64 v8; // r9
  unsigned __int16 j; // di
  unsigned __int16 v11; // [rsp+78h] [rbp+38h]
  unsigned __int16 v12; // [rsp+78h] [rbp+38h]
  unsigned __int16 v13; // [rsp+78h] [rbp+38h]
  unsigned __int16 k; // [rsp+78h] [rbp+38h]
  unsigned __int16 m; // [rsp+78h] [rbp+38h]

  v2 = 1;
  v11 = 0;
  if ( *(_WORD *)(a1 + 472) > 4u )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL);
      if ( *(_WORD *)(a1 + 472) <= 4u )
        break;
      ++v11;
    }
    while ( v11 < 0x3E8u );
  }
  v12 = 0;
  if ( *(_WORD *)(a1 + 336) )
  {
    do
    {
      for ( i = 0; i < 0x3E8u; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL);
        v4 = v12;
        if ( !*(_WORD *)(136LL * v12 + *(_QWORD *)(a1 + 872) + 128) )
          break;
      }
      ++v12;
    }
    while ( (unsigned __int16)(v4 + 1) < *(_WORD *)(a1 + 336) );
  }
  v5 = 0;
  v13 = 0;
  if ( *(_WORD *)(a1 + 338) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(a1 + 880);
      if ( *(_BYTE *)(392LL * v6 + v8 + 248) )
      {
        if ( *(_QWORD *)(392LL * v7 + v8 + 256) )
        {
          for ( j = 0; j < *(_WORD *)(a1 + 242); ++j )
          {
            StorPortExtendedFunction(
              90LL,
              a1,
              *(_QWORD *)(*(_QWORD *)(392LL * v5 + *(_QWORD *)(a1 + 880) + 256) + 8LL * j));
            v5 = v13;
          }
        }
      }
      v7 = ++v5;
      v13 = v5;
      v6 = v5;
    }
    while ( v5 < *(_WORD *)(a1 + 338) );
  }
  for ( k = 0; k < *(_WORD *)(a1 + 336); ++k )
  {
    v2 = NVMeIoSubmissionQueueDelete(a1);
    if ( !v2 )
    {
      *(_DWORD *)(a1 + 36) = 15;
      StorPortExtendedFunction(98LL, a1, 0LL);
    }
  }
  for ( m = 0; m < *(_WORD *)(a1 + 338); ++m )
  {
    v2 = NVMeIoCompletionQueueDelete(a1);
    if ( !v2 )
    {
      *(_DWORD *)(a1 + 36) = 16;
      StorPortExtendedFunction(98LL, a1, 0LL);
    }
  }
  return v2;
}
