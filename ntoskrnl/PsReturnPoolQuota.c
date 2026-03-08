/*
 * XREFs of PsReturnPoolQuota @ 0x140294F80
 * Callers:
 *     ExpReturnPoolQuota @ 0x140294F44 (ExpReturnPoolQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1402953A0 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall PsReturnPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  char *v5; // r13
  unsigned __int64 v6; // r15
  ULONG_PTR v7; // rbp
  volatile signed __int64 *v8; // r14
  char v9; // r12
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  ULONG_PTR *v12; // r9
  ULONG_PTR v13; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v15; // r8
  signed __int64 v16; // rdx
  bool v17; // zf
  signed __int64 v18; // rax
  __int64 v19; // r8

  if ( Process != PsInitialSystemProcess )
  {
    v5 = (char *)Process[1].Affinity.StaticBitmap[27];
    v6 = (unsigned __int64)(PoolType == PagedPool) << 7;
    v7 = PoolType == PagedPool;
    v8 = (volatile signed __int64 *)&v5[v6];
    v9 = PspResourceFlags[8 * v7];
    _m_prefetchw(&v5[v6]);
    v10 = *(_QWORD *)&v5[v6];
    v11 = *(_QWORD *)&v5[v6 + 64];
    if ( *(_QWORD *)&v5[v6 + 80] )
    {
      if ( v11 > v10 )
      {
        v12 = (ULONG_PTR *)&qword_140C37E48[7 * v7];
        v13 = *v12;
        if ( v11 - v10 > *v12 )
        {
          if ( v13 > Amount )
            v13 = Amount;
          if ( v11 == _InterlockedCompareExchange64(v8 + 8, v11 - v13, v11)
            && _InterlockedExchangeAdd64(v8 + 9, v13) + v13 > *v12 )
          {
            v19 = _InterlockedExchange64(v8 + 9, 0LL);
            if ( v19 )
              PspReturnResourceQuota((unsigned int)v7, &v5[v6], v19, 0LL);
          }
        }
      }
    }
    BugCheckParameter4 = Amount;
    while ( 1 )
    {
      do
      {
        if ( BugCheckParameter4 >= v10 )
        {
          v15 = v10;
          v16 = 0LL;
        }
        else
        {
          v15 = BugCheckParameter4;
          v16 = v10 - BugCheckParameter4;
        }
        v18 = _InterlockedCompareExchange64(v8, v16, v10);
        v17 = v10 == v18;
        v10 = v18;
      }
      while ( !v17 );
      BugCheckParameter4 -= v15;
      if ( !BugCheckParameter4 )
        break;
      if ( v5 == (char *)&PspSystemQuotaBlock )
        KeBugCheckEx(0x21u, (ULONG_PTR)Process, v7, Amount, BugCheckParameter4);
      v5 = (char *)&PspSystemQuotaBlock;
      v8 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v6);
      _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
      v10 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v6);
    }
    if ( (v9 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v7, -(__int64)Amount);
  }
}
