void __fastcall HalpDmaFlushScatterTransferV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v10; // edi
  __int64 v11; // rdx
  __int64 ContiguousPiece; // r15
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+28h] [rbp-40h]

  if ( a3 )
  {
    *(_QWORD *)(a3 + 56) = a3;
    if ( !a6 )
    {
      v10 = a5;
      if ( a5 )
      {
        while ( 1 )
        {
          ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, a3, a4, 0, v10);
          v13 = a4 & 0xFFF;
          if ( *(_QWORD *)(a1 + 144) < (unsigned __int64)(ContiguousPiece
                                                        + v13
                                                        + (*(_QWORD *)(a2
                                                                     + 8LL
                                                                     * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12)
                                                                     + 48) << 12)
                                                        - 1) )
            break;
          if ( !*(_BYTE *)(a1 + 445) )
          {
            v14 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v11) - 1;
            if ( (v14 & v16) != 0 || (v15 & v14) != 0 )
              break;
            LOBYTE(v21) = 0;
            LOBYTE(v20) = 0;
            HalpDmaFlushBuffer(v14, a2, a4, (unsigned int)ContiguousPiece, v20, v21);
          }
LABEL_13:
          a4 += ContiguousPiece;
          v10 -= ContiguousPiece;
          if ( !v10 )
            goto LABEL_14;
        }
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD **)(a3 + 56), ContiguousPiece, 0, 0, 0);
        v17 = *(_QWORD *)(a3 + 56);
        v18 = (unsigned __int64)(ContiguousPiece + v13 + 4095) >> 12;
        if ( (_DWORD)v18 )
        {
          v19 = (unsigned int)v18;
          do
          {
            v17 = *(_QWORD *)(v17 + 8);
            --v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(a3 + 56) = v17;
        goto LABEL_13;
      }
LABEL_14:
      *(_QWORD *)(a3 + 56) = a3;
    }
  }
}
