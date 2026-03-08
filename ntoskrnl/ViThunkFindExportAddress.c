/*
 * XREFs of ViThunkFindExportAddress @ 0x140B4F0CC
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x140B4F010 (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall ViThunkFindExportAddress(__int64 a1, unsigned __int64 a2, int *a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v6; // ebp
  int v7; // ebx
  __int64 v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // r10
  __int64 v11; // r12
  __int64 v12; // r15
  int v13; // ecx
  unsigned int v14; // r9d
  char *v15; // rax
  __int64 v16; // r11
  char v17; // r8
  int v18; // eax
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r11
  int v23; // edx
  __int64 v24; // r10
  unsigned __int16 v25; // cx
  unsigned __int64 v27; // [rsp+60h] [rbp+8h] BYREF
  char *v28; // [rsp+68h] [rbp+10h]

  v28 = (char *)a2;
  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 16);
  *a3 = 0;
  v6 = 0;
  if ( v4 == (_QWORD *)(a1 + 16) )
    return 0LL;
  v7 = 1;
  while ( 1 )
  {
    v8 = v4[6];
    LOBYTE(a2) = 1;
    v9 = (_DWORD *)RtlImageDirectoryEntryToData(v8, a2, 0, (int)&v27);
    v10 = v9;
    if ( v9 )
    {
      v11 = v8 + (unsigned int)v9[8];
      v12 = v8 + (unsigned int)v9[9];
      v13 = v9[6] - 1;
      v14 = 0;
      do
      {
        a2 = (v13 + v14) >> 1;
        v27 = a2;
        v15 = v28;
        v16 = v8 + *(unsigned int *)(v11 + 4 * a2) - (_QWORD)v28;
        while ( 1 )
        {
          v17 = *v15;
          if ( *v15 != v15[v16] )
            break;
          ++v15;
          if ( !v17 )
          {
            v18 = 0;
            goto LABEL_9;
          }
        }
        v18 = (unsigned __int8)*v15 < (unsigned __int8)v15[v16] ? -1 : 1;
LABEL_9:
        if ( v18 < 0 )
        {
          if ( !(_DWORD)a2 )
            goto LABEL_26;
          v13 = a2 - 1;
        }
        else
        {
          if ( v18 <= 0 )
            break;
          v14 = a2 + 1;
        }
      }
      while ( v13 >= v14 );
      if ( v13 >= (int)v14 )
      {
        v19 = v10[5];
        v20 = *(unsigned __int16 *)(v12 + 2 * v27);
        if ( (unsigned int)v20 < v19 )
          break;
      }
    }
LABEL_26:
    if ( ++v6 != 2 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 != v3 )
        continue;
    }
    return 0LL;
  }
  v21 = (unsigned int)v10[7];
  v22 = v21 + v8;
  v23 = *(_DWORD *)(v21 + v8 + 4 * v20);
  v24 = v8 + *(unsigned int *)(v21 + 4 * v20 + v8);
  v25 = 0;
  if ( v19 )
  {
    while ( v25 == (_WORD)v20 || *(_DWORD *)(v22 + 4LL * v25) != v23 )
    {
      if ( ++v25 >= v19 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v7 = 0;
  }
  *a3 = v7;
  return v24;
}
