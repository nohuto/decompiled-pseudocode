/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x1402995B0
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x1402EF1FC (MiTryUnlinkNodeLargePage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F50CC (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6418 (MiLargePagePromote.c)
 *     MiUnlinkNodeLargePages @ 0x1403F6768 (MiUnlinkNodeLargePages.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiIncreaseAvailablePages @ 0x14027F560 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x140299A00 (MiDecreaseAvailablePages.c)
 *     MiSetPfnPageState @ 0x1402AA590 (MiSetPfnPageState.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiPageListCollision @ 0x1402EDC1C (MiPageListCollision.c)
 *     MiWakeLargePageRebuild @ 0x14038CF00 (MiWakeLargePageRebuild.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  __int64 *v14; // rax
  __int64 **v15; // rcx
  char v16; // r8
  unsigned __int64 v17; // r11
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r10
  volatile signed __int32 *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+78h] [rbp+20h]

  v32 = a4;
  v8 = a3;
  v9 = *(_QWORD *)(qword_140C4E648 + 8 * (((unsigned __int64)a2[5] >> 39) & 0x3FF));
  v10 = MiLargePageSizes[a3];
  v11 = MiDecreaseAvailablePages(v9, v10, -1LL, 0LL);
  if ( (a5 & 8) == 0 && !v11 )
  {
    MiIncreaseAvailablePages(v9, v10, v12);
    return 0LL;
  }
  v14 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v15 = (__int64 **)a2[1], *v15 != a2) )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = (__int64)v15;
  v16 = *((_BYTE *)a2 + 34);
  if ( (v16 & 8) != 0 )
  {
    MiPageListCollision(a2, 1LL);
    MiSetOriginalPtePfnFromFreeList(a2 + 2);
    v16 = *((_BYTE *)a2 + 34);
  }
  v17 = (__int64)(a2 + 0xB000000000LL) / 48;
  v18 = ((__int64)a1 - *(_QWORD *)(v9 + 16)) / 4544;
  v19 = v16 & 7;
  --a1[134 * v8 + v19];
  v20 = 2LL;
  if ( v17 < 0x100000 )
    v20 = 4LL;
  --a1[134 * v8 + v19 + v20];
  v21 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(48 * v17 - 0x57FFFFFFFD8LL) >> 39) & 0x3FFLL));
  if ( *(_BYTE *)(v21 + 4830) )
  {
    if ( a3 == 2 )
    {
      --*(_BYTE *)(*(_QWORD *)(v21 + 5104) + (v17 >> 9));
    }
    else if ( a3 == 1 )
    {
      --*(_WORD *)(*(_QWORD *)(v21 + 5128) + 2 * (v17 >> 18));
    }
  }
  v22 = (unsigned __int64)*((unsigned __int8 *)a2 + 34) >> 6;
  v23 = v22 + 134 * v8 + 4 * (v32 + 4 * (v19 + (v17 < 0x100000 ? 2 : 0)));
  v24 = 3 * (v17 / MiLargePageSizes[v8] % (unsigned int)dword_140C4DF80[v8]);
  --*(_QWORD *)(a1[v23 + 70] + 8 * v24 + 16);
  v25 = 2240LL;
  --a1[v23 + 6];
  if ( (_DWORD)v19 )
    v25 = 2304LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + v9), -(__int64)v10);
  if ( dword_140C4E6CC == 1 )
  {
    v26 = ((__int64)(a2 + 0xB000000000LL) / 48) & 0x1F;
    v23 = v10;
    v27 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v17 >> 5));
    if ( v26 + v10 > 0x20 )
    {
      if ( (v17 & 0x1F) != 0 )
      {
        v22 = 32 - (unsigned int)(v17 & 0x1F);
        _InterlockedOr(v27, ((1 << (32 - (v17 & 0x1F))) - 1) << v26);
        v23 = v10 - v22;
        ++v27;
      }
      if ( v23 >= 0x20 )
      {
        v22 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v27++ = -1;
          --v22;
        }
        while ( v22 );
      }
      if ( !v23 )
        goto LABEL_30;
      v28 = (1 << v23) - 1;
    }
    else
    {
      if ( v10 == 32 )
      {
        *v27 = -1;
        goto LABEL_30;
      }
      v28 = ((1 << v10) - 1) << v26;
    }
    _InterlockedOr(v27, v28);
  }
LABEL_30:
  if ( !(_DWORD)v19 )
  {
    if ( *(_BYTE *)(v9 + 4829) == 1 )
    {
      LODWORD(v19) = 1;
    }
    else if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero((__int64)(a2 + 0xB000000000LL) / 48);
    }
  }
  MiSetPfnPageState(a2, 5LL, v22, v23);
  v29 = ZeroPte;
  v31 = ZeroPte;
  if ( (_DWORD)v19 == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&v31);
    v29 = v31;
  }
  v30 = a2[2];
  if ( qword_140C4DF40 && (v30 & 0x10) == 0 )
    v30 &= ~qword_140C4DF40;
  a2[2] = v29;
  if ( HIDWORD(v30) == 4294967293 )
    a2[2] = MiUpdatePageFileHighInPte(v29, 4294967293LL);
  if ( v10 == 16
    && (unsigned __int64)(16 * (a1[268] + a1[269] + 32LL * (a1[134] + a1[135] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v9, (unsigned int)v18, 0LL);
  }
  return 1LL;
}
