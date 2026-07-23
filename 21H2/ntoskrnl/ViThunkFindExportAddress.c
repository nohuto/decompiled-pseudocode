/*
 * XREFs of ViThunkFindExportAddress @ 0x140A50010
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x140A4FF6C (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 */

char *__fastcall ViThunkFindExportAddress(__int64 a1, char *a2, int *a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v6; // ebp
  int v7; // ebx
  char *v8; // rsi
  _DWORD *v9; // rax
  _DWORD *v10; // r10
  int v11; // edx
  char *v12; // r12
  char *v13; // r15
  int v14; // ecx
  __int64 v15; // r8
  char *v16; // rax
  char *v17; // r11
  char v18; // r9
  int v19; // eax
  unsigned int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rcx
  char *v23; // r11
  int v24; // edx
  char *v25; // r10
  unsigned __int16 v26; // cx
  __int64 Size; // [rsp+60h] [rbp+8h] BYREF
  char *v29; // [rsp+68h] [rbp+10h]

  v29 = a2;
  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 16);
  *a3 = 0;
  v6 = 0;
  if ( v4 == (_QWORD *)(a1 + 16) )
    return 0LL;
  v7 = 1;
  while ( 1 )
  {
    v8 = (char *)v4[6];
    v9 = RtlImageDirectoryEntryToData(v8, 1u, 0, (PULONG)&Size);
    v10 = v9;
    if ( v9 )
    {
      v11 = 0;
      v12 = &v8[v9[8]];
      v13 = &v8[v9[9]];
      v14 = v9[6] - 1;
      while ( 1 )
      {
        v15 = (unsigned int)(v14 + v11) >> 1;
        Size = v15;
        v16 = v29;
        v17 = (char *)(&v8[*(unsigned int *)&v12[4 * v15]] - v29);
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 != v17[(_QWORD)v16] )
            break;
          ++v16;
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_9;
          }
        }
        v19 = (unsigned __int8)*v16 < (unsigned int)v17[(_QWORD)v16] ? -1 : 1;
LABEL_9:
        if ( v19 >= 0 )
        {
          if ( v19 <= 0 )
            goto LABEL_13;
          v11 = v15 + 1;
          goto LABEL_12;
        }
        if ( !(_DWORD)v15 )
          break;
        v14 = v15 - 1;
LABEL_12:
        if ( v14 < (unsigned int)v11 )
          goto LABEL_13;
      }
      v11 = 1;
      v14 = 0;
LABEL_13:
      if ( v14 >= v11 )
      {
        v20 = v10[5];
        v21 = *(unsigned __int16 *)&v13[2 * Size];
        if ( (unsigned int)v21 < v20 )
          break;
      }
    }
    if ( ++v6 != 2 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 != v3 )
        continue;
    }
    return 0LL;
  }
  v22 = (unsigned int)v10[7];
  v23 = &v8[v22];
  v24 = *(_DWORD *)&v8[4 * v21 + v22];
  v25 = &v8[*(unsigned int *)&v8[4 * v21 + v22]];
  v26 = 0;
  if ( v20 )
  {
    while ( v26 == (_WORD)v21 || *(_DWORD *)&v23[4 * v26] != v24 )
    {
      if ( ++v26 >= v20 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v7 = 0;
  }
  *a3 = v7;
  return v25;
}
