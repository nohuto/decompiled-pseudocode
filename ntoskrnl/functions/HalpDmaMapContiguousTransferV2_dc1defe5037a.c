void __fastcall HalpDmaMapContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int *a5,
        char a6,
        __int64 *a7)
{
  unsigned int v11; // r14d
  unsigned int ContiguousPiece; // eax
  __int64 v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+28h] [rbp-30h]

  v11 = *a5;
  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, *a5);
  v14 = a4 & 0xFFF;
  v15 = (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v16 = v14 + (*(_QWORD *)(a2 + 8 * v15 + 48) << 12);
  if ( ContiguousPiece == v11
    && *(_QWORD *)(a1 + 144) >= v16 + (unsigned __int64)ContiguousPiece - 1
    && (a6
     || *(_BYTE *)(a1 + 445)
     || (v15 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v13) - 1, (v15 & v16) == 0) && (v15 & v17) == 0) )
  {
    LOBYTE(v19) = 0;
    LOBYTE(v18) = a6;
    *a7 = v16;
    HalpDmaFlushBuffer(v15, a2, a4, v11, v18, v19);
  }
  else
  {
    *a7 = v14 + *a3;
    if ( a6 )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, a3, v11, a6, 0, 0);
    }
    else if ( !*(_BYTE *)(a1 + 445) )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, a3, v11, 0, 1, 0);
    }
  }
}
