/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1800E66A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x1800711C0 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1800723F0 (RtlLengthSecurityDescriptor.c)
 *     RtlCompareMemory @ 0x1800A1E90 (RtlCompareMemory.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlIsZeroMemory @ 0x1800FF2B0 (RtlIsZeroMemory.c)
 */

char __fastcall RtlNormalizeSecurityDescriptor(__int64 *a1, unsigned int a2, __int64 *a3, unsigned int *a4, char a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 Heap; // rsi
  char v10; // r13
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // ecx
  _QWORD *v16; // r11
  unsigned __int16 v17; // dx
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned __int16 *v20; // r14
  unsigned int v21; // r13d
  _WORD *v22; // r12
  unsigned __int16 v23; // ax
  SIZE_T v24; // rax
  int v25; // eax
  unsigned int v26; // r14d
  unsigned int v27; // ecx
  _QWORD *v28; // r11
  _WORD *v29; // r12
  unsigned __int16 v30; // ax
  SIZE_T v31; // rax
  unsigned int v32; // eax
  unsigned __int8 *v33; // rdx
  unsigned int v34; // r14d
  unsigned int v35; // eax
  unsigned __int8 *v36; // rdx
  unsigned int v37; // r14d
  __int64 *v38; // rax
  char v40; // [rsp+20h] [rbp-78h]
  unsigned int v41; // [rsp+24h] [rbp-74h]
  unsigned int v42; // [rsp+28h] [rbp-70h]
  unsigned __int16 j; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int16 i; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v45; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+34h] [rbp-64h]
  _QWORD *v47; // [rsp+38h] [rbp-60h]
  char v49; // [rsp+A8h] [rbp+10h]

  v5 = *a1;
  v6 = 0;
  v7 = a2;
  Heap = 0LL;
  v47 = 0LL;
  v40 = 0;
  v10 = 0;
  v49 = 0;
  if ( !RtlValidSecurityDescriptor(*a1) || (unsigned int)v7 < (unsigned int)RtlLengthSecurityDescriptor(v5) )
    return 0;
  if ( !a5 )
  {
    if ( a3 )
    {
      Heap = *a3;
      if ( *a3 )
        goto LABEL_8;
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v7);
    if ( Heap )
    {
      v40 = 1;
LABEL_8:
      *(_OWORD *)Heap = *(_OWORD *)v5;
      *(_DWORD *)(Heap + 16) = *(_DWORD *)(v5 + 16);
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  v11 = 20;
  v12 = 1;
  v46 = 1;
  while ( 1 )
  {
    if ( v12 == 1 )
      v13 = *(_DWORD *)(v5 + 12);
    else
      v13 = *(_DWORD *)(v5 + 16);
    v45 = v13;
    if ( !v13 )
      goto LABEL_67;
    v14 = v13;
    if ( v12 != 1 || *(_WORD *)(v13 + v5 + 4) )
      v6 = v11;
    v15 = 0;
    if ( v6 != v13 )
    {
      v10 = 1;
      v49 = 1;
      if ( a5 )
        goto LABEL_90;
      if ( v12 == 1 )
        *(_DWORD *)(Heap + 12) = v6;
      else
        *(_DWORD *)(Heap + 16) = v6;
    }
    if ( v6 )
      break;
LABEL_66:
    v6 = 0;
LABEL_67:
    v46 = ++v12;
    if ( v12 > 2 )
    {
      v32 = *(_DWORD *)(v5 + 4);
      if ( v11 != v32 )
      {
        v10 = 1;
        if ( a5 )
          goto LABEL_90;
        *(_DWORD *)(Heap + 4) = v11;
        v32 = *(_DWORD *)(v5 + 4);
      }
      v33 = (unsigned __int8 *)(v5 + v32);
      v34 = 4 * v33[1] + 8;
      if ( !a5 )
        memmove((void *)(Heap + *(unsigned int *)(Heap + 4)), v33, v34);
      v35 = *(_DWORD *)(v5 + 8);
      v11 += v34;
      if ( !v35 )
        goto LABEL_81;
      if ( v11 == v35 )
      {
LABEL_77:
        v36 = (unsigned __int8 *)(v5 + v35);
        v37 = 4 * v36[1] + 8;
        if ( !a5 )
          memmove((void *)(Heap + *(unsigned int *)(Heap + 8)), v36, v37);
        v11 += v37;
        goto LABEL_81;
      }
      v10 = 1;
      if ( !a5 )
      {
        *(_DWORD *)(Heap + 8) = v11;
        v35 = *(_DWORD *)(v5 + 8);
        goto LABEL_77;
      }
LABEL_90:
      if ( v40 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v10;
    }
  }
  if ( a5 )
  {
    v16 = v47;
  }
  else
  {
    v16 = (_QWORD *)(Heap + v6);
    v47 = v16;
    *v16 = *(_QWORD *)(v13 + v5);
  }
  v17 = *(_WORD *)(v13 + v5 + 4);
  v18 = v13 + v5 + 8;
  v41 = 0;
  v11 += 8;
  v42 = 0;
  v19 = 0;
  v20 = (unsigned __int16 *)v18;
  if ( !v17 )
  {
LABEL_42:
    v26 = (v11 + 3) & 0xFFFFFFFC;
    v27 = v26 - v6;
    if ( v26 - v6 == *(unsigned __int16 *)(v14 + v5 + 2) )
    {
      v28 = v47;
    }
    else
    {
      v10 = 1;
      v49 = 1;
      if ( a5 )
        goto LABEL_90;
      v28 = v47;
      *((_WORD *)v47 + 1) = v27;
      v17 = *(_WORD *)(v14 + v5 + 4);
    }
    if ( v19 != v17 )
      *((_WORD *)v28 + 2) = v19;
    if ( v11 != v26 )
    {
      if ( v6 == v13 && v27 == *(unsigned __int16 *)(v14 + v5 + 2) )
      {
        v6 = 0;
        if ( !(unsigned __int8)RtlIsZeroMemory(v5 + v11, v26 - v11) )
        {
          v10 = 1;
          v49 = 1;
          if ( a5 )
            goto LABEL_90;
        }
      }
      else
      {
        v6 = 0;
      }
      if ( !a5 )
        memset((void *)(Heap + v11), 0, v26 - v11);
      v11 = (v11 + 3) & 0xFFFFFFFC;
      goto LABEL_67;
    }
    goto LABEL_66;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)v20 )
      goto LABEL_37;
    v21 = 0;
    if ( a5 )
      break;
    v29 = v16 + 1;
    if ( !v19 )
    {
LABEL_38:
      memmove((void *)(Heap + v11), v20, v20[1]);
      v19 = v41;
      goto LABEL_39;
    }
    v30 = v20[1];
    for ( i = v30; ; v30 = i )
    {
      if ( v29[1] == v30 )
      {
        i = v20[1];
        v31 = RtlCompareMemory(v20, v29, v30);
        v19 = v41;
        if ( v31 == i )
          break;
      }
      ++v21;
      v29 = (_WORD *)((char *)v29 + (unsigned __int16)v29[1]);
      if ( v21 >= v19 )
        goto LABEL_37;
    }
    v49 = 1;
    if ( v21 < v41 )
    {
      LOWORD(v25) = v20[1];
      goto LABEL_40;
    }
LABEL_37:
    if ( !a5 )
      goto LABEL_38;
LABEL_39:
    v25 = v20[1];
    v11 += v25;
    v41 = ++v19;
LABEL_40:
    v13 = v45;
    v14 = v45;
    v16 = v47;
    v15 = v42 + 1;
    v20 = (unsigned __int16 *)((char *)v20 + (unsigned __int16)v25);
    v42 = v15;
    v17 = *(_WORD *)(v45 + v5 + 4);
    v18 = v45 + 8LL + v5;
    if ( v15 >= v17 )
    {
      v10 = v49;
      v12 = v46;
      goto LABEL_42;
    }
  }
  v22 = (_WORD *)v18;
  if ( !v15 )
    goto LABEL_37;
  v23 = v20[1];
  for ( j = v23; ; v23 = j )
  {
    if ( v22[1] == v23 )
    {
      j = v20[1];
      v24 = RtlCompareMemory(v20, v22, v23);
      v15 = v42;
      if ( v24 == j )
        break;
    }
    ++v21;
    v22 = (_WORD *)((char *)v22 + (unsigned __int16)v22[1]);
    if ( v21 >= v15 )
      goto LABEL_36;
  }
  v49 = 1;
  if ( v21 >= v42 )
  {
LABEL_36:
    v19 = v41;
    goto LABEL_37;
  }
  v10 = 1;
LABEL_81:
  if ( !v10 || a5 )
    goto LABEL_90;
  v38 = a3;
  if ( !a3 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    v38 = a1;
    goto LABEL_87;
  }
  if ( v40 )
LABEL_87:
    *v38 = Heap;
  if ( a4 )
    *a4 = v11;
  return v10;
}
