void __fastcall HalpDmaMapContiguousTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        char a6,
        char a7,
        __int64 *a8)
{
  unsigned int v12; // r14d
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+28h] [rbp-30h]

  v12 = *a5;
  if ( (unsigned int)HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, *a5) != v12 || *(_BYTE *)(a3 + 64) )
  {
    *a8 = *(_QWORD *)a3 + (a4 & 0xFFF);
    if ( a6 )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, (_QWORD *)a3, v12, a6, 0, a7);
    }
    else if ( !*(_BYTE *)(a1 + 445) )
    {
      HalpDmaSyncMapBuffers(a1, a2, a4, (_QWORD *)a3, v12, 0, 1, a7);
    }
  }
  else
  {
    v13 = (a4 & 0xFFF)
        + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
    *a8 = v13;
    LOBYTE(v15) = a7;
    LOBYTE(v14) = a6;
    HalpDmaFlushBuffer(v13, a2, a4, v12, v14, v15);
  }
}
