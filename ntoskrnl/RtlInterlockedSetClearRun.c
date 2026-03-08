/*
 * XREFs of RtlInterlockedSetClearRun @ 0x14030CDB0
 * Callers:
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiQueuePinDriverAddressLog @ 0x14030C9F8 (MiQueuePinDriverAddressLog.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1405B25C4 (RtlpFcAddDelayedUsageReportToBuffer.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     EtwpFindUserBufferSpace @ 0x1406A1E50 (EtwpFindUserBufferSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearRun(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // r10
  unsigned int v5; // r11d
  unsigned __int64 v6; // rbp
  signed __int32 v7; // eax
  int v8; // edx
  signed __int32 v9; // ett
  int v11; // esi
  signed __int32 v12; // eax
  int v13; // edx
  signed __int32 v14; // ett
  signed __int32 v15; // eax
  int v16; // edx
  signed __int32 v17; // ett
  unsigned int v18; // r9d
  volatile signed __int32 *v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax

  v3 = a2 & 0x1F;
  v4 = (volatile signed __int32 *)((*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
  v5 = a3;
  v6 = a2;
  if ( v3 + (unsigned __int64)a3 <= 0x20 )
  {
    v7 = *v4;
    if ( a3 == 32 )
      v8 = -1;
    else
      v8 = ((1 << a3) - 1) << v3;
    while ( (v7 & v8) == 0 )
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange(v4, v8 | v7, v7);
      if ( v9 == v7 )
        return 1LL;
    }
    return 0LL;
  }
  v11 = a2 & 0x1F;
  if ( (a2 & 0x1F) == 0 )
    goto LABEL_12;
  v12 = *v4;
  v13 = ((1 << (32 - v11)) - 1) << v3;
  do
  {
    if ( (v12 & v13) != 0 )
      return 0LL;
    v14 = v12;
    v12 = _InterlockedCompareExchange(v4, v13 | v12, v12);
  }
  while ( v14 != v12 );
  v5 = a3 - (32 - v11);
  for ( ++v4; ; ++v4 )
  {
LABEL_12:
    if ( v5 < 0x20 )
    {
      if ( !v5 )
        return 1LL;
      v15 = *v4;
      v16 = (1 << v5) - 1;
      while ( (v15 & v16) == 0 )
      {
        v17 = v15;
        v15 = _InterlockedCompareExchange(v4, v16 | v15, v15);
        if ( v17 == v15 )
          return 1LL;
      }
      v18 = a3 - v5;
      v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v6 >> 5));
      if ( v3 + (unsigned __int64)(a3 - v5) > 0x20 )
      {
        if ( v11 )
        {
          _InterlockedAnd(v19, ~(((1 << (32 - v11)) - 1) << v3));
          v18 -= 32 - v11;
          ++v19;
        }
        if ( v18 >= 0x20 )
        {
          v21 = (unsigned __int64)v18 >> 5;
          do
          {
            *v19 = 0;
            v18 -= 32;
            ++v19;
            --v21;
          }
          while ( v21 );
        }
        goto LABEL_36;
      }
LABEL_38:
      if ( v18 == 32 )
        *v19 = 0;
      else
        _InterlockedAnd(v19, ~(((1 << v18) - 1) << v3));
      return 0LL;
    }
    if ( _InterlockedCompareExchange(v4, -1, 0) )
      break;
    v5 -= 32;
  }
  if ( a3 == v5 )
    return 0LL;
  v18 = a3 - v5;
  v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (v6 >> 5));
  if ( v3 + (unsigned __int64)(a3 - v5) <= 0x20 )
    goto LABEL_38;
  if ( v11 )
  {
    _InterlockedAnd(v19, ~(((1 << (32 - v11)) - 1) << v3));
    v18 -= 32 - v11;
    ++v19;
  }
  if ( v18 >= 0x20 )
  {
    v20 = (unsigned __int64)v18 >> 5;
    do
    {
      *v19 = 0;
      v18 -= 32;
      ++v19;
      --v20;
    }
    while ( v20 );
  }
LABEL_36:
  if ( v18 )
    _InterlockedAnd(v19, -1 << v18);
  return 0LL;
}
