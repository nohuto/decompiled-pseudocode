/*
 * XREFs of MiInsertLargePageChain @ 0x1402CADB0
 * Callers:
 *     MiInsertDemotedPages @ 0x1402CACC8 (MiInsertDemotedPages.c)
 * Callees:
 *     MiConvertEntireLargePageToSmall @ 0x140277140 (MiConvertEntireLargePageToSmall.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsFreeZeroPfnCold @ 0x140350240 (MiIsFreeZeroPfnCold.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiWakeLargePageWaiters @ 0x14064DA54 (MiWakeLargePageWaiters.c)
 */

void __fastcall MiInsertLargePageChain(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  __int64 v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // r15
  char v17; // r12
  __int64 v18; // r9
  char v19; // cl
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  bool v24; // zf
  __int64 v25; // rbx
  __int64 v26; // rdx
  char v27; // al
  int IsFreeZeroPfnCold; // [rsp+48h] [rbp-29h]
  int v29; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v30; // [rsp+50h] [rbp-21h] BYREF
  __int128 v31; // [rsp+58h] [rbp-19h] BYREF
  __int128 v32; // [rsp+68h] [rbp-9h]

  v30 = a4;
  v31 = 0LL;
  v32 = 0LL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a2);
  v10 = MiLargePageSizes[v9];
  if ( (_DWORD)v9 == 2 )
  {
    MiConvertEntireLargePageToSmall(a2, 2, 1, a3, 0LL, 0LL, 0LL);
  }
  else
  {
    v11 = (unsigned int)(v9 + 1);
    v12 = MiLargePageSizes[v11];
    v13 = v10 / v12;
    v29 = 0;
    v14 = v10 + 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4) - v12;
    v15 = 48 * (v10 - v12) + a2;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    *(_QWORD *)&v31 = v14;
    *((_QWORD *)&v31 + 1) = a3 | 0x300000000LL;
    LOBYTE(v32) = 2;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 23104));
    v16 = v30;
    v17 = ~(_BYTE)v11 & 3;
LABEL_4:
    v18 = 4294967293LL;
    while ( 1 )
    {
      v19 = *(_BYTE *)(v15 + 34);
      if ( (v19 & 7) == 6 )
      {
        v20 = *(_QWORD *)(v15 + 16);
        *(_BYTE *)(v15 + 34) = v19 & 0xF8 | 5;
        v21 = 0LL;
        if ( IsFreeZeroPfnCold )
          v21 = 0xFFFFFFFD00000000uLL;
        if ( v20 && qword_140C657C0 )
        {
          if ( (v20 & 0x10) != 0 )
            LODWORD(v20) = v20 & 0xFFFFFFEF;
          else
            LODWORD(v20) = ~(_DWORD)qword_140C657C0 & v20;
        }
        v22 = v21 | (unsigned int)v20;
        if ( qword_140C657C0 )
        {
          if ( (qword_140C657C0 & v22) != 0 )
            v22 |= 0x10uLL;
          else
            v22 |= qword_140C657C0;
        }
        *(_QWORD *)(v15 + 16) = v22;
        *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 6;
      }
      else
      {
        v26 = 0LL;
        if ( IsFreeZeroPfnCold )
          v26 = v18;
        *(_QWORD *)(v15 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), v26);
      }
      *(_BYTE *)(v15 + 36) = v17 | *(_BYTE *)(v15 + 36) & 0xFC;
      if ( v15 == v16 )
      {
        v27 = *(_BYTE *)(v15 + 34);
        *(_QWORD *)v15 = 0LL;
        *(_BYTE *)(v15 + 34) = v27 & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v24 = *(_QWORD *)(a1 + 23136) == 0LL;
        *(_QWORD *)&v31 = v14;
        if ( v24 )
        {
          HIDWORD(v31) |= 2u;
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 23104));
          HIDWORD(v31) &= ~2u;
        }
        MiInsertLargePageInNodeList(&v31);
        v18 = 4294967293LL;
      }
      LODWORD(v13) = v13 - 1;
      if ( !(_DWORD)v13 )
        break;
      v14 -= v12;
      v15 += -48LL * v12;
      v23 = HIDWORD(v31);
      v24 = (BYTE12(v31) & 2) == 0;
      if ( (BYTE12(v31) & 2) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 23104));
          v18 = 4294967293LL;
          v23 = HIDWORD(v31) & 0xFFFFFFFD;
          HIDWORD(v31) &= ~2u;
        }
        else
        {
          v23 = HIDWORD(v31);
        }
        v24 = (v23 & 2) == 0;
      }
      if ( v24 )
      {
        LODWORD(v30) = 0;
        HIDWORD(v31) = v23 | 2;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v30);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 23104));
        goto LABEL_4;
      }
    }
  }
  if ( a6 )
  {
    if ( (BYTE12(v31) & 2) == 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 23104));
    v25 = *(_QWORD *)(a1 + 23008);
    --*(_DWORD *)(a1 + 23004);
    *(_QWORD *)(a1 + 23008) = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 23104));
    if ( v25 )
      MiWakeLargePageWaiters(v25);
  }
  else if ( (BYTE12(v31) & 2) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 23104));
  }
}
