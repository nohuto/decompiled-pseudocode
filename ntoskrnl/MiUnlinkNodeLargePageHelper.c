/*
 * XREFs of MiUnlinkNodeLargePageHelper @ 0x14034FE70
 * Callers:
 *     MiLargePagePromote @ 0x14034EC80 (MiLargePagePromote.c)
 *     MiGetFreeLargePage @ 0x14034FBD0 (MiGetFreeLargePage.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x14064C4F4 (MiChangePageAttributeLargeFreeZeroPage.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiIncreaseAvailablePages @ 0x140288238 (MiIncreaseAvailablePages.c)
 *     MiPageListCollision @ 0x1402FD02C (MiPageListCollision.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUpdateAvailableEvents @ 0x1403A9340 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x140632B0C (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 *     MiWakeLargePageRebuild @ 0x14065BC3C (MiWakeLargePageRebuild.c)
 */

__int64 __fastcall MiUnlinkNodeLargePageHelper(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // r15
  __int64 v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v31; // rax
  int v32; // ecx
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rdx
  volatile signed __int32 *v35; // r9
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // [rsp+60h] [rbp+8h]
  int v39; // [rsp+70h] [rbp+18h]

  v39 = a3;
  v7 = (*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL;
  v8 = a3;
  v9 = (unsigned int)a3;
  v38 = (unsigned int)a3;
  v10 = *(_QWORD *)(qword_140C67048 + 8LL * (unsigned int)v7);
  v11 = 0x2944FF5AEC02945LL * (((__int64)a1 - *(_QWORD *)(v10 + 16)) >> 6);
  v12 = MiLargePageSizes[(unsigned int)a3];
  if ( v12 == 1 )
  {
    v15 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 17216));
    if ( v15 == *(_QWORD *)(v10 + 16152) || v15 == *(_QWORD *)(v10 + 16160) )
    {
      MiUpdateAvailableEvents(v10, v7, a3);
      v9 = v38;
      v8 = v39;
    }
    v13 = v15 + 1;
  }
  else
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 17216), -(__int64)v12);
    v14 = *(_QWORD *)(v10 + 16160);
    v15 = v13 - v12;
    if ( v13 - v12 <= v14 && v13 > v14 || (v16 = *(_QWORD *)(v10 + 16152), v15 <= v16) && v13 > v16 )
    {
      MiUpdateAvailableEvents(v10, v7, a3);
      v9 = v38;
      v8 = v39;
    }
  }
  if ( v15 <= 0x420 )
  {
    v31 = *(_QWORD *)(v10 + 16920);
    if ( !v31 || !*(_BYTE *)(v31 + 52) )
    {
      MiObtainFreePages(v10, v7, a3);
      v9 = v38;
      v8 = v39;
    }
    if ( v15 < 0xA0 && v13 >= 0xA0 && *(_DWORD *)(v10 + 1192) )
    {
      KeSetEvent((PRKEVENT)(v10 + 1048), 0, 0);
      v9 = v38;
      v8 = v39;
    }
  }
  if ( v15 < 0x9F )
  {
    v32 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
    if ( (v32 & 0xC) == 8 )
    {
      v17 = 1;
    }
    else if ( v15 < 0x20 && (_UNKNOWN *)v10 == &MiSystemPartition )
    {
      v17 = 0;
    }
    else if ( (v32 & 2) != 0 && v15 >= 0x21 )
    {
      v17 = 1;
    }
    else
    {
      v17 = (*(unsigned __int8 *)(v10 + 4) >> 4) & 1;
    }
  }
  else
  {
    v17 = 1;
  }
  if ( (a5 & 0x40) == 0 && !v17 )
  {
    MiIncreaseAvailablePages(v10, v12, a3);
    return 0LL;
  }
  v18 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v19 = *(_QWORD **)(a2 + 8), *v19 != a2) )
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
  {
    MiPageListCollision(a2, 1, 0);
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
    v9 = v38;
    v8 = v39;
  }
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v21 = *(_BYTE *)(a2 + 34) & 7;
  --a1[134 * v9 + v21];
  v22 = v21 + (v20 < 0x100000 ? 2 : 0) + 134 * v9;
  --a1[v22 + 2];
  v23 = *(_QWORD *)(qword_140C67048
                  + 8 * ((*(_QWORD *)(16 * ((a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  if ( *(_BYTE *)(v23 + 15782) )
  {
    if ( v8 == 2 )
    {
      _InterlockedExchangeAdd8((volatile signed __int8 *)(*(_QWORD *)(v23 + 16048) + (v20 >> 9)), 0xFFu);
    }
    else if ( v8 == 1 )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)(v23 + 16072) + 2 * (v20 >> 18)));
    }
  }
  v24 = 134 * v9
      + ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) >> 6)
      + 4 * (a4 + 4 * (v21 + (v20 < 0x100000 ? 2 : 0)));
  if ( MiLargePageSizes[v9] == 16 )
    v25 = v20 >> 4;
  else
    v25 = v20 / MiLargePageSizes[v9];
  v26 = (unsigned int)dword_140C65800[v9];
  if ( v26 == 16 )
    LODWORD(v25) = v25 & 0xF;
  else
    v25 %= v26;
  --*(_QWORD *)(a1[v24 + 70] + 24LL * (unsigned int)v25 + 16);
  --a1[v24 + 6];
  v27 = 2560LL;
  if ( (_DWORD)v21 )
    v27 = 2688LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + v10), -(__int64)v12);
  if ( dword_140C67ACC == 1 )
  {
    v33 = v20 & 0x1F;
    v34 = v12;
    v35 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (v20 >> 5));
    if ( v33 + v12 > 0x20 )
    {
      if ( (v20 & 0x1F) != 0 )
      {
        _InterlockedOr(v35, ((1 << (32 - (v20 & 0x1F))) - 1) << v33);
        v34 = v12 - (32 - (unsigned int)(v20 & 0x1F));
        ++v35;
      }
      if ( v34 >= 0x20 )
      {
        v37 = v34 >> 5;
        v34 += -32LL * (v34 >> 5);
        do
        {
          *v35++ = -1;
          --v37;
        }
        while ( v37 );
      }
      if ( !v34 )
        goto LABEL_23;
      v36 = (1 << v34) - 1;
    }
    else
    {
      if ( v12 == 32 )
      {
        *v35 = -1;
        goto LABEL_23;
      }
      v36 = ((1 << v12) - 1) << v33;
    }
    _InterlockedOr(v35, v36);
  }
LABEL_23:
  if ( !(_DWORD)v21 )
  {
    if ( *(_BYTE *)(v10 + 15781) )
    {
      LODWORD(v21) = 1;
    }
    else if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    }
  }
  v28 = ZeroPte;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( (_DWORD)v21 == 1 )
  {
    if ( ZeroPte )
    {
      v28 = ZeroPte & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else
    {
      v28 = 128LL;
      if ( qword_140C657C0 )
      {
        v28 = 144LL;
        if ( (qword_140C657C0 & 0x80u) == 0LL )
          v28 = qword_140C657C0 | 0x80;
      }
    }
  }
  v29 = *(_QWORD *)(a2 + 16);
  if ( qword_140C657C0 && (v29 & 0x10) == 0 )
    v29 &= ~qword_140C657C0;
  *(_QWORD *)(a2 + 16) = v28;
  if ( HIDWORD(v29) == 4294967293 )
    *(_QWORD *)(a2 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a2 + 16), 4294967293LL);
  if ( v12 == 16
    && (unsigned __int64)(16 * (a1[268] + a1[269] + 32LL * (a1[134] + a1[135] + ((*a1 + a1[1]) << 9)))) <= 0x200
    && (MiFlags & 0x30) != 0 )
  {
    MiWakeLargePageRebuild(v10, (unsigned int)v11, 0LL);
  }
  return 1LL;
}
