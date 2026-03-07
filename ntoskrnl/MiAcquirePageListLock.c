__int64 __fastcall MiAcquirePageListLock(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r13d
  __int64 v7; // r15
  __int64 v8; // rsi
  ULONG_PTR v9; // r14
  int v10; // r12d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  char v16; // cl
  int v17; // r9d
  ULONG_PTR v18; // r8
  char *v19; // rax
  __int64 v20; // r12
  char v21; // al
  __int64 v22; // r14
  unsigned int v23; // eax
  int v24; // edx
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  int v32; // r10d
  int v33; // ecx
  signed __int32 v34; // [rsp+30h] [rbp-68h]
  __int64 v35; // [rsp+38h] [rbp-60h]
  signed __int32 v37; // [rsp+A8h] [rbp+10h]
  signed __int32 v38; // [rsp+A8h] [rbp+10h]

  v4 = 0LL;
  v5 = 0;
  v7 = a2;
  v8 = a1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( v9 < qword_140C67DE0 || v9 >= qword_140C67DE0 + 2048 )
  {
    v10 = 0;
    if ( (unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0LL) )
      v5 = 1;
  }
  else
  {
    v10 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8 + 32, a2);
  }
  else
  {
    _m_prefetchw((const void *)(v8 + 32));
    v37 = *(_DWORD *)(v8 + 32) & 0x7FFFFFFF;
    v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), v37 + 1, v37);
    if ( v34 != v37 )
    {
      while ( v34 >= 0 )
      {
        v38 = v34;
        v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), v34 + 1, v34);
        if ( v34 == v38 )
          goto LABEL_6;
      }
      LOBYTE(a2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v8 + 32, a2);
    }
  }
LABEL_6:
  v11 = *(_QWORD *)v7 & 0xFFFFFFFFFFLL;
  v12 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFLL;
  if ( v12 == 0x3FFFFFFFFFLL )
    v13 = v8 + 40;
  else
    v13 = 48 * v12 - 0x220000000000LL;
  v14 = v8 + 40;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    *(_QWORD *)(a4 + 16) = v13;
    v15 = a4 + 16;
    *(_QWORD *)(a4 + 8) = v12;
    *(_BYTE *)(a4 + 24) = 1;
    if ( v11 != 0x3FFFFFFFFFLL )
      v14 = 48 * v11 - 0x220000000000LL;
    if ( v11 == v12 )
    {
      v16 = 0;
LABEL_14:
      *(_BYTE *)(a4 + 48) = v16;
      if ( *(_DWORD *)(a1 + 8) == 2 && !v10 && !v5 )
      {
        v35 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(48 * v9 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
        v17 = dword_140C65708;
        v18 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v9) >> 4);
        if ( dword_140C65704 > (unsigned int)dword_140C65708
          || (v19 = (char *)qword_140C65748 + 16 * dword_140C65704, v18 < *(_QWORD *)v19)
          || dword_140C65704 != dword_140C65708 && v18 >= *((_QWORD *)v19 + 2) )
        {
          v32 = 0;
          if ( dword_140C65708 < 0 )
LABEL_67:
            KeBugCheckEx(0x1Au, 0x6201uLL, v18, 0LL, 0LL);
          while ( 1 )
          {
            v33 = (v32 + v17) >> 1;
            v19 = (char *)qword_140C65748 + 16 * v33;
            if ( v18 < *(_QWORD *)v19 )
            {
              if ( !v33 )
                KeBugCheckEx(0x1Au, 0x6200uLL, v18, (ULONG_PTR)qword_140C65748, 0LL);
              v17 = v33 - 1;
            }
            else
            {
              if ( v33 == dword_140C65708 || v18 < *((_QWORD *)v19 + 2) )
              {
                dword_140C65704 = (v32 + v17) >> 1;
                break;
              }
              v32 = v33 + 1;
            }
            if ( v17 < v32 )
              goto LABEL_67;
          }
        }
        v20 = *((unsigned int *)v19 + 2);
        v21 = *(_BYTE *)(48 * v9 - 0x220000000000LL + 35);
        if ( (v21 & 8) != 0 )
          v22 = 5LL;
        else
          v22 = v21 & 7;
        if ( qword_140C65750 )
          v23 = MiPageToChannel(v18);
        else
          v23 = 0;
        v24 = *(_DWORD *)(v7 + 36);
        v25 = *(_QWORD *)(v35 + 16) + 25408 * v20 + 88 * (v22 + 8LL * v23);
        v26 = (8LL * (v24 & 0xFFE00000)) | (((*(_QWORD *)v7 >> 20) | *(_QWORD *)(v7 + 40) & 0xF80000000000000uLL) >> 20);
        if ( v26 == 0x3FFFFFFFFFLL )
          v27 = v25 + 3296;
        else
          v27 = 48 * v26 - 0x220000000000LL;
        v28 = (*(_QWORD *)(v7 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(v24 & 0x1FFFFF) << 19);
        if ( v28 == 0x3FFFFFFFFFLL )
          v11 = v25 + 3296;
        else
          v11 = 48 * v28 - 0x220000000000LL;
        v29 = 0LL;
        v30 = a4 + 16;
        while ( !*(_BYTE *)(v30 + 8) || v27 != *(_QWORD *)v30 )
        {
          ++v29;
          v30 += 24LL;
          if ( v29 >= 4 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
              goto LABEL_48;
            *(_BYTE *)(a4 + 96) = 1;
            break;
          }
        }
        *(_QWORD *)(a4 + 88) = v27;
        *(_QWORD *)(a4 + 80) = v26;
        while ( !*(_BYTE *)(v15 + 8) || v11 != *(_QWORD *)v15 )
        {
          ++v4;
          v15 += 24LL;
          if ( v4 >= 4 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
              goto LABEL_48;
            *(_QWORD *)(a4 + 64) = v11;
            *(_QWORD *)(a4 + 56) = v28;
            *(_BYTE *)(a4 + 72) = 1;
            break;
          }
        }
      }
      *(_BYTE *)a4 = 1;
      return 1LL;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      *(_QWORD *)(a4 + 40) = v14;
      v16 = 1;
      *(_QWORD *)(a4 + 32) = v11;
      goto LABEL_14;
    }
LABEL_48:
    v8 = a1;
  }
  *(_BYTE *)a4 = 1;
  MiReleasePageListLock(v8, a4, v11);
  *(_BYTE *)a4 = 0;
  if ( a3 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v8 + 32));
    return 1LL;
  }
  return 0LL;
}
