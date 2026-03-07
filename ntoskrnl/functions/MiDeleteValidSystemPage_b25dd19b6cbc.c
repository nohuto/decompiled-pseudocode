void __fastcall MiDeleteValidSystemPage(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v6; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  signed __int64 v11; // r15
  __int64 v12; // rcx
  signed __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int v15; // eax
  signed __int64 v16; // rax
  signed __int64 v17; // rax
  volatile signed __int32 *v18; // r15
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  int IsZero; // ebx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  signed __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // [rsp+30h] [rbp-B8h] BYREF
  int v34; // [rsp+34h] [rbp-B4h] BYREF
  __int64 v35; // [rsp+38h] [rbp-B0h]
  ULONG_PTR v36; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-A0h]
  __int128 v38; // [rsp+50h] [rbp-98h]
  __int128 v39; // [rsp+60h] [rbp-88h]
  __int64 v40; // [rsp+70h] [rbp-78h]
  signed __int64 v41; // [rsp+78h] [rbp-70h]
  __int128 v42; // [rsp+80h] [rbp-68h]
  __int128 v43; // [rsp+90h] [rbp-58h]
  __int128 v44; // [rsp+A0h] [rbp-48h]
  int v45; // [rsp+F0h] [rbp+8h]
  int v46; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v47; // [rsp+108h] [rbp+20h]

  v47 = a4;
  v45 = a1;
  v4 = ZeroPte;
  v6 = *(_QWORD *)a2;
  v8 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v27 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v28 = v6 | 0x20;
      if ( (v27 & 0x20) == 0 )
        v28 = v6;
      v6 = v28;
      if ( (v27 & 0x42) != 0 )
        v6 = v28 | 0x42;
    }
  }
  v9 = *(unsigned __int16 *)(a1 + 174);
  v10 = qword_140C67048;
  v36 = v6;
  v37 = *(_QWORD *)(qword_140C67048 + 8 * v9);
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFFLL);
  v12 = *(_QWORD *)(v11 - 0x220000000000LL + 40);
  v13 = v11 - 0x220000000000LL;
  v35 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)v12 >> 43) & 0x3FF));
  if ( v12 < 0 )
  {
    if ( (v12 & 0x10000000000LL) == 0 )
    {
      v24 = *(_QWORD *)(v13 + 8);
      if ( v24 > 0 )
        v8 = v24 | 0x8000000000000000uLL;
    }
    v14 = 48 * MiGetContainingPageTable(a2) - 0x220000000000LL;
    v33 = 0;
    v18 = (volatile signed __int32 *)(v13 + 24);
    while ( _interlockedbittestandset64(v18, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v33);
      while ( *(__int64 *)v18 < 0 );
    }
    if ( (v6 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v13);
    v25 = *(_QWORD *)(v13 + 16);
    if ( (v25 & 0x400) == 0 || (v6 & 0x200) != 0 )
      goto LABEL_43;
    if ( qword_140C657C0 && (v25 & 0x10) == 0 )
      v25 &= ~qword_140C657C0;
    if ( (*(_DWORD *)(*(_QWORD *)(v25 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_43:
      ++*(_QWORD *)(v47 + 32);
LABEL_12:
    if ( (a3 & 0x10) != 0 )
    {
      v23 = *(_BYTE *)(v13 + 35);
      if ( (v23 & 8) != 0 )
        *(_BYTE *)(v13 + 35) = v23 & 0xF7;
    }
    v19 = ZeroPte;
    if ( MiPteInShadowRange(a2) )
    {
      if ( MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
          v19 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a2 = v19;
        MiWritePteShadow(a2, v19, v32);
        goto LABEL_15;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v19 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v19;
    v18 = (volatile signed __int32 *)(v13 + 24);
LABEL_15:
    if ( (*(_BYTE *)(v13 + 34) & 7) != 6 )
      MiBadShareCount(v13);
    v20 = (*(_QWORD *)v18 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v18 ^= (v20 ^ *(_QWORD *)v18) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v20 )
      IsZero = 2;
    else
      IsZero = MiPfnShareCountIsZero(v13);
    _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v34);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v14 + 34) & 7) != 6 )
      MiBadShareCount(v14);
    v22 = *(_QWORD *)(v14 + 24);
    *(_QWORD *)(v14 + 24) = v22 ^ (((v22 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v22) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v22 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v14);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v4 )
      MiReleasePageFileInfo(v35, v4, 1);
    if ( v8 )
      IsZero = MiDecrementCombinedPteEx(v45, v8, 0);
    if ( IsZero == 3 )
      ++*(_QWORD *)(v47 + 8);
    return;
  }
  if ( v13 != qword_140C69370 )
  {
    if ( (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v6, *(_QWORD *)(v13 + 8));
    v14 = 48 * (v12 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v46 = 0;
    ++*(_QWORD *)(v47 + 32);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v46);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v13 + 40) >> 60) & 7) == 2 )
    {
      v4 = MiCaptureDirtyBitToPfn(v11 - 0x220000000000LL);
      v15 = *(unsigned __int16 *)(v13 + 32);
      if ( (!(_WORD)v15 || v15 > 2 && (v15 != 3 || (*(_BYTE *)(v13 + 34) & 8) == 0)) && v35 != v37 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, 0xAAAAAAAAAAAAAAABuLL * (v11 >> 4), *(unsigned __int16 *)(v13 + 32));
      v16 = *(_QWORD *)(v13 + 40);
      v40 = 0LL;
      v41 = v16;
      v38 = 0LL;
      v39 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 40), v16 & 0x8FFFFFFFFFFFFFFFuLL, v16);
      *((_QWORD *)&v44 + 1) = v17;
      if ( v41 != v17 )
      {
        do
        {
          v41 = v17;
          v31 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 40), v17 & 0x8FFFFFFFFFFFFFFFuLL, v17);
          *((_QWORD *)&v44 + 1) = v17;
        }
        while ( v31 != v17 );
      }
    }
    v18 = (volatile signed __int32 *)(v13 + 24);
    if ( (a3 & 4) != 0 )
    {
      v18 = (volatile signed __int32 *)(v13 + 24);
      if ( (unsigned int)MiIsPfnSystemCharged(v13) )
      {
        MiDriverPageIsDangling();
        *(_BYTE *)(v13 + 35) &= ~0x20u;
        v18 = (volatile signed __int32 *)(v13 + 24);
      }
    }
    goto LABEL_12;
  }
  v29 = ZeroPte;
  if ( !MiPteInShadowRange(a2) )
  {
LABEL_67:
    *(_QWORD *)a2 = v29;
    return;
  }
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v29 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_67;
  }
  if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
    v29 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)a2 = v29;
  MiWritePteShadow(a2, v29, v30);
}
