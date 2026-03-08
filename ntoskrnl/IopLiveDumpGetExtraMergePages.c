/*
 * XREFs of IopLiveDumpGetExtraMergePages @ 0x14094B4D0
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094C9E8 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     <none>
 */

char __fastcall IopLiveDumpGetExtraMergePages(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 *v8; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r11d
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  char v21; // bl
  unsigned __int64 v22; // rbp
  int v23; // r13d
  unsigned __int64 v24; // rax
  int v25; // r12d
  __int64 v26; // rdx
  bool v27; // cf
  signed __int64 *v28; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // [rsp+0h] [rbp-78h]
  _QWORD *v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+10h] [rbp-68h]
  unsigned __int64 v34; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+20h] [rbp-58h]
  unsigned __int64 v36; // [rsp+28h] [rbp-50h]

  v5 = a1[30];
  v6 = a1 + 34;
  v7 = a1[24];
  v8 = a1 + 25;
  v32 = a1 + 34;
  if ( v5 == v7 )
  {
    if ( *v6 == *v8 )
      goto LABEL_36;
  }
  else
  {
    v32 = a1 + 34;
  }
  v10 = a1[28];
  v11 = v7 - v5;
  v12 = a1[27];
  v13 = a1[32];
  v35 = v12 + v10 / (unsigned int)BufferChunkSizeInBytes;
  v33 = v12 + v13 / (unsigned int)BufferChunkSizeInBytes;
  v14 = v10;
  v15 = *v8;
  v16 = 0;
  v17 = v15 - *v6;
  v18 = (unsigned int)BufferChunkSizeInBytes;
  v36 = v14 % (unsigned int)BufferChunkSizeInBytes;
  v19 = v13 % (unsigned int)BufferChunkSizeInBytes;
  v34 = v19;
  v20 = 0LL;
  if ( ((unsigned int)BufferChunkSizeInBytes - v36) >> 12 <= v11 )
    v11 = ((unsigned int)BufferChunkSizeInBytes - v36) >> 12;
  v21 = 1;
  if ( ((unsigned int)BufferChunkSizeInBytes - v19) >> 12 <= v17 )
    v17 = ((unsigned int)BufferChunkSizeInBytes - v19) >> 12;
  v31 = v17;
  while ( 1 )
  {
    v22 = 0LL;
    if ( v11 )
    {
      v23 = 1;
      v17 = v31;
      v22 = *(_QWORD *)((a1[29] + 8 * v20) % v18 + *(_QWORD *)(a1[94] + 8 * (a1[27] + (a1[29] + 8 * v20) / v18))) >> 12;
    }
    else
    {
      v23 = 0;
    }
    v24 = 0LL;
    if ( v17 )
    {
      v25 = 1;
      v17 = v31;
      v24 = *(_QWORD *)((a1[33] + 8 * (unsigned __int64)(unsigned int)v20) % v18
                      + *(_QWORD *)(a1[94] + 8 * (a1[27] + (a1[33] + 8 * (unsigned __int64)(unsigned int)v20) / v18))) >> 12;
    }
    else
    {
      v25 = 0;
    }
    v26 = 8LL * (unsigned int)v20;
    if ( !v16 )
    {
      if ( !v23 )
      {
        if ( !v25 )
          goto LABEL_35;
        v16 = 1;
        goto LABEL_31;
      }
      if ( !v25 )
      {
        v16 = 2;
        goto LABEL_31;
      }
      v16 = 2 - (v24 < v22);
    }
    if ( v16 != 1 )
      break;
    if ( !v25 )
      goto LABEL_35;
    if ( v23 )
    {
      v27 = v22 < v24;
      goto LABEL_30;
    }
LABEL_31:
    if ( v16 == 1 )
    {
      v31 = --v17;
      *(_QWORD *)(a2 + 8LL * (unsigned int)v20) = v24;
      v28 = (signed __int64 *)a1[80];
    }
    else
    {
      --v11;
      *(_QWORD *)(a2 + 8LL * (unsigned int)v20) = v22;
      v24 = v22;
      v28 = (signed __int64 *)a1[78];
    }
    _bittestandset64(v28, v24);
    v20 = (unsigned int)(v20 + 1);
  }
  if ( !v23 )
    goto LABEL_35;
  if ( !v25 )
    goto LABEL_31;
  v27 = v24 < v22;
LABEL_30:
  if ( !v27 )
    goto LABEL_31;
LABEL_35:
  if ( (_DWORD)v20 )
  {
    v30 = a1[94];
    if ( v16 == 1 )
    {
      *a5 = v33;
      *a3 = *(_QWORD *)(v30 + 8 * v33) + v34;
      if ( v17 || a1[35] == v33 )
        v21 = 0;
      *v32 += (unsigned int)v20;
      a1[32] += (unsigned int)((_DWORD)v20 << 12);
      a1[33] += v26;
    }
    else
    {
      *a5 = v35;
      *a3 = *(_QWORD *)(v30 + 8 * v35) + v36;
      if ( v11 || a1[31] == v35 )
        v21 = 0;
      a1[30] += (unsigned int)v20;
      a1[28] += (unsigned int)((_DWORD)v20 << 12);
      a1[29] += v26;
    }
    *a4 = v20;
    return v21;
  }
  else
  {
LABEL_36:
    *a4 = 0;
    return 0;
  }
}
