__int64 __fastcall MiGetNextNonGapPfnPage(unsigned __int64 *a1, unsigned __int64 *a2, __int8 a3, int a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 i; // r12
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 LeafVa; // r12
  __int64 v16; // rsi
  __int64 v17; // r15
  unsigned int v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+34h] [rbp-44h]
  char *v21; // [rsp+38h] [rbp-40h]

  v4 = *a1;
  v5 = 0LL;
  v19 = 0;
  if ( !v4 )
    v4 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *a2 )
  {
    v6 = v4 + 8 * (*a2 >> 12);
    v7 = (__int64)(v6 << 25) >> 16;
LABEL_5:
    v6 -= 8LL;
    goto LABEL_6;
  }
  v7 = 48 * qword_140C65820 - 0x21FFFFFFFFD0LL;
  v6 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( ((v7 >> 9) & 0xFF8) == 0 )
    goto LABEL_5;
LABEL_6:
  v20 = a4 != 0 ? 7 : 3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v21 = AnyMultiplexedVm;
  v9 = 0LL;
  v10 = 0LL;
  i = 0LL;
  if ( v4 > v6 )
    goto LABEL_19;
LABEL_7:
  if ( v9 )
  {
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
    v9 = 0LL;
  }
  NextPageTable = MiGetNextPageTable(v4, v6, 0LL, a3, v20, &v19);
  v4 = NextPageTable;
  if ( !NextPageTable )
    goto LABEL_25;
  if ( !a4 )
    v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = NextPageTable;
  if ( !v19 )
  {
    while ( (*(_QWORD *)v13 & 1) == 0
         || qword_140C693D8 != (PVOID)qword_140C693E0
         && (PVOID)((*(_QWORD *)v13 >> 12) & 0xFFFFFFFFFFLL) == qword_140C693D8 )
    {
      v13 += 8LL;
      if ( v13 > v6 )
      {
        v4 = v13;
        goto LABEL_25;
      }
      if ( (v13 & 0xFFF) == 0 )
      {
        AnyMultiplexedVm = v21;
        v4 = v13;
        goto LABEL_7;
      }
    }
    v10 = v13;
    for ( i = 4096LL; ; i += 4096LL )
    {
      v13 += 8LL;
      if ( v13 > v6
        || (v13 & 0xFFF) == 0
        || (*(_QWORD *)v13 & 1) == 0
        || qword_140C693D8 != (PVOID)qword_140C693E0
        && (PVOID)((*(_QWORD *)v13 >> 12) & 0xFFFFFFFFFFLL) == qword_140C693D8 )
      {
        break;
      }
    }
LABEL_25:
    AnyMultiplexedVm = v21;
    goto LABEL_19;
  }
  v10 = NextPageTable;
  v14 = v19;
  do
  {
    if ( v9 )
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v14;
  }
  while ( v14 );
  LeafVa = MiGetLeafVa(v13 + 8);
  i = LeafVa - MiGetLeafVa(v4);
  AnyMultiplexedVm = v21;
  v16 = (__int64)(v6 - v4) >> 3;
  if ( i >> 12 > v16 + 1 )
    i = (v16 + 1) << 12;
LABEL_19:
  if ( v9 )
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
  if ( v10 )
  {
    v4 = v10 + 8 * (i >> 12);
    v17 = (__int64)(v10 << 25) >> 16;
    v5 = v7 - v17;
    if ( i + v17 <= v7 )
      v5 = i;
  }
  else
  {
    v17 = 0LL;
  }
  *a2 = v5;
  *a1 = v4;
  return v17;
}
