/*
 * XREFs of IoctlQueryReservedQueueEntries @ 0x1C001BAD4
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 */

__int64 __fastcall IoctlQueryReservedQueueEntries(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v5; // esi
  __int64 v6; // r9
  unsigned __int16 *v7; // rdx
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  int v11; // ecx
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  unsigned __int16 i; // r10
  __int64 v15; // r9
  _WORD *v16; // r15
  __int16 v17; // cx
  unsigned __int16 v18; // r11
  __int64 v19; // rdx

  v2 = 16LL;
  v5 = 16;
  if ( *(_WORD *)(a1 + 838) )
  {
    v6 = *(unsigned __int16 *)(a1 + 838);
    v7 = (unsigned __int16 *)(*(_QWORD *)(a1 + 824) + 34LL);
    do
    {
      if ( *(v7 - 5) )
        v5 += 48 * *v7 + 48;
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v8 = *(_QWORD *)(a2 + 64);
    v2 = 60LL;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
  }
  if ( *(_WORD *)(a1 + 810) )
  {
    v9 = *(unsigned int *)(a2 + v2);
    if ( v9 >= (unsigned __int64)v5 + 28 )
    {
      NVMeZeroMemory((void *)(v8 + 28), v9 - 28);
      v12 = *(_WORD *)(a1 + 838);
      v13 = v8 + 44;
      for ( i = 0; i < v12; ++i )
      {
        v15 = *(_QWORD *)(a1 + 824) + 48LL * i;
        if ( *(_WORD *)(v15 + 24) )
        {
          v16 = (_WORD *)(v13 + 34);
          v17 = *(_WORD *)(v13 + 32);
          v18 = 0;
          *(_QWORD *)v13 = *(_QWORD *)v15;
          *(_QWORD *)(v13 + 16) = *(_QWORD *)(v15 + 16);
          *(_WORD *)(v13 + 24) = *(_WORD *)(v15 + 24);
          *(_WORD *)(v13 + 26) = *(_WORD *)(v15 + 26);
          *(_WORD *)(v13 + 32) ^= (*(_WORD *)(v15 + 32) ^ v17) & 1;
          *(_WORD *)(v13 + 32) ^= ((unsigned __int8)*(_WORD *)(v13 + 32) ^ (unsigned __int8)*(_WORD *)(v15 + 32)) & 2;
          *(_DWORD *)(v13 + 28) = *(_DWORD *)(v15 + 28);
          v13 += 48LL;
          *v16 = 0;
          v12 = *(_WORD *)(a1 + 838);
          if ( v12 )
          {
            do
            {
              v19 = *(_QWORD *)(a1 + 816) + 48LL * v18;
              if ( *(_WORD *)(v19 + 28) == *(_WORD *)(v15 + 24) )
              {
                *(_QWORD *)v13 = *(_QWORD *)v19;
                *(_QWORD *)(v13 + 16) = *(_QWORD *)(v19 + 16);
                *(_WORD *)(v13 + 24) = *(_WORD *)(v19 + 24);
                *(_WORD *)(v13 + 26) = *(_WORD *)(v19 + 26);
                *(_WORD *)(v13 + 30) ^= (*(_WORD *)(v13 + 30) ^ *(_WORD *)(v19 + 30)) & 1;
                *(_WORD *)(v13 + 28) = *(_WORD *)(v19 + 28);
                *(_WORD *)(v13 + 32) = *(_WORD *)(v19 + 32);
                ++*v16;
                v13 += 48LL;
              }
              v12 = *(_WORD *)(a1 + 838);
              ++v18;
            }
            while ( v18 < v12 );
          }
        }
      }
      v11 = v5;
      *(_WORD *)(v8 + 36) = *(_WORD *)(a1 + 810);
    }
    else
    {
      if ( (unsigned int)v9 < 0x24 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
      v11 = 8;
    }
    *(_BYTE *)(a2 + 3) = 1;
    *(_DWORD *)(v8 + 32) = v5;
    *(_DWORD *)(v8 + 28) = v5;
    *(_DWORD *)(v8 + 24) = v11;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 1;
  }
  return 0LL;
}
