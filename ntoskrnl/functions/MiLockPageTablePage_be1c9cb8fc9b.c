__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r9
  unsigned int v7; // r15d
  __int64 v8; // rcx
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v14; // zf
  unsigned __int32 v15; // eax
  unsigned int i; // r12d
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbp
  struct _KPRCB *v23; // r8
  __int64 v24; // rdx
  signed __int32 v25; // eax
  unsigned __int64 v26; // rbp
  struct _KPRCB *v27; // r8
  __int64 v28; // rdx
  signed __int32 v29; // eax
  int v30; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v4 = a1;
  if ( a2 == 1 )
  {
    v5 = a1;
  }
  else
  {
    v5 = 0LL;
    if ( !a2 )
      v5 = a1;
  }
  v6 = (_QWORD *)(v5 + 40);
  v32 = (_QWORD *)(v5 + 40);
  v7 = 1;
  if ( a2 == 1 )
    goto LABEL_43;
  while ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
LABEL_13:
    if ( a2 == 2 )
    {
      v10 = 3LL;
    }
    else
    {
      v10 = 1LL;
      if ( !a2 )
        v10 = 4LL;
    }
    v11 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    if ( (_UNKNOWN *)v11 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( v10 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v15 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - v10,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v15;
          LODWORD(CachedResidentAvailable) = v15;
          if ( v14 )
            goto LABEL_19;
        }
        while ( v10 <= v15 );
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v11, v10, 512LL) )
      return 0LL;
LABEL_19:
    for ( i = 0; ; ++i )
    {
      if ( i >= v10 )
      {
        if ( i == v10 )
          return v7;
        goto LABEL_36;
      }
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      if ( a2 == 1 )
      {
        v6 = v32;
        if ( v4 != 48 * (*v32 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
          break;
      }
      v17 = *(_QWORD *)(v4 + 24);
      v18 = v17 & 0x3FFFFFFFFFFFFFFFLL;
      v19 = v17 & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( v19 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_26;
      }
      else if ( v19 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 0;
        goto LABEL_36;
      }
      *(_QWORD *)(v4 + 24) = v17 ^ ((v18 + 0x10000) ^ v17) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_26:
      if ( v18 >= 0x10000 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_36:
        v22 = v10 - i;
        if ( (_UNKNOWN *)v11 == &MiSystemPartition )
        {
          v23 = KeGetCurrentPrcb();
          v24 = (int)v23->CachedResidentAvailable;
          if ( (_DWORD)v24 != -1 )
          {
            if ( v24 + v22 <= 0x100 && v22 < 0x80000 )
            {
              do
              {
                v25 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v23->CachedResidentAvailable,
                        v24 + v22,
                        v24);
                v14 = (_DWORD)v24 == v25;
                LODWORD(v24) = v25;
                if ( v14 )
                  return v7;
              }
              while ( v25 != -1 && v25 + v22 <= 0x100 );
            }
            if ( (int)v24 > 192
              && (_DWORD)v24 == _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v23->CachedResidentAvailable,
                                  192,
                                  v24) )
            {
              v22 += (int)v24 - 192;
            }
          }
        }
        if ( v22 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 17280), v22);
        return v7;
      }
      v20 = *(_BYTE *)(v4 + 34);
      v21 = 0LL;
      if ( (v20 & 0x10) == 0 )
      {
        if ( (!_bittest64((const signed __int64 *)(v4 + 16), 0xAu) & (unsigned __int8)~(v20 >> 3)) != 0 )
          v21 = MiCapturePageFileInfoInline(v4 + 16, 1LL, 0LL);
        *(_BYTE *)(v4 + 34) |= 0x10u;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 )
        MiReleasePageFileInfo(v11, v21, 1);
      v4 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = v10 - i;
    if ( (_UNKNOWN *)v11 != &MiSystemPartition )
      goto LABEL_79;
    v27 = KeGetCurrentPrcb();
    v28 = (int)v27->CachedResidentAvailable;
    if ( (_DWORD)v28 == -1 )
      goto LABEL_79;
    if ( v28 + v26 > 0x100 || v26 >= 0x80000 )
    {
LABEL_76:
      if ( (int)v28 > 192
        && (_DWORD)v28 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v27->CachedResidentAvailable,
                            192,
                            v28) )
      {
        v26 += (int)v28 - 192;
      }
LABEL_79:
      if ( v26 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 17280), v26);
      goto LABEL_81;
    }
    while ( 1 )
    {
      v29 = _InterlockedCompareExchange((volatile signed __int32 *)&v27->CachedResidentAvailable, v28 + v26, v28);
      v14 = (_DWORD)v28 == v29;
      LODWORD(v28) = v29;
      if ( v14 )
        break;
      if ( v29 == -1 || v29 + v26 > 0x100 )
        goto LABEL_76;
    }
LABEL_81:
    v32 = v6;
LABEL_43:
    v4 = 48 * (*v6 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  }
  v31 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
    v6 = v32;
  }
  if ( a2 == 1 && v4 != 48 * (*v6 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v32 = v6;
    goto LABEL_43;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( (v8 & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_13;
  }
  if ( (v8 & 0x3FFFFFFFFFFFFFFFuLL) < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v4 + 24) = v8 ^ (v8 ^ (v8 + 0x10000)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
