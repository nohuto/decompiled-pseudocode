_QWORD *__fastcall HalpDmaMapScatterTransferV2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        char a6,
        __int64 *a7)
{
  unsigned int ContiguousPiece; // eax
  __int64 v12; // rdx
  unsigned int v13; // r10d
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r11
  _QWORD *v19; // r9
  __int64 v20; // rcx
  _QWORD *result; // rax
  __int64 v22; // rdx
  bool v23; // zf
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+28h] [rbp-30h]

  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, a3, a4, a6, *a5);
  v13 = ContiguousPiece;
  *a5 = ContiguousPiece;
  v14 = a4 & 0xFFF;
  v15 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v16 = v14 + (*(_QWORD *)(a2 + 8 * v15 + 48) << 12);
  if ( a3
    && ((v17 = ContiguousPiece, *(_QWORD *)(a1 + 144) < (unsigned __int64)ContiguousPiece + v16 - 1)
     || !a6
     && !*(_BYTE *)(a1 + 445)
     && ((v15 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v12) - 1, (v15 & v16) != 0) || (v18 & v15) != 0)) )
  {
    v19 = *(_QWORD **)(a3 + 56);
    *a7 = v14 + *v19;
    if ( a6 )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, v19, v13, a6, 0, 0);
    }
    else if ( !*(_BYTE *)(a1 + 445) )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, v19, v13, 0, 1, 0);
    }
    v20 = *(_QWORD *)(a3 + 56);
    result = (_QWORD *)((unsigned __int64)(v17 + v14 + 4095) >> 12);
    if ( (_DWORD)result )
    {
      v22 = (unsigned int)result;
      do
      {
        v20 = *(_QWORD *)(v20 + 8);
        --v22;
      }
      while ( v22 );
    }
    *(_QWORD *)(a3 + 56) = v20;
  }
  else
  {
    v23 = *(_BYTE *)(a1 + 445) == 0;
    result = a7;
    *a7 = v16;
    if ( v23 )
    {
      LOBYTE(v25) = 0;
      LOBYTE(v24) = a6;
      return (_QWORD *)HalpDmaFlushBuffer(v15, a2, a4, v13, v24, v25);
    }
  }
  return result;
}
