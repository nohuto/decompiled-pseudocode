__int64 __fastcall MiSharedInsertPfnChainInList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  __int64 v8; // r12
  _QWORD *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r11
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdx
  volatile signed __int64 *v17; // r13
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r13
  signed __int64 v21; // rdx
  signed __int64 v22; // r8
  unsigned __int64 v23; // r11
  signed __int64 v24; // rdx
  unsigned __int64 v25; // r9
  signed __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned int PfnPriority; // eax
  __int64 v32; // r8
  signed __int64 v33; // rcx
  signed __int64 v34; // rcx
  _OWORD v35[2]; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v36; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
    MiMarkLockedChainAsProtected();
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0xFFFFDE0000000000uLL;
  v7 = 48 * v5 - 0x220000000000LL;
  v8 = a2[1];
  v9 = (_QWORD *)(48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL);
  v10 = a2[4];
  if ( v2 )
  {
    v27 = *(_QWORD *)(v2 + 16);
    v28 = 0xAAAAAAAAAAAAAAABuLL * ((v2 + 0x220000000000LL) >> 4);
    if ( qword_140C657C0 && (v27 & 0x10) == 0 )
      v27 &= ~qword_140C657C0;
    v11 = 0xFFFFFFFFFFLL;
    v29 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL;
    *v9 ^= (*v9 ^ v28) & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v7 + 24) = v29 | *(_QWORD *)(v7 + 24) & 0xFFFFFF0000000000uLL;
    result = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFLL;
    if ( ((v27 >> 12) & 0xFFFFFFFFFFLL) == v28 )
    {
      result = MiSwizzleInvalidPte((result << 12) | 0x880);
      *(_QWORD *)(v2 + 16) = result;
    }
    else
    {
      *(_QWORD *)(48 * v29 - 0x220000000000LL) = result | *(_QWORD *)(48 * v29 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
    }
    *(_QWORD *)(v2 + 40) ^= v11 & (*(_QWORD *)(v2 + 40) ^ *(_QWORD *)(a1 + 24));
  }
  else
  {
    v11 = 0xFFFFFFFFFFLL;
    if ( v8 == 0x3FFFFFFFFFLL )
    {
      PfnPriority = MiGetPfnPriority(48 * v5 - 0x220000000000LL);
      *(_QWORD *)(88LL * PfnPriority + *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 2960) = v32;
    }
    else
    {
      *(_QWORD *)(48 * v8 - 0x220000000000LL) ^= (*(_QWORD *)(48 * v8 - 0x220000000000LL) ^ v5) & 0xFFFFFFFFFFLL;
    }
    if ( v10 == 0x3FFFFFFFFFLL )
    {
      v30 = 88LL * (unsigned int)MiGetPfnPriority(v7);
      result = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(v30 + *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)) + 2968) = result;
    }
    else
    {
      result = v6;
      *(_QWORD *)(v6 + 48 * v10 + 24) ^= v11 & (*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(v6 + 48 * v10 + 24));
    }
  }
  if ( *(_DWORD *)(a1 + 8) == 2 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    v36 = 0LL;
    memset(v35, 0, sizeof(v35));
    MiPfnToStandbyLookaside(v13, v2, v35);
    v14 = a2[7];
    v15 = a2[10];
    v16 = *(_QWORD *)(a1 + 16);
    v17 = v36;
    if ( v14 == 0x3FFFFFFFFFLL )
      *((_QWORD *)v36 + 2) = v16;
    else
      MiSetNextStandbyPageSameNodeNoLockAsserts(48 * v14 - 0x220000000000LL, v16);
    v18 = *(_QWORD *)(a1 + 24);
    if ( v15 == 0x3FFFFFFFFFLL )
    {
      *((_QWORD *)v17 + 3) = v18;
    }
    else
    {
      v19 = 48 * v15 - 0x220000000000LL;
      v20 = (*(_QWORD *)(a1 + 24) & 0x7FFFFLL) << 40;
      v21 = *(_QWORD *)(v19 + 24);
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v20 | v21 & 0xF80000FFFFFFFFFFuLL, v21);
      if ( v21 != v22 )
      {
        do
        {
          v33 = v22;
          v22 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v19 + 24),
                  v20 | v22 & 0xF80000FFFFFFFFFFuLL,
                  v22);
        }
        while ( v33 != v22 );
      }
      *(_DWORD *)(v19 + 36) ^= (*(_DWORD *)(v19 + 36) ^ (v18 >> 19)) & 0x1FFFFF;
    }
    MiSetNextStandbyPageSameNodeNoLockAsserts((__int64)v9, v15);
    v24 = *(_QWORD *)(v7 + 24);
    v25 = (v23 & 0x7FFFF) << 40;
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), v25 | v24 & 0xF80000FFFFFFFFFFuLL, v24);
    if ( v24 != v26 )
    {
      do
      {
        v34 = v26;
        v26 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v7 + 24),
                v25 | v26 & 0xF80000FFFFFFFFFFuLL,
                v26);
      }
      while ( v34 != v26 );
    }
    *(_DWORD *)(v7 + 36) ^= (*(_DWORD *)(v7 + 36) ^ (v23 >> 19)) & 0x1FFFFF;
    result = (__int64)v36;
    _InterlockedExchangeAdd64(v36, *(_QWORD *)a1);
    v11 = 0xFFFFFFFFFFLL;
  }
  if ( !v2 )
  {
    *v9 ^= v11 & (*v9 ^ v10);
    *(_QWORD *)(v7 + 24) ^= v11 & (*(_QWORD *)(v7 + 24) ^ v8);
  }
  return result;
}
