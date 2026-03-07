void __fastcall MiFreeSlabEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  char v15; // r8
  volatile signed __int32 *v16; // r10
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r9d
  unsigned __int64 v22; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v25; // zf
  signed __int32 v26; // eax
  signed __int32 v27[22]; // [rsp+0h] [rbp-58h] BYREF
  int v29; // [rsp+70h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 48LL * *(_QWORD *)(a2 + 24) - 0x220000000000LL;
  v7 = 48LL * *(_QWORD *)(a2 + 32) - 0x220000000000LL;
  if ( v6 <= v7 )
  {
    v8 = v6 + 24;
    do
    {
      v9 = *(unsigned __int8 *)(v8 + 10) >> 6;
      if ( v9 != 1 )
      {
        if ( v9 == 3 )
        {
          MiChangePageAttribute(v6, 1, 0);
        }
        else
        {
          v19 = (*(_QWORD *)v8 >> 59) & 7LL;
          if ( ((*(_QWORD *)v8 >> 59) & 7) == 0
            || (_InterlockedOr(v27, 0), MiTbFlushTimeStampMayNeedFlush(v19, KiTbFlushTimeStamp, 7)) )
          {
            *(_QWORD *)(v8 - 8) = v5;
            v5 = v6;
          }
          else
          {
            MiChangePageAttribute(v6, v20 - 6, v20 - 6 + 3);
          }
        }
      }
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(__int64 *)v8 < 0 );
      }
      if ( !v4 )
        v4 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v8 + 16) >> 43) & 0x3FFLL));
      v10 = *(_DWORD *)(a1 + 80);
      if ( v10 <= 3 && v10 != 2 )
        MiSetPfnIdentity(v6, 0);
      v11 = *(_QWORD *)v8 & 0xC000000000000001uLL;
      *(_WORD *)(v8 + 8) = 2;
      *(_QWORD *)v8 = v11 | 1;
      *(_BYTE *)(v8 + 10) = *(_BYTE *)(v8 + 10) & 0xF8 | 6;
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 48LL;
      v8 += 48LL;
    }
    while ( v6 <= v7 );
    v3 = a2;
  }
  v12 = 512LL;
  MiUpdateSlabPagePlaceholderState(a1, *(_QWORD *)(v3 + 24), 512LL, 0);
  if ( v5 )
    MiChangePageAttributeBatch(v5, 1u, ZeroPte);
  LOBYTE(v13) = 1;
  v14 = *(_QWORD *)(v3 + 24) >> 9;
  v15 = v14 & 0x1F;
  v16 = (volatile signed __int32 *)(qword_140C6EFF0 + 4LL * (*(_QWORD *)(v3 + 24) >> 14));
  if ( (unsigned __int64)(v14 & 0x1F) + 1 <= 0x20 )
  {
    v17 = ~(1 << v15);
LABEL_14:
    _InterlockedAnd(v16, v17);
    goto LABEL_15;
  }
  if ( (v14 & 0x1F) == 0 )
    goto LABEL_33;
  v21 = v14 & 0x1F;
  _InterlockedAnd(v16++, ~(((1 << (32 - v21)) - 1) << v15));
  v13 = 1LL - (unsigned int)(32 - v21);
  if ( v13 >= 0x20 )
  {
    v22 = v13 >> 5;
    v13 += -32LL * (v13 >> 5);
    do
    {
      *v16++ = 0;
      --v22;
    }
    while ( v22 );
  }
  if ( v13 )
  {
LABEL_33:
    v17 = -1 << v13;
    goto LABEL_14;
  }
LABEL_15:
  MiFreeLargePageMemory(*(_QWORD *)(v3 + 24), 1u, 0xEu);
  if ( (*(_DWORD *)(v3 + 140) & 2) == 0 )
    goto LABEL_16;
  MiReturnCommit(v4, 512LL, v18);
  if ( (_UNKNOWN *)v4 != &MiSystemPartition )
    goto LABEL_44;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_44;
  if ( (unsigned __int64)(CachedResidentAvailable + 512) > 0x100 )
  {
LABEL_40:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v12 = (int)CachedResidentAvailable - 192 + 512LL;
    }
    if ( !v12 )
      goto LABEL_16;
LABEL_44:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 17280), v12);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v26 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + 512,
            CachedResidentAvailable);
    v25 = (_DWORD)CachedResidentAvailable == v26;
    LODWORD(CachedResidentAvailable) = v26;
    if ( v25 )
      break;
    if ( v26 == -1 || (unsigned __int64)(v26 + 512LL) > 0x100 )
      goto LABEL_40;
  }
LABEL_16:
  ExFreePoolWithTag((PVOID)v3, 0);
}
