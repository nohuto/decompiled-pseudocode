/*
 * XREFs of RtlInterlockedSetClearRunEx @ 0x1403293B0
 * Callers:
 *     MiReleaseSmallPteMappings @ 0x14027D4D0 (MiReleaseSmallPteMappings.c)
 *     MiAttemptCoalesce @ 0x14027E1A0 (MiAttemptCoalesce.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiAllocateSlabEntry @ 0x140349850 (MiAllocateSlabEntry.c)
 *     MiInsertSlabEntry @ 0x140349C90 (MiInsertSlabEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetClearRunEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r10
  volatile signed __int32 *v4; // r9
  unsigned __int64 v5; // rbp
  signed __int32 v6; // eax
  int v7; // r8d
  signed __int32 v8; // ett
  signed __int32 v10; // eax
  int v11; // ebx
  signed __int32 v12; // ett
  signed __int32 v13; // eax
  int v14; // ebx
  signed __int32 v15; // ett
  unsigned __int64 v16; // rbp
  volatile signed __int32 *v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx

  v3 = a2 & 0x1F;
  v4 = (volatile signed __int32 *)((*(_QWORD *)(a1 + 8) + (a2 >> 3)) & 0xFFFFFFFFFFFFFFFCuLL);
  v5 = a3;
  if ( v3 + a3 > 0x20 )
  {
    if ( (a2 & 0x1F) != 0 )
    {
      v10 = *v4;
      v11 = ((1 << (32 - (a2 & 0x1F))) - 1) << v3;
      if ( (*v4 & v11) != 0 )
        return 0LL;
      while ( 1 )
      {
        v12 = v10;
        v10 = _InterlockedCompareExchange(v4, v11 | v10, v10);
        if ( v12 == v10 )
          break;
        if ( (v10 & v11) != 0 )
          return 0LL;
      }
      a3 -= 32 - (unsigned int)(a2 & 0x1F);
      ++v4;
    }
    if ( a3 >= 0x20 )
    {
      while ( !_InterlockedCompareExchange(v4, -1, 0) )
      {
        ++v4;
        a3 -= 32LL;
        if ( a3 < 0x20 )
          goto LABEL_12;
      }
      if ( v5 == a3 )
        return 0LL;
      v16 = v5 - a3;
      v17 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
      if ( v3 + v16 <= 0x20 )
      {
        if ( v16 == 32 )
        {
LABEL_38:
          *v17 = 0;
          return 0LL;
        }
LABEL_27:
        _InterlockedAnd(v17, ~(((1 << v16) - 1) << v3));
        return 0LL;
      }
      if ( (a2 & 0x1F) != 0 )
      {
        _InterlockedAnd(v17, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v3));
        v16 -= 32 - (unsigned int)(a2 & 0x1F);
        ++v17;
      }
      if ( v16 >= 0x20 )
      {
        v18 = v16 >> 5;
        v16 += -32LL * (v16 >> 5);
        do
        {
          *v17++ = 0;
          --v18;
        }
        while ( v18 );
      }
      if ( !v16 )
        return 0LL;
    }
    else
    {
LABEL_12:
      if ( !a3 )
        return 1LL;
      v13 = *v4;
      v14 = (1 << a3) - 1;
      if ( (*v4 & v14) == 0 )
      {
        do
        {
          v15 = v13;
          v13 = _InterlockedCompareExchange(v4, v14 | v13, v13);
          if ( v15 == v13 )
            return 1LL;
        }
        while ( (v13 & v14) == 0 );
      }
      v16 = v5 - a3;
      v17 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
      if ( v3 + v16 <= 0x20 )
      {
        if ( v16 == 32 )
          goto LABEL_38;
        goto LABEL_27;
      }
      if ( (a2 & 0x1F) != 0 )
      {
        _InterlockedAnd(v17, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v3));
        v16 -= 32 - (unsigned int)(a2 & 0x1F);
        ++v17;
      }
      if ( v16 >= 0x20 )
      {
        v19 = v16 >> 5;
        v16 += -32LL * (v16 >> 5);
        do
        {
          *v17++ = 0;
          --v19;
        }
        while ( v19 );
      }
      if ( !v16 )
        return 0LL;
    }
    _InterlockedAnd(v17, -1 << v16);
    return 0LL;
  }
  v6 = *v4;
  if ( a3 == 32 )
    v7 = -1;
  else
    v7 = ((1 << a3) - 1) << v3;
  if ( (v6 & v7) == 0 )
  {
    while ( 1 )
    {
      v8 = v6;
      v6 = _InterlockedCompareExchange(v4, v7 | v6, v6);
      if ( v8 == v6 )
        break;
      if ( (v6 & v7) != 0 )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
