/*
 * XREFs of MiExclusiveInsertPfnChainInList @ 0x1402D3138
 * Callers:
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 * Callees:
 *     MiSetNextStandbyPageSameNodeNoLockAsserts @ 0x140287AE0 (MiSetNextStandbyPageSameNodeNoLockAsserts.c)
 *     MiPfnToStandbyLookaside @ 0x140288780 (MiPfnToStandbyLookaside.c)
 *     MiMarkLockedChainAsProtected @ 0x1402D3390 (MiMarkLockedChainAsProtected.c)
 *     MiSetPfnNodeBlinkLow @ 0x1402DF430 (MiSetPfnNodeBlinkLow.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiExclusiveInsertPfnChainInList(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  volatile signed __int64 *v12; // rcx
  __int64 v13; // r11
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  _OWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v19; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 88);
  v5 = 48 * v2 - 0x220000000000LL;
  v6 = (__int64 *)(48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL);
  if ( v4 )
  {
    MiMarkLockedChainAsProtected();
    v7 = 0x3FFFFFFFFFLL;
    v14 = *(_QWORD *)(v4 + 16);
    v15 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - v13) >> 4);
    if ( qword_140C657C0 && (v14 & 0x10) == 0 )
      v14 &= ~qword_140C657C0;
    v16 = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL;
    *v6 ^= (*v6 ^ v15) & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) = v16 | *(_QWORD *)(v5 + 24) & 0xFFFFFF0000000000uLL;
    v17 = *(_QWORD *)(a1 + 16);
    if ( ((v14 >> 12) & 0xFFFFFFFFFFLL) == v15 )
    {
      result = MiSwizzleInvalidPte(((v17 & 0xFFFFFFFFFFLL) << 12) | 0x880);
      *(_QWORD *)(v4 + 16) = result;
    }
    else
    {
      result = (*(_QWORD *)(v13 + 48 * v16) ^ v17) & 0xFFFFFFFFFFLL;
      *(_QWORD *)(v13 + 48 * v16) ^= result;
    }
    *(_QWORD *)(v4 + 40) ^= (*(_QWORD *)(v4 + 40) ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFLL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    if ( v7 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(a2 + 16) = v2;
    else
      *(_QWORD *)(48 * v7 - 0x220000000000LL) ^= (*(_QWORD *)(48 * v7 - 0x220000000000LL) ^ v2) & 0xFFFFFFFFFFLL;
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a2 + 24) = result;
  }
  if ( *(_DWORD *)(a1 + 8) == 2 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    v19 = 0LL;
    memset(v18, 0, sizeof(v18));
    MiPfnToStandbyLookaside(v9, v4, (__int64 *)v18);
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *((_QWORD *)v19 + 3);
    if ( v11 == 0x3FFFFFFFFFLL )
      *((_QWORD *)v19 + 2) = v10;
    else
      MiSetNextStandbyPageSameNodeNoLockAsserts(48 * v11 - 0x220000000000LL, v10);
    MiSetPfnNodeBlinkLow(v5, v11);
    v12 = v19;
    *(_DWORD *)(v5 + 36) ^= (*(_DWORD *)(v5 + 36) ^ (v11 >> 19)) & 0x1FFFFF;
    *((_QWORD *)v12 + 3) = *(_QWORD *)(a1 + 24);
    result = (__int64)v19;
    _InterlockedExchangeAdd64(v19, *(_QWORD *)a1);
  }
  if ( !v4 )
  {
    result = *v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *v6 = result;
    *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ v7) & 0xFFFFFFFFFFLL;
  }
  return result;
}
