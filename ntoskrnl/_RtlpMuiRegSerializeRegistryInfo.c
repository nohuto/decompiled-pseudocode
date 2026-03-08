/*
 * XREFs of _RtlpMuiRegSerializeRegistryInfo @ 0x140843C80
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14039C764 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlpMuiRegSerializeRegistryInfo(__int64 a1, _OWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  size_t v7; // rdx
  char v8; // r8
  _DWORD *v9; // rax
  unsigned int v10; // r15d
  unsigned int v11; // edi
  _DWORD *v12; // rax
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  _QWORD *v21; // rsi
  unsigned int *v22; // rdx
  unsigned int *v23; // rdx
  unsigned int *v24; // rdx
  unsigned int *v25; // rdx
  unsigned int v26; // eax
  const void *v27; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  const void *v32; // rdx
  const void *v33; // rdx

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = *a3;
  if ( (_DWORD)v7 )
  {
    if ( !a2 )
      return (unsigned int)-1073741811;
    v8 = 1;
  }
  else
  {
    if ( a2 )
      return (unsigned int)-1073741811;
    v8 = 0;
  }
  v9 = *(_DWORD **)(a1 + 24);
  v10 = 168;
  v11 = 168;
  if ( v9 )
  {
    if ( (unsigned int)(*v9 + 168) < 0xA8 )
      return (unsigned int)-1073741811;
    v11 = (*v9 + 175) & 0xFFFFFFF8;
  }
  v12 = *(_DWORD **)(a1 + 32);
  if ( v12 )
  {
    v13 = v11 + *v12;
    if ( v13 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v13 + 7) & 0xFFFFFFF8;
  }
  v14 = *(_DWORD **)(a1 + 40);
  if ( v14 )
  {
    v15 = v11 + *v14;
    if ( v15 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v15 + 7) & 0xFFFFFFF8;
  }
  v16 = *(_DWORD **)(a1 + 56);
  if ( v16 )
  {
    v29 = v11 + *v16;
    if ( v29 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v29 + 7) & 0xFFFFFFF8;
  }
  v17 = *(_DWORD *)(a1 + 148);
  if ( v17 && *(_QWORD *)(a1 + 128) )
  {
    v30 = v11 + v17;
    if ( v30 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v30 + 7) & 0xFFFFFFF8;
  }
  v18 = *(_DWORD *)(a1 + 160);
  if ( v18 && *(_QWORD *)(a1 + 152) )
  {
    v31 = v11 + v18;
    if ( v31 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v31 + 7) & 0xFFFFFFF8;
  }
  v19 = *(_DWORD *)(a1 + 144);
  if ( !v19 || !*(_QWORD *)(a1 + 136) )
    goto LABEL_22;
  v20 = v11 + v19;
  if ( v20 < v11 )
    return (unsigned int)-1073741811;
  v11 = (v20 + 7) & 0xFFFFFFF8;
LABEL_22:
  if ( v8 )
  {
    if ( (unsigned int)v7 < v11 )
    {
      v3 = -1073741789;
    }
    else
    {
      memset(a2, 0, v7);
      v21 = (_QWORD *)a2 + 21;
      *a2 = *(_OWORD *)a1;
      a2[1] = *(_OWORD *)(a1 + 16);
      a2[2] = *(_OWORD *)(a1 + 32);
      a2[3] = *(_OWORD *)(a1 + 48);
      a2[4] = *(_OWORD *)(a1 + 64);
      a2[5] = *(_OWORD *)(a1 + 80);
      a2[6] = *(_OWORD *)(a1 + 96);
      a2[7] = *(_OWORD *)(a1 + 112);
      a2[8] = *(_OWORD *)(a1 + 128);
      a2[9] = *(_OWORD *)(a1 + 144);
      *((_QWORD *)a2 + 20) = *(_QWORD *)(a1 + 160);
      v22 = *(unsigned int **)(a1 + 24);
      if ( v22 )
      {
        memmove((char *)a2 + 168, v22, *v22);
        *((_QWORD *)a2 + 23) = 0LL;
        *((_QWORD *)a2 + 3) = 168LL;
        v21 = (_QWORD *)((char *)a2 + ((**(_DWORD **)(a1 + 24) + 175) & 0xFFFFFFF8));
        v10 = (**(_DWORD **)(a1 + 24) + 175) & 0xFFFFFFF8;
      }
      v23 = *(unsigned int **)(a1 + 32);
      if ( v23 )
      {
        memmove(v21, v23, *v23);
        v21[2] = 0LL;
        v21[3] = 0LL;
        *((_QWORD *)a2 + 4) = (char *)v21 - (char *)a2;
        v21 = (_QWORD *)((char *)a2 + ((v10 + **(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8));
        v10 = (v10 + **(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8;
      }
      v24 = *(unsigned int **)(a1 + 40);
      if ( v24 )
      {
        memmove(v21, v24, *v24);
        v21[1] = 0LL;
        *((_QWORD *)a2 + 5) = (char *)v21 - (char *)a2;
        v21 = (_QWORD *)((char *)a2 + ((v10 + **(_DWORD **)(a1 + 40) + 7) & 0xFFFFFFF8));
        v10 = (v10 + **(_DWORD **)(a1 + 40) + 7) & 0xFFFFFFF8;
      }
      v25 = *(unsigned int **)(a1 + 56);
      if ( v25 )
      {
        memmove(v21, v25, *v25);
        *((_QWORD *)a2 + 7) = (char *)v21 - (char *)a2;
        v21 = (_QWORD *)((char *)a2 + ((v10 + **(_DWORD **)(a1 + 56) + 7) & 0xFFFFFFF8));
        v10 = (v10 + **(_DWORD **)(a1 + 56) + 7) & 0xFFFFFFF8;
      }
      if ( *(_DWORD *)(a1 + 148) )
      {
        v32 = *(const void **)(a1 + 128);
        if ( v32 )
        {
          memmove(v21, v32, *(unsigned int *)(a1 + 148));
          *((_QWORD *)a2 + 16) = (char *)v21 - (char *)a2;
          v21 = (_QWORD *)((char *)a2 + ((v10 + *(_DWORD *)(a1 + 148) + 7) & 0xFFFFFFF8));
          v10 = (v10 + *(_DWORD *)(a1 + 148) + 7) & 0xFFFFFFF8;
        }
      }
      if ( *(_DWORD *)(a1 + 160) )
      {
        v33 = *(const void **)(a1 + 152);
        if ( v33 )
        {
          memmove(v21, v33, *(unsigned int *)(a1 + 160));
          *((_QWORD *)a2 + 19) = (char *)v21 - (char *)a2;
          v21 = (_QWORD *)((char *)a2 + ((v10 + *(_DWORD *)(a1 + 160) + 7) & 0xFFFFFFF8));
        }
      }
      v26 = *(_DWORD *)(a1 + 144);
      if ( v26 )
      {
        v27 = *(const void **)(a1 + 136);
        if ( v27 )
        {
          memmove(v21, v27, v26);
          *((_QWORD *)a2 + 17) = (char *)v21 - (char *)a2;
        }
      }
      *((_QWORD *)a2 + 6) = 0LL;
      *((_QWORD *)a2 + 8) = 0LL;
      *((_QWORD *)a2 + 10) = 0LL;
      *((_QWORD *)a2 + 11) = 0LL;
      *((_QWORD *)a2 + 12) = 0LL;
      *((_QWORD *)a2 + 13) = 0LL;
      *(_DWORD *)a2 = 1024;
    }
  }
  *a3 = v11;
  return v3;
}
