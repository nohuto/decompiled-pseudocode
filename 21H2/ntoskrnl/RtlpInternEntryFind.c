/*
 * XREFs of RtlpInternEntryFind @ 0x1405F7308
 * Callers:
 *     RtlInternTableIntern @ 0x1405F6FB8 (RtlInternTableIntern.c)
 * Callees:
 *     RtlpInternEntryMatch @ 0x1405F76E0 (RtlpInternEntryMatch.c)
 */

__int64 __fastcall RtlpInternEntryFind(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  signed __int64 v12; // rax
  unsigned __int64 i; // rcx
  signed __int64 v14; // rtt
  __int64 v16; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 4);
  v6 = 0LL;
  v9 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v10 = 0LL;
  v11 = a3 & v9;
  v16 = a3 & v9;
  while ( 1 )
  {
    if ( v10 )
      goto LABEL_5;
    if ( !(v4 >> 5) )
      return v6;
    v10 = *(_QWORD *)(a1 + 8)
        + 8LL
        * ((37
          * (BYTE6(v16)
           + 37
           * (BYTE5(v16)
            + 37
            * (BYTE4(v16)
             + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v11 + 11623883)))))))
          + HIBYTE(v16)) & ((v4 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( (v10 & 1) != 0 )
        break;
      if ( v11 == (v9 & *(_QWORD *)(v10 + 8)) )
        goto LABEL_7;
    }
    v10 = 0LL;
LABEL_7:
    if ( !v10 )
      return v6;
    if ( (unsigned __int8)RtlpInternEntryMatch(v10, a2, a4) )
    {
      _m_prefetchw((const void *)(v10 + 16));
      v12 = *(_QWORD *)(v10 + 16);
      for ( i = v12 + 1; i > 1; i = v12 + 1 )
      {
        v14 = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 16), i, v12);
        if ( v14 == v12 )
          return v10;
      }
      if ( i != 1 )
        __fastfail(0xEu);
      return v6;
    }
  }
}
