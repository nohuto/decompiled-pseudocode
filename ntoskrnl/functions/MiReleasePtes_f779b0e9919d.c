unsigned __int64 __fastcall MiReleasePtes(__int64 a1, __int64 *a2, unsigned int a3)
{
  ULONG_PTR v3; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v7; // rsi
  int v8; // r12d
  _QWORD *v9; // rcx
  ULONG_PTR v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  bool v17; // zf
  __int64 v18; // rax
  ULONG_PTR v19; // rcx
  ULONG_PTR v20; // r10
  unsigned __int64 v21; // r8
  volatile signed __int32 *v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v25[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v24 = 0LL;
  memset(v25, 0, 0xB8uLL);
  if ( (__int64 *)a1 == &qword_140C695C0 && (dword_140D1D1CC & 2) != 0 )
    MiCheckPteRelease(a2, v3);
  BugCheckParameter4 = ((__int64)a2 - *(_QWORD *)(a1 + 16)) >> 3;
  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    BugCheckParameter4 >>= 4;
  v7 = v3 >> 4;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
    v7 = v3;
  if ( (unsigned int)v3 < 0x200 || (__int64 *)a1 != &qword_140C695C0 )
  {
    v8 = 0;
    if ( BugCheckParameter4 >= *(_QWORD *)a1 )
      goto LABEL_27;
    if ( v7 > 1 )
    {
      if ( *(_QWORD *)a1 - BugCheckParameter4 < v7 )
        goto LABEL_27;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
      v14 = (_QWORD *)(v12 + 8 * (BugCheckParameter4 >> 6));
      v15 = (_QWORD *)(v12 + 8 * ((BugCheckParameter4 + v7 - 1) >> 6));
      if ( v14 == v15 )
      {
        v17 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4) & v13) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v7) << BugCheckParameter4;
      }
      else
      {
        if ( ((-1LL << BugCheckParameter4) & v13) != -1LL << BugCheckParameter4 )
          goto LABEL_27;
        v16 = v14 + 1;
        if ( v16 != v15 )
        {
          while ( *v16 == -1LL )
          {
            if ( ++v16 == v15 )
              goto LABEL_24;
          }
          goto LABEL_27;
        }
LABEL_24:
        v17 = (*v16 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1))) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)BugCheckParameter4 + (unsigned __int8)v7 - 1);
      }
      if ( v17 )
        goto LABEL_13;
    }
    else if ( v7 == 1
           && _bittest64(
                (const signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * (BugCheckParameter4 >> 6)),
                BugCheckParameter4 & 0x3F) )
    {
LABEL_13:
      if ( !(_DWORD)v3 )
        goto LABEL_16;
      goto LABEL_14;
    }
LABEL_27:
    KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)a2 << 25) >> 16, v3, BugCheckParameter4);
  }
  v8 = 1;
LABEL_14:
  v9 = a2;
  v10 = v3;
  do
  {
    *v9++ = ZeroPte;
    --v10;
  }
  while ( v10 );
LABEL_16:
  result = MiInsertCachedPte(a1, a2, (unsigned int)v3);
  if ( !(_DWORD)result )
  {
    if ( v8 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v7);
      return MiReturnSystemPtes(a1, v8, BugCheckParameter4, (v3 + 511) & 0xFFFFFE00, 1);
    }
    else
    {
      v24 = 0LL;
      MiInitializeTbFlushStamps(&v24);
      v18 = v24;
      if ( (_DWORD)v3 )
      {
        v19 = v3;
        do
        {
          *a2++ = v18;
          --v19;
        }
        while ( v19 );
      }
      if ( qword_140C657C0 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140C657C0;
      if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
      {
        v25[1] = 20LL;
        LODWORD(v25[0]) = 0;
        WORD2(v25[0]) = 0;
        v25[2] = 0LL;
        v25[3] = 0LL;
        MiInsertTbFlushEntry(v25, (__int64)((_QWORD)&a2[-v3] << 25) >> 16, v3);
        MiFlushTbList(v25);
      }
      v20 = BugCheckParameter4 & 0x1F;
      v21 = v7;
      v22 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (BugCheckParameter4 >> 5));
      if ( v7 + v20 > 0x20 )
      {
        if ( (BugCheckParameter4 & 0x1F) != 0 )
        {
          _InterlockedAnd(v22, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v20));
          v21 = v7 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
          ++v22;
        }
        if ( v21 >= 0x20 )
        {
          v23 = v21 >> 5;
          v21 += -32LL * (v21 >> 5);
          do
          {
            *v22++ = 0;
            --v23;
          }
          while ( v23 );
        }
        if ( v21 )
          _InterlockedAnd(v22, -1 << v21);
      }
      else if ( v7 == 32 )
      {
        *v22 = 0;
      }
      else
      {
        _InterlockedAnd(v22, ~(((1 << v7) - 1) << v20));
      }
      result = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), v7);
      if ( result > 0x40000 )
        return MiAttemptCoalesce(a1, BugCheckParameter4, v7);
    }
  }
  return result;
}
