/*
 * XREFs of MiRebuildLargeZeroPage @ 0x1402C87A0
 * Callers:
 *     MiRebuildLargePagesThread @ 0x140392FA0 (MiRebuildLargePagesThread.c)
 * Callees:
 *     MiCoalesceFreeLargePages @ 0x1402C89C0 (MiCoalesceFreeLargePages.c)
 */

__int64 __fastcall MiRebuildLargeZeroPage(__int64 a1)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // rsi
  unsigned __int64 v8; // r10
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  volatile signed __int32 *v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rsi
  _BYTE *v20; // rbx
  unsigned __int64 v21; // r10
  _WORD *v22; // rbx
  unsigned __int64 i; // r14
  unsigned __int64 v24; // rdx

  v2 = qword_140C65820 + 1;
  v3 = 0LL;
  v4 = 0LL;
LABEL_2:
  v5 = *(_QWORD *)(a1 + 16056);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 16064);
  if ( v4 >= v5 )
    v6 = 0LL;
  v8 = v5 - 1;
  while ( 1 )
  {
    if ( v8 - v6 != -1LL )
    {
      v9 = (_QWORD *)(v7 + 8 * (v6 >> 6));
      v10 = ~*v9 | ((1LL << (v6 & 0x3F)) - 1);
      if ( v10 == -1 )
      {
        while ( (unsigned __int64)++v9 <= v7 + 8 * (v8 >> 6) )
        {
          v10 = ~*v9;
          if ( *v9 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        _BitScanForward64(&v11, ~v10);
        v12 = v11 + (((__int64)v9 - v7) >> 3 << 6);
        if ( v12 <= v8 && v12 != -1LL )
        {
          v14 = v12 & 0x1F;
          LOBYTE(v15) = 1;
          v16 = v12 << 18;
          v17 = (volatile signed __int32 *)(v7 + 4 * (v12 >> 5));
          if ( v14 + 1 <= 0x20 )
          {
            v18 = ~(1 << v14);
            goto LABEL_17;
          }
          if ( (v12 & 0x1F) == 0 )
            goto LABEL_38;
          _InterlockedAnd(v17, ~(((1 << (32 - (v12 & 0x1F))) - 1) << v14));
          v15 = 1LL - (32 - (unsigned int)(v12 & 0x1F));
          ++v17;
          if ( v15 >= 0x20 )
          {
            v24 = v15 >> 5;
            v15 += -32LL * (v15 >> 5);
            do
            {
              *v17++ = 0;
              --v24;
            }
            while ( v24 );
          }
          if ( v15 )
          {
LABEL_38:
            v18 = -1 << v15;
LABEL_17:
            _InterlockedAnd(v17, v18);
          }
          v4 = v12 + 1;
          v19 = 512LL;
          v20 = (_BYTE *)(*(_QWORD *)(a1 + 16048) + (v12 << 9));
          do
          {
            if ( *v20 == 32 )
              MiCoalesceFreeLargePages(a1, v16, 2LL);
            v16 += 512LL;
            ++v20;
            --v19;
          }
          while ( v19 );
          goto LABEL_2;
        }
      }
    }
    if ( !v6 )
      break;
    v21 = v4 + 1;
    if ( v4 + 1 > v5 )
      v21 = *(_QWORD *)(a1 + 16056);
    v8 = v21 - 1;
    v6 = 0LL;
  }
  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 16080), 0);
  if ( (_DWORD)result )
  {
    v22 = *(_WORD **)(a1 + 16072);
    for ( i = v2 >> 18; i; --i )
    {
      if ( *v22 == 512 )
        result = MiCoalesceFreeLargePages(a1, v3, 1LL);
      ++v22;
      v3 += 0x40000LL;
    }
  }
  return result;
}
