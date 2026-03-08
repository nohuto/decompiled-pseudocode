/*
 * XREFs of MiObtainMdlCharges @ 0x1402B3CA8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiObtainMdlCharges(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v5; // r15d
  unsigned __int64 v6; // rbp
  _WORD *Pool; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int64 v13; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v16; // zf
  signed __int32 v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx

  v1 = a1[4];
  LODWORD(v2) = *((_DWORD *)a1 + 14);
  v3 = v1 >> 4;
  v5 = 0;
  if ( !(v1 >> 4) )
    v3 = 1LL;
  if ( (v2 & 0x40) != 0 )
  {
    v3 = a1[3];
LABEL_5:
    v5 = 1;
    goto LABEL_6;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v11 = a1[3];
    if ( v11 )
    {
      v3 = v11;
      goto LABEL_5;
    }
  }
  while ( 1 )
  {
LABEL_6:
    if ( (v2 & 0x400) == 0 && (int)MiAcquireNonPagedResources(*a1, v1, a1[5], 2LL) < 0 )
      goto LABEL_30;
    v6 = v1 / a1[6];
    if ( (*((_DWORD *)a1 + 21) & 1) != 0 )
      break;
    Pool = MiAllocatePool(64, 8 * v6 + 48, 0x69646D4Du);
    if ( Pool )
      goto LABEL_10;
    if ( (a1[7] & 0x400) == 0 )
    {
      v12 = *a1;
      MiReturnCommit(*a1, v1, v8);
      v13 = v1;
      if ( (_UNKNOWN *)v12 != &MiSystemPartition )
        goto LABEL_28;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_28;
      if ( v1 + CachedResidentAvailable > 0x100 || v1 >= 0x80000 )
      {
LABEL_25:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v13 = v1 + (int)CachedResidentAvailable - 192;
        }
LABEL_28:
        if ( v13 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 17280), v13);
        goto LABEL_30;
      }
      while ( 1 )
      {
        v17 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                v1 + CachedResidentAvailable,
                CachedResidentAvailable);
        v16 = (_DWORD)CachedResidentAvailable == v17;
        LODWORD(CachedResidentAvailable) = v17;
        if ( v16 )
          break;
        if ( v17 == -1 || v1 + v17 > 0x100 )
          goto LABEL_25;
      }
    }
LABEL_30:
    if ( (a1[7] & 4) != 0 )
      return 3221225626LL;
    v18 = *(_QWORD *)(*a1 + 17280);
    if ( v18 <= 0 )
      return 3221225626LL;
    v19 = a1[5];
    if ( v18 <= v19 )
      return 3221225626LL;
    v20 = *(_QWORD *)(*a1 + 17576);
    v21 = v18 - v19;
    v22 = *(_QWORD *)(*a1 + 17816);
    if ( v20 < v22 )
    {
      v23 = v22 - v20;
      if ( v23 < v21 )
        v21 = v23;
    }
    if ( v1 <= v21 )
    {
      if ( v1 <= v3 )
      {
        if ( v5 || v3 == 1 )
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
      v1 = v21;
    }
    v24 = *((_DWORD *)a1 + 14);
    if ( (v24 & 0x40) != 0 )
    {
      v2 = a1[3] - 1;
    }
    else
    {
      LOWORD(v2) = *((_DWORD *)a1 + 14);
      if ( (v24 & 0x20) == 0 )
        goto LABEL_53;
      v25 = a1[3];
      if ( !v25 )
        goto LABEL_53;
      v2 = v25 - 1;
    }
    v1 &= ~v2;
    LOWORD(v2) = *((_DWORD *)a1 + 14);
LABEL_53:
    if ( !v1 )
      return 3221225626LL;
  }
  Pool = (_WORD *)a1[8];
LABEL_10:
  v9 = v6 << 12;
  *(_QWORD *)Pool = 0LL;
  Pool[5] = 0;
  Pool[4] = 8 * ((v9 >> 12) + 6);
  *((_QWORD *)Pool + 4) = 0LL;
  *((_QWORD *)Pool + 5) = (unsigned int)v9;
  a1[4] = v1;
  a1[8] = (__int64)Pool;
  if ( (_UNKNOWN *)*a1 == &MiSystemPartition && (a1[7] & 0x400) == 0 )
    _InterlockedExchangeAdd64(&qword_140C69630, v1);
  return 0LL;
}
