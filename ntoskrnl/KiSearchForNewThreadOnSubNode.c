__int64 __fastcall KiSearchForNewThreadOnSubNode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // rsi
  char v6; // r12
  __int64 v9; // r15
  __int64 v10; // rdi
  int v11; // r13d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 result; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx

  v3 = a3;
  v4 = *(_QWORD *)(a2 + 128);
  v5 = v4;
  v6 = *(_BYTE *)(a1 + 209);
  v9 = *(_QWORD *)(a2 + 152);
  if ( a2 == *(_QWORD *)(a1 + 192) )
  {
    v4 ^= *(_QWORD *)(a1 + 200);
    v9 ^= *(_QWORD *)(a1 + 34880);
    if ( (KiCacheAwareScheduling & 2) != 0 )
      v5 &= *(_QWORD *)(a1 + 34928);
  }
  v10 = ~*(_QWORD *)(a2 + 16) & v4;
  v11 = *(unsigned __int16 *)(a2 + 136) << 6;
  while ( 1 )
  {
    if ( !v10 && !v9 )
      return 0LL;
    if ( (v9 & v5) != 0 )
      break;
LABEL_10:
    if ( (v10 & v5) != 0 )
    {
      v17 = __ROR8__(v10 & v5, v6);
      do
      {
        _BitScanForward64(&v18, v17);
        v17 ^= 1LL << v18;
        result = KiSearchForNewThreadOnProcessor(
                   a1,
                   KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v11 + (((_BYTE)v18 + v6) & 0x3F)]],
                   0LL,
                   v3);
        if ( result )
          return result;
        v3 = a3;
      }
      while ( v17 );
    }
    v3 = a3;
    v10 &= ~v5;
    v5 = *(_QWORD *)(a2 + 128);
  }
  v12 = __ROR8__(v9 & v5, v6);
  while ( 1 )
  {
    _BitScanForward64(&v13, v12);
    v14 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v11 + ((v6 + (_BYTE)v13) & 0x3F)]];
    v15 = *(_QWORD *)(v14 + 34880);
    v9 &= ~v15;
    v12 &= __ROR8__(~v15, v6);
    result = KiSearchForNewThreadOnProcessor(a1, 0LL, *(_QWORD *)(v14 + 34888), v3);
    if ( result )
      return result;
    v3 = a3;
    if ( !v12 )
      goto LABEL_10;
  }
}
