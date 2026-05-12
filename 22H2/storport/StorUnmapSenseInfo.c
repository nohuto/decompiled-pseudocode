/*
 * XREFs of StorUnmapSenseInfo @ 0x1C0008EC0
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C00077D4 (RaidUnitReleaseIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     memmove @ 0x1C00201C0 (memmove.c)
 */

void __fastcall StorUnmapSenseInfo(__int64 a1, __int64 a2)
{
  const void *v2; // rsi
  unsigned __int8 v3; // bp
  __int64 v6; // r12
  const void **v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v9; // rbx
  int v10; // r13d
  unsigned int v11; // r10d
  unsigned int i; // r11d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  char v17; // al
  int v18; // ecx
  unsigned int v19; // r13d
  void *Pool; // rax
  const void *v21; // rbp

  v2 = 0LL;
  v3 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_BYTE *)(a1 + 16) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 168);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 2) != 40 )
      {
        v10 = *(_DWORD *)(v9 + 12);
        v7 = (const void **)(v9 + 32);
        v8 = (unsigned __int8 *)(v9 + 11);
        goto LABEL_11;
      }
      v6 = *(_QWORD *)(a1 + 168);
      v10 = *(_DWORD *)(v9 + 24);
      if ( !*(_DWORD *)(v9 + 20) )
      {
        v11 = *(_DWORD *)(v9 + 56);
        for ( i = 0; i < v11; ++i )
        {
          v13 = *(unsigned int *)(v9 + 4LL * i + 120);
          if ( (unsigned int)v13 >= 0x80 )
          {
            v14 = *(unsigned int *)(v9 + 16);
            if ( (unsigned int)v13 <= (unsigned int)v14 )
            {
              v15 = (unsigned int)v13;
              v16 = *(_DWORD *)(v13 + v9);
              if ( v16 == 64 )
              {
                if ( v15 + 40 <= v14 )
                  goto LABEL_10;
              }
              else
              {
                v18 = v16 - 65;
                if ( v18 )
                {
                  if ( v18 == 1 && v15 + 40 <= v14 )
                  {
                    v7 = (const void **)(v15 + v9 + 24);
                    v8 = (unsigned __int8 *)(v15 + v9 + 9);
LABEL_11:
                    v3 = *v8;
                    v2 = *v7;
                    break;
                  }
                }
                else if ( v15 + 56 <= v14 )
                {
LABEL_10:
                  v7 = (const void **)(v15 + v9 + 16);
                  v8 = (unsigned __int8 *)(v15 + v9 + 9);
                  goto LABEL_11;
                }
              }
            }
          }
        }
      }
      v17 = *(_BYTE *)(v9 + 3);
      if ( v17 < 0 )
      {
        if ( (v10 & 0x200000) != 0 && v3 )
        {
          v19 = v3;
          Pool = (void *)RaidAllocatePool(512LL, v3, 1230201170LL, a2);
          v21 = Pool;
          if ( Pool )
          {
            memmove(Pool, v2, v19);
            *v7 = v21;
            if ( *(_BYTE *)(v9 + 2) == 40 )
              *(_DWORD *)(v6 + 24) |= 0x400u;
            else
              *(_DWORD *)(v9 + 12) |= 0x400u;
          }
          else
          {
            *v7 = *(const void **)(a1 + 200);
            *v8 = *(_BYTE *)(a1 + 208);
            *(_BYTE *)(v9 + 3) &= ~0x80u;
          }
        }
        else
        {
          if ( v3 >= *(_BYTE *)(a1 + 208) )
            v3 = *(_BYTE *)(a1 + 208);
          if ( v3 )
            memmove(*(void **)(a1 + 200), v2, v3);
          else
            *(_BYTE *)(v9 + 3) = v17 & 0x7F;
          *v7 = *(const void **)(a1 + 200);
          *v8 = v3;
        }
      }
      else
      {
        *v7 = *(const void **)(a1 + 200);
        *v8 = *(_BYTE *)(a1 + 208);
      }
    }
  }
}
