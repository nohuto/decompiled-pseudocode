/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x1407FA72C
 * Callers:
 *     SmQueryStoreInformation @ 0x1407FA644 (SmQueryStoreInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SmKmStoreReferenceEx @ 0x14035F5AC (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1403865AC (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // r14d
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  int StoreStats; // ebx
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // [rsp+28h] [rbp-670h]
  __int128 v21; // [rsp+38h] [rbp-660h]
  __int64 v22; // [rsp+48h] [rbp-650h]
  unsigned __int64 v23; // [rsp+50h] [rbp-648h]
  _DWORD v25[384]; // [rsp+60h] [rbp-638h] BYREF

  memset(v25, 0, sizeof(v25));
  v7 = 0;
  if ( a2 == 40 )
  {
    if ( a4 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v8 = a1;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 39) = *(_BYTE *)(v8 + 39);
    }
    v20 = *(_OWORD *)a1;
    v22 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int8)*(_OWORD *)a1 != 3 || (v20 & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321A0, 0LL);
      if ( qword_140D32198 )
      {
        DWORD1(v20) = *((_DWORD *)qword_140D32198 + 272);
        *((_QWORD *)&v20 + 1) = *((_QWORD *)qword_140D32198 + 227) << 12;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140D321A0);
        KeAbPostRelease((ULONG_PTR)&qword_140D321A0);
        KeLeaveCriticalRegion();
        v10 = 0LL;
        v11 = 0LL;
        v21 = 0uLL;
        v12 = 0;
        v13 = v22;
        do
        {
          v14 = SmKmStoreReferenceEx((__int64)&SmGlobals, v12);
          v23 = v14;
          if ( v14 )
          {
            StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v14);
            v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                              (__int64)&SmGlobals,
                                              *(_DWORD *)(v23 + 6016) & 0x3FF);
            ExReleaseRundownProtection(v17 + 1);
            if ( StoreStats >= 0 )
            {
              v18 = &v25[11];
              v19 = 8LL;
              do
              {
                v10 += v25[3] * (unsigned __int64)*v18;
                *((_QWORD *)&v21 + 1) = v10;
                v18 += 2;
                --v19;
              }
              while ( v19 );
              v11 += (unsigned __int64)v25[8] << 12;
              *(_QWORD *)&v21 = v11;
              v13 += (unsigned __int64)v25[9] << 12;
              v22 = v13;
            }
          }
          ++v12;
        }
        while ( v12 < 0x400 );
        *(_OWORD *)a1 = v20;
        *(_OWORD *)(a1 + 16) = v21;
        *(_QWORD *)(a1 + 32) = v22;
        *a3 = 40;
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140D321A0);
        KeAbPostRelease((ULONG_PTR)&qword_140D321A0);
        KeLeaveCriticalRegion();
        return (unsigned int)-1073741399;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v7;
}
