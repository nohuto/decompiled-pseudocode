/*
 * XREFs of MiObtainMdlCharges @ 0x140355770
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140354954 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainMdlCharges(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // eax
  unsigned __int64 v3; // rdi
  int v5; // r14d
  _WORD *Pool; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax

  v1 = a1[5];
  v2 = *((_DWORD *)a1 + 2);
  v3 = v1 >> 4;
  v5 = 0;
  if ( !(v1 >> 4) )
    v3 = 1LL;
  if ( (v2 & 0x40) != 0 )
  {
    v3 = a1[4];
LABEL_13:
    v5 = 1;
    goto LABEL_5;
  }
  if ( (v2 & 0x20) != 0 && a1[4] )
  {
    v3 = a1[4];
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_5:
    if ( (int)MiAcquireNonPagedResources(*a1, v1, a1[6], 2LL) < 0 )
      goto LABEL_26;
    Pool = MiAllocatePool(64, 8 * v1 + 48, 0x69646D4Du);
    if ( Pool )
      break;
    v8 = *a1;
    MiReturnCommit(*a1, v1);
    v9 = v1;
    if ( (ULONG_PTR *)v8 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v1 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v1 >= 0x80000 )
              break;
            v13 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v1 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v12 = (_DWORD)CachedResidentAvailable == v13;
            LODWORD(CachedResidentAvailable) = v13;
            if ( v12 )
              goto LABEL_26;
          }
          while ( v13 != -1 && v1 + v13 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v9 = v1 + (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v9 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7168), v9);
LABEL_26:
    if ( (a1[1] & 4) != 0 )
      return 3221225626LL;
    v14 = *(_QWORD *)(*a1 + 7168);
    if ( v14 <= 0 )
      return 3221225626LL;
    v15 = a1[6];
    if ( v14 <= v15 )
      return 3221225626LL;
    v16 = *(_QWORD *)(*a1 + 7464);
    v17 = v14 - v15;
    v18 = *(_QWORD *)(*a1 + 7592);
    if ( v16 < v18 )
    {
      v19 = v18 - v16;
      if ( v19 < v17 )
        v17 = v19;
    }
    if ( v1 <= v17 )
    {
      if ( v1 <= v3 )
      {
        if ( v5 == 1 || v3 == 1 )
          return 3221225626LL;
        while ( v1 < v3 )
          v3 >>= 1;
        if ( !v3 )
          v3 = 1LL;
      }
      v1 -= v3;
    }
    else
    {
      v1 = v17;
    }
    v20 = *((_DWORD *)a1 + 2);
    if ( (v20 & 0x40) != 0 )
    {
      v21 = a1[4] - 1;
    }
    else
    {
      if ( (v20 & 0x20) == 0 )
        goto LABEL_49;
      v22 = a1[4];
      if ( !v22 )
        goto LABEL_49;
      v21 = v22 - 1;
    }
    v1 &= ~v21;
LABEL_49:
    if ( !v1 )
      return 3221225626LL;
  }
  *(_QWORD *)Pool = 0LL;
  Pool[5] = 0;
  Pool[4] = 8 * (v1 + 6);
  *((_DWORD *)Pool + 10) = (_DWORD)v1 << 12;
  *((_QWORD *)Pool + 4) = 0LL;
  *((_DWORD *)Pool + 11) = 0;
  *((_QWORD *)Pool + 3) = 0LL;
  a1[5] = v1;
  a1[8] = (__int64)Pool;
  if ( (ULONG_PTR *)*a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFB8, v1);
  return 0LL;
}
