/*
 * XREFs of MiZeroInflectionPointReached @ 0x140389F8C
 * Callers:
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140389E3C (MiZeroPageCalibrateLastDpcProcessorDone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiZeroInflectionPointReached(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v13; // rax
  int v14; // edx
  unsigned int *v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx

  v1 = *(int *)(a1 + 8);
  if ( !*(_BYTE *)(v1 + a1 + 38) )
  {
    v3 = *(unsigned int *)(a1 + 128);
    if ( (unsigned int)v3 < 4 && (_DWORD)v3 != *(_DWORD *)(a1 + 32) )
      return 0LL;
    v5 = *(_QWORD *)(a1 + 56);
    v6 = -1LL;
    v7 = 0LL;
    v8 = -1LL;
    v9 = v5;
    if ( (_DWORD)v3 )
    {
      v10 = v3;
      do
      {
        v11 = *(_QWORD *)(v9 + 8 * v1);
        if ( v11 < v8 )
          v7 = v9;
        else
          v11 = v8;
        v9 += 16LL;
        v8 = v11;
        --v10;
      }
      while ( v10 );
    }
    if ( (unsigned int)((__int64)(v7 - v5) >> 4) + 4 > (unsigned int)v3 && (_DWORD)v3 != *(_DWORD *)(a1 + 32) )
      return 0LL;
    for ( i = v7; i > v5; i -= 16LL )
    {
      v13 = *(_QWORD *)(i + 8 * v1 - 16);
      if ( v13 && v13 < v8 + v8 / 0xA )
        v7 = i - 16;
    }
    *(_DWORD *)(a1 + 4 * v1 + 48) = ((__int64)(v7 - v5) >> 4) + 1;
    if ( (_DWORD)v3 != *(_DWORD *)(a1 + 32) )
      *(_BYTE *)(v1 + a1 + 38) = 1;
    v14 = 0;
    v15 = (unsigned int *)(a1 + 48);
    v16 = 0LL;
    do
    {
      v17 = *v15;
      if ( (_DWORD)v17 )
      {
        v18 = v16 + 2 * v17;
        if ( *(_QWORD *)(v5 + 8 * v18 - 16) < v6 )
        {
          v6 = *(_QWORD *)(v5 + 8 * v18 - 16);
          *(_BYTE *)(a1 + 36) = v14;
        }
      }
      ++v14;
      ++v16;
      ++v15;
    }
    while ( v14 <= 1 );
  }
  return 1LL;
}
