void __fastcall HalPutScatterGatherListV2(__int64 a1, _QWORD *a2, char a3)
{
  _DWORD *v3; // rbx
  void *v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 *v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // r12
  char v17; // r14
  unsigned int ContiguousPiece; // eax
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  struct _MDL *v24; // rdi
  struct _MDL *Next; // rsi
  _DWORD *v26; // [rsp+30h] [rbp-48h]
  int v27; // [rsp+88h] [rbp+10h]
  unsigned __int64 v28; // [rsp+98h] [rbp+20h]

  v3 = (_DWORD *)a2[1];
  v26 = v3;
  if ( !v3 )
  {
    v5 = a2;
LABEL_5:
    ExFreePoolWithTag(v5, 0);
    return;
  }
  if ( v3 != (_DWORD *)1 )
  {
    v6 = (__int64 *)*((_QWORD *)v3 + 1);
    v7 = *((_QWORD *)v3 + 4);
    v8 = v3[10];
    v9 = *((_QWORD *)v3 + 3);
    v10 = *((_DWORD *)v6 + 8) + *((_DWORD *)v6 + 10) + *((_DWORD *)v6 + 11) - v7;
    if ( v8 )
    {
      do
      {
        if ( v10 )
        {
          v12 = (__int64 *)*v6;
          v13 = v8;
          if ( v10 <= v8 )
            v13 = v10;
          v14 = v8;
          if ( v12 )
            v14 = v13;
          v27 = v12 != 0LL ? v8 - v13 : 0;
          IoFlushAdapterBuffersV2(a1, (_DWORD)v6, v9, v7, v14, a3);
          v16 = (v7 & 0xFFF) + (v6[(unsigned int)((unsigned __int64)(v7 - v6[4]) >> 12) + 6] << 12);
          v17 = *(_BYTE *)(a1 + 442);
          v28 = *(_QWORD *)(a1 + 144);
          do
          {
            if ( v17 )
              ContiguousPiece = HalpDmaNextContiguousPiece(a1, (_DWORD)v6, v9, v7, a3, v14);
            else
              ContiguousPiece = v14;
            v19 = ContiguousPiece;
            v14 -= ContiguousPiece;
            v20 = ContiguousPiece + v16;
            if ( v28 < v20 - 1
              || !a3
              && !*(_BYTE *)(a1 + 445)
              && ((v21 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v15) - 1, (v21 & v16) != 0)
               || (v20 & v21) != 0) )
            {
              v22 = ((unsigned __int64)(v7 & 0xFFF) + v19 + 4095) >> 12;
              if ( (_DWORD)v22 )
              {
                v23 = (unsigned int)v22;
                do
                {
                  v9 = *(_QWORD *)(v9 + 8);
                  --v23;
                }
                while ( v23 );
              }
            }
            LODWORD(v7) = v19 + v7;
            v16 = v20;
          }
          while ( v14 );
          v8 = v27;
        }
        v6 = (__int64 *)*v6;
        if ( !v6 )
          break;
        v7 = v6[4] + *((unsigned int *)v6 + 11);
        v10 = *((_DWORD *)v6 + 10);
      }
      while ( v8 );
      v3 = v26;
    }
    IoFreeMapRegistersV2(a1, *((_QWORD *)v3 + 3), (unsigned int)v3[11]);
    v24 = (struct _MDL *)*((_QWORD *)v3 + 2);
    if ( v24 )
    {
      do
      {
        Next = v24->Next;
        if ( (v24->MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v24->MappedSystemVa, v24);
        IoFreeMdl(v24);
        v24 = Next;
      }
      while ( Next );
    }
    if ( (*v3 & 1) == 0 )
    {
      v5 = v3;
      goto LABEL_5;
    }
  }
}
