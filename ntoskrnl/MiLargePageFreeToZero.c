/*
 * XREFs of MiLargePageFreeToZero @ 0x1403341E0
 * Callers:
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 */

void __fastcall MiLargePageFreeToZero(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  signed __int64 v6; // rcx
  signed __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r8
  ULONG_PTR v20; // rdx
  unsigned __int64 v21; // r8
  ULONG_PTR v22; // rcx
  signed __int64 *v23; // rdx
  ULONG_PTR v24; // r9
  volatile signed __int32 *v25; // rdx
  unsigned int v26; // r8d
  int v27; // r13d
  unsigned __int64 v28; // rcx
  volatile signed __int32 *v29; // rcx
  unsigned int v30; // r8d
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  volatile signed __int32 *v33; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v34; // [rsp+28h] [rbp-50h]
  ULONG_PTR v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  __int64 v38; // [rsp+80h] [rbp+8h]
  unsigned __int64 v39; // [rsp+80h] [rbp+8h]
  unsigned __int64 v40; // [rsp+80h] [rbp+8h]
  unsigned int PfnChannel; // [rsp+98h] [rbp+20h]

  v6 = 48 * BugCheckParameter2;
  v7 = v6 - 0x220000000000LL;
  v38 = a2;
  v34 = (unsigned __int64 *)(0x140000000LL + 8LL * a2 + 119280);
  v8 = *v34;
  v9 = *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4)) + 2);
  PfnChannel = MiGetPfnChannel(v7);
  v10 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  v11 = *(_QWORD *)(v10 + 16) + 25408 * v9;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
  *(_BYTE *)(v7 + 34) &= ~8u;
  v12 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v12 + 24) = 0LL;
  *(_BYTE *)(v12 + 70) = 1;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  if ( !a4 )
  {
    v13 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_43;
    v14 = *(_QWORD **)(v7 + 8);
    if ( *v14 != v7 )
      goto LABEL_43;
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    if ( a3 )
      *(_QWORD *)(v7 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v7 + 16), 4294967293LL);
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(BugCheckParameter2);
    v37 = 1072 * v38;
    --*(_QWORD *)(1072 * v38 + v11 + 8);
    v15 = 134 * v38;
    v16 = v11 + (BugCheckParameter2 < 0x100000 ? 0x10 : 0) + 1072 * v38;
    v17 = 4LL;
    --*(_QWORD *)(v16 + 24);
    v18 = (unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6;
    if ( BugCheckParameter2 < 0x100000 )
      v17 = 12LL;
    v19 = v18 + v15 + 4 * (PfnChannel + v17);
    v20 = 24 * (BugCheckParameter2 / *v34 % (unsigned int)dword_140C65800[v38]);
    --*(_QWORD *)(v20 + *(_QWORD *)(v11 + 8 * v19 + 560) + 16);
    --*(_QWORD *)(v11 + 8 * v19 + 48);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2688), -(__int64)v8);
    if ( dword_140C67ACC != 1 )
    {
LABEL_10:
      *(_BYTE *)(v7 + 34) &= 0xF8u;
      v21 = v15 + v18 + 4 * (PfnChannel + (unsigned __int64)(BugCheckParameter2 < 0x100000 ? 8 : 0));
      v22 = v20 + *(_QWORD *)(v11 + 8 * v21 + 560);
      v23 = *(signed __int64 **)(v22 + 8);
      if ( (MiFlags & 0x30) != 0 )
      {
        if ( *v23 == v22 )
        {
LABEL_12:
          *(_QWORD *)v7 = v22;
          *(_QWORD *)(v7 + 8) = v23;
          *v23 = v7;
          *(_QWORD *)(v22 + 8) = v7;
          ++*(_QWORD *)(v22 + 16);
          ++*(_QWORD *)(v11 + 8 * v21 + 48);
          ++*(_QWORD *)(v37 + v11);
          ++*(_QWORD *)(v16 + 16);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2560), v8);
          goto LABEL_13;
        }
      }
      else if ( *v23 == v22 )
      {
        goto LABEL_12;
      }
LABEL_43:
      __fastfail(3u);
    }
    v39 = v8;
    v29 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (BugCheckParameter2 >> 5));
    v33 = v29;
    v35 = BugCheckParameter2 & 0x1F;
    if ( v8 + v35 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        _InterlockedOr(v29, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v35);
        v39 = v8 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
        ++v29;
        ++v33;
      }
      v31 = v39;
      if ( v39 >= 0x20 )
      {
        v36 = v39 >> 5;
        v40 = -32LL * (v39 >> 5) + v39;
        v32 = v36;
        do
        {
          *v29++ = -1;
          --v32;
        }
        while ( v32 );
        v31 = v40;
        v33 = v29;
      }
      if ( !v31 )
        goto LABEL_10;
      v30 = (1 << v31) - 1;
    }
    else
    {
      if ( v8 == 32 )
      {
        *v29 = -1;
        goto LABEL_10;
      }
      v30 = ((1 << v8) - 1) << v35;
    }
    _InterlockedOr(v33, v30);
    goto LABEL_10;
  }
  if ( dword_140C67ACC != 1 )
    goto LABEL_13;
  v24 = BugCheckParameter2 & 0x1F;
  v25 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (BugCheckParameter2 >> 5));
  if ( v24 + v8 <= 0x20 )
  {
    if ( v8 == 32 )
    {
      *v25 = -1;
      goto LABEL_13;
    }
    v26 = ((1 << v8) - 1) << v24;
LABEL_26:
    _InterlockedOr(v25, v26);
    goto LABEL_13;
  }
  if ( (BugCheckParameter2 & 0x1F) != 0 )
  {
    v27 = BugCheckParameter2 & 0x1F;
    _InterlockedOr(v25, ((1 << (32 - v27)) - 1) << v24);
    v8 -= (unsigned int)(32 - v27);
    ++v25;
  }
  if ( v8 >= 0x20 )
  {
    v28 = v8 >> 5;
    v8 += -32LL * (v8 >> 5);
    do
    {
      *v25++ = -1;
      --v28;
    }
    while ( v28 );
  }
  if ( v8 )
  {
    v26 = (1 << v8) - 1;
    goto LABEL_26;
  }
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
}
