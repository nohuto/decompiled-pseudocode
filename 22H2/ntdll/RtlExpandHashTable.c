/*
 * XREFs of RtlExpandHashTable @ 0x180088C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpGetChainHead @ 0x180068E50 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x18007455C (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

char __fastcall RtlExpandHashTable(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  char v6; // cl
  _QWORD *v7; // rdi
  unsigned int v8; // edx
  _QWORD *ChainHead; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // r10
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  int v19; // edx
  __int64 SecondLevelDir; // rax
  __int64 v22; // r14
  __int64 Heap; // rax
  _QWORD *v24; // rdi
  char v25; // [rsp+40h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 8388480 || *(_DWORD *)(a1 + 28) )
    return 0;
  _BitScanReverse(&v3, v1 + 128);
  v4 = (v1 + 128) ^ (1 << v3);
  v5 = v3 - 7;
  v6 = v3 - 7;
  v25 = v6;
  if ( v1 == 128 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 128LL);
    v24 = (_QWORD *)Heap;
    if ( !Heap )
      return 0;
    memset((void *)(Heap + 8), 0, 0x78uLL);
    v6 = v25;
    *v24 = v22;
    *(_QWORD *)(a1 + 32) = v24;
  }
  v7 = *(_QWORD **)(a1 + 32);
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v6);
    if ( SecondLevelDir )
    {
      v7[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v7;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7);
    }
    return 0;
  }
LABEL_5:
  v8 = *(_DWORD *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  ChainHead = (_QWORD *)RtlpGetChainHead(a1, v8);
  ++*(_DWORD *)(a1 + 12);
  v10 = ChainHead;
  v12 = (_QWORD *)(v11 + 16LL * v4);
  v12[1] = v12;
  *v12 = v12;
  v13 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*ChainHead != ChainHead )
  {
    v14 = ChainHead;
    do
    {
      v15 = *((_DWORD *)v13 + 4) >> *(_DWORD *)(a1 + 4);
      if ( (((2 * *(_DWORD *)(a1 + 16)) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - 1 )
      {
        v16 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13
          || (v17 = (_QWORD *)v13[1], (_QWORD *)*v17 != v13)
          || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = (_QWORD *)v12[1], (_QWORD *)*v18 != v12) )
        {
          __fastfail(3u);
        }
        *v13 = v12;
        v13[1] = v18;
        *v18 = v13;
        v12[1] = v13;
      }
      else
      {
        v14 = v13;
      }
      v13 = (_QWORD *)*v14;
    }
    while ( (_QWORD *)*v14 != v10 );
    if ( (_QWORD *)*v12 != v12 )
      ++*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v10 == v10 )
      --*(_DWORD *)(a1 + 24);
  }
  v19 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) == v19 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = (2 * v19) | 1;
  }
  return 1;
}
