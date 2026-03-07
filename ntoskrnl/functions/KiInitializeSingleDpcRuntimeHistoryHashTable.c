__int64 __fastcall KiInitializeSingleDpcRuntimeHistoryHashTable(__int64 a1)
{
  __int64 v2; // rsi
  struct _KDPC *v3; // rax
  struct _KDPC *v4; // rbp
  char *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v9; // rbx
  _QWORD *v10; // r9
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rcx
  unsigned int v13; // edi
  __int64 v15; // [rsp+48h] [rbp+10h]

  v2 = KiDpcRuntimeHistoryHashTableAllocate(16LL);
  if ( !v2 )
    return (unsigned int)-1073741801;
  v3 = (struct _KDPC *)KiDpcRuntimeHistoryHashTableAllocate(64LL);
  v4 = v3;
  if ( v3 )
  {
    KeInitializeDpc(v3, (PKDEFERRED_ROUTINE)KiDpcRuntimeHistoryHashTableCleanupDpcRoutine, 0LL);
    if ( !v4->DpcData )
      v4->Number = *(_DWORD *)(a1 + 36) + 2048;
    *(_DWORD *)v2 = 0;
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_DWORD *)(v2 + 4) = 0;
    v5 = (char *)KiDpcRuntimeHistoryHashTableAllocate(512LL);
    if ( v5 )
    {
      if ( (v5 + 512 >= v5 ? 0x40 : 0) != 0 )
        memset64(v5, v2 | 1, v5 + 512 >= v5 ? 0x40 : 0);
      v6 = *(_DWORD *)(v2 + 4);
      v7 = 0LL;
      v8 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (v6 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v9 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v10 = *(_QWORD **)(v9 + 8 * v7);
            if ( ((unsigned __int8)v10 & 1) != 0 )
              break;
            *(_QWORD *)(v9 + 8 * v7) = *v10;
            v15 = v8 & v10[1];
            v11 = (HIBYTE(v15)
                 + 37
                 * (BYTE6(v15)
                  + 37
                  * (BYTE5(v15)
                   + 37
                   * (BYTE4(v15) + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((_BYTE)v15 - 53)))))))) & 0x3F;
            *v10 = *(_QWORD *)&v5[8 * v11];
            *(_QWORD *)&v5[8 * v11] = v10;
          }
          v6 = *(_DWORD *)(v2 + 4);
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < v6 >> 5 );
      }
      v12 = *(struct _PRIVILEGE_SET **)(v2 + 8);
      *(_QWORD *)(v2 + 8) = v5;
      *(_DWORD *)(v2 + 4) = v6 & 0x1F | 0x800;
      if ( v12 )
        CmSiFreeMemory(v12);
      goto LABEL_15;
    }
    if ( *(_DWORD *)(v2 + 4) >= 0x20u )
    {
LABEL_15:
      *(_QWORD *)(a1 + 13072) = v2;
      v13 = 0;
      *(_QWORD *)(a1 + 13080) = v4;
      return v13;
    }
  }
  v13 = -1073741801;
  CmSiFreeMemory((PPRIVILEGE_SET)v2);
  if ( v4 )
    CmSiFreeMemory((PPRIVILEGE_SET)v4);
  return v13;
}
