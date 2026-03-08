/*
 * XREFs of MiInitializeNuma @ 0x140394008
 * Callers:
 *     MiInitializePartition @ 0x140837D40 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     MiInitializeSlabAllocator @ 0x14039425C (MiInitializeSlabAllocator.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiInitializeChannelOrdering @ 0x140838724 (MiInitializeChannelOrdering.c)
 */

__int64 __fastcall MiInitializeNuma(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // rdi
  char v4; // cl
  __int64 v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  char *v11; // rbp
  _QWORD *v12; // r14
  char *v13; // r13
  _QWORD *v14; // r12
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // esi
  int *v18; // r14
  union _SLIST_HEADER *v19; // rbp
  int v20; // ecx
  _DWORD *v21; // rsi
  __int64 v22; // r14
  union _SLIST_HEADER *v23; // rbp
  __int64 v24; // rbp
  unsigned int i; // esi
  __int64 result; // rax
  unsigned int v28; // [rsp+78h] [rbp+10h]
  __int64 v29; // [rsp+80h] [rbp+18h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  v1 = 0;
  v28 = 0;
  v2 = a1;
  if ( KeNumberNodes )
  {
    v3 = *(_QWORD *)(a1 + 16) + 25296LL;
    v30 = v3;
    do
    {
      *(_QWORD *)(v3 - 2456) = v2;
      *(_DWORD *)(v3 - 2364) = v1;
      *(_BYTE *)(v3 - 22048) = 8;
      *(_BYTE *)(v3 - 22046) = 8;
      *(_DWORD *)(v3 - 2192) = 0;
      v4 = byte_140C6570D;
      *(_QWORD *)(v3 - 2184) = -1LL;
      *(_DWORD *)(v3 - 2368) = v1 << v4;
      MiInitializeChannelOrdering(v2, v1);
      v5 = v3 - 2736;
      v6 = 3LL;
      v7 = (_QWORD *)(v3 - 2832);
      do
      {
        v8 = 2LL;
        do
        {
          v9 = (unsigned int)(dword_140C65778 + 1);
          v7[1] = v5;
          *v7 = v9;
          v5 += 32LL;
          v7 += 2;
          --v8;
        }
        while ( v8 );
        --v6;
      }
      while ( v6 );
      v10 = (_QWORD *)(v3 - 22016);
      v29 = 8LL;
      v11 = (char *)(v3 - 19216);
      v12 = (_QWORD *)(v3 - 22040);
      do
      {
        v13 = v11;
        v14 = v10;
        v15 = v12;
        v16 = 4LL;
        do
        {
          *v15 = 0LL;
          *(v14 - 1) = 0x3FFFFFFFFFLL;
          *v14 = 0x3FFFFFFFFFLL;
          memset(v13, -1, 0x200uLL);
          v13 += 4096;
          v15 += 88;
          v14 += 88;
          --v16;
        }
        while ( v16 );
        v12 += 11;
        v11 += 512;
        v10 += 11;
        --v29;
      }
      while ( v29 );
      v17 = 0;
      v18 = (int *)(v30 - 2080);
      v19 = (union _SLIST_HEADER *)(v30 - 2096);
      do
      {
        InitializeSListHead(v19);
        v20 = -(v17++ != 0);
        v19 += 2;
        *v18 = ~(_BYTE)v20 & 5;
        v18 += 8;
      }
      while ( v17 < 3 );
      v21 = (_DWORD *)(v30 - 1984);
      v22 = 3LL;
      v23 = (union _SLIST_HEADER *)(v30 - 2000);
      do
      {
        InitializeSListHead(v23);
        v23 += 2;
        *v21 = 5;
        v21 += 8;
        --v22;
      }
      while ( v22 );
      v24 = v30 - 1904;
      for ( i = 0; i < 7; ++i )
      {
        MiInitializeSlabAllocator(v24, i, v28, a1);
        v24 += 264LL;
      }
      result = (unsigned __int16)KeNumberNodes;
      v2 = a1;
      v1 = v28 + 1;
      *(_QWORD *)v30 = 0x3FFFFFFFFFLL;
      *(_QWORD *)(v30 + 8) = 0x3FFFFFFFFFLL;
      *(_QWORD *)(v30 - 16) = 0LL;
      *(_DWORD *)(v30 - 8) = 5;
      *(_DWORD *)(v30 + 16) = 0;
      v3 = v30 + 25408;
      v28 = v1;
      v30 += 25408LL;
    }
    while ( v1 < (unsigned int)result );
  }
  return result;
}
