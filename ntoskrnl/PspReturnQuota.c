/*
 * XREFs of PspReturnQuota @ 0x1403148A0
 * Callers:
 *     PsReturnProcessQuota @ 0x14020D064 (PsReturnProcessQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140295600 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x140696154 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x140696A48 (PsReturnSharedPoolQuota.c)
 *     PsReturnProcessPageFileQuota @ 0x1406EC714 (PsReturnProcessPageFileQuota.c)
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 *     ObpFreeObject @ 0x1407C3980 (ObpFreeObject.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1402953A0 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

signed __int64 __fastcall PspReturnQuota(char *a1, ULONG_PTR a2, signed int a3, ULONG_PTR a4)
{
  void *v5; // r12
  __int64 v6; // r14
  ULONG_PTR v9; // r15
  char v10; // r13
  volatile signed __int64 *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v15; // r8
  signed __int64 v16; // rdx
  bool v17; // zf
  signed __int64 result; // rax
  unsigned __int64 *v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // r8

  v5 = a1;
  v6 = (__int64)a3 << 7;
  v9 = a3;
  v10 = PspResourceFlags[8 * a3];
  v11 = (volatile signed __int64 *)&a1[v6];
  _m_prefetchw(&a1[v6]);
  v12 = *(_QWORD *)&a1[v6];
  v13 = *(_QWORD *)&a1[v6 + 64];
  if ( *(_QWORD *)&a1[v6 + 80] )
  {
    if ( v13 > v12 )
    {
      v19 = (unsigned __int64 *)&qword_140C37E48[7 * a3];
      v20 = *v19;
      if ( v13 - v12 > *v19 )
      {
        if ( v20 > a4 )
          v20 = a4;
        if ( v13 == _InterlockedCompareExchange64(v11 + 8, v13 - v20, v13)
          && _InterlockedExchangeAdd64(v11 + 9, v20) + v20 > *v19 )
        {
          v21 = _InterlockedExchange64(v11 + 9, 0LL);
          if ( v21 )
            PspReturnResourceQuota(a3, (__int64)&a1[v6], v21, 0);
        }
      }
    }
  }
  BugCheckParameter4 = a4;
  while ( 1 )
  {
    do
    {
      if ( BugCheckParameter4 >= v12 )
      {
        v15 = v12;
        v16 = 0LL;
      }
      else
      {
        v15 = BugCheckParameter4;
        v16 = v12 - BugCheckParameter4;
      }
      result = _InterlockedCompareExchange64(v11, v16, v12);
      v17 = v12 == result;
      v12 = result;
    }
    while ( !v17 );
    BugCheckParameter4 -= v15;
    if ( !BugCheckParameter4 )
      break;
    if ( v5 == &PspSystemQuotaBlock )
      KeBugCheckEx(0x21u, a2, v9, a4, BugCheckParameter4);
    v5 = &PspSystemQuotaBlock;
    v11 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v6);
    _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
    v12 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v6);
  }
  if ( a2 )
  {
    if ( (v10 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8 * v9 + 1136), -(__int64)a4);
  }
  return result;
}
