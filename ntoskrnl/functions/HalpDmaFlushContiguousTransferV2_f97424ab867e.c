void __fastcall HalpDmaFlushContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  unsigned int ContiguousPiece; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  char v14; // r10
  __int64 v15; // r11
  int v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+28h] [rbp-30h]

  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, a5);
  if ( ContiguousPiece != a5
    || (v12 = (a4 & 0xFFF)
            + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
            + ContiguousPiece,
        *(_QWORD *)(a1 + 144) < (unsigned __int64)(v12 - 1)) )
  {
    v14 = 0;
    if ( a6 )
      return;
    goto LABEL_9;
  }
  if ( !a6 && !*(_BYTE *)(a1 + 445) )
  {
    v13 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v11) - 1;
    if ( (v13 & v15) == 0 && (v13 & v12) == 0 )
    {
      LOBYTE(v17) = v14;
      LOBYTE(v16) = v14;
      HalpDmaFlushBuffer(v13, a2, a4, a5, v16, v17);
      return;
    }
LABEL_9:
    HalpDmaSyncMapBuffers(a1, a2, a4, a3, a5, v14, v14, v14);
  }
}
