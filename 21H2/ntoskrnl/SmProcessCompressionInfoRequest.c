/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x1406A5C80
 * Callers:
 *     SmQueryStoreInformation @ 0x140621A68 (SmQueryStoreInformation.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14024A6DC (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     SmKmStoreReferenceEx @ 0x14028A8EC (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  int StoreStats; // ebx
  struct _EX_RUNDOWN_REF *v18; // rax
  unsigned int *v19; // rcx
  __int64 v20; // rdx
  __int128 v21; // [rsp+28h] [rbp-670h]
  __int128 v22; // [rsp+38h] [rbp-660h]
  __int64 v23; // [rsp+48h] [rbp-650h]
  unsigned __int64 v24; // [rsp+50h] [rbp-648h]
  _DWORD v26[384]; // [rsp+60h] [rbp-638h] BYREF

  memset(v26, 0, sizeof(v26));
  v7 = 0;
  if ( a2 == 40 )
  {
    if ( a4 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = a1;
      if ( a1 >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 39) = *(_BYTE *)(v8 + 39);
    }
    v21 = *(_OWORD *)a1;
    v23 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int8)*(_OWORD *)a1 != 3 || (v21 & 0xFFFFFF00) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
      if ( qword_140D24158 )
      {
        DWORD1(v21) = *((_DWORD *)qword_140D24158 + 272);
        *((_QWORD *)&v21 + 1) = *((_QWORD *)qword_140D24158 + 226) << 12;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
        KeLeaveCriticalRegion();
        v11 = 0LL;
        v12 = 0LL;
        v22 = 0uLL;
        v13 = 0;
        v14 = v23;
        do
        {
          v15 = SmKmStoreReferenceEx((__int64)&SmGlobals, v13, v10);
          v24 = v15;
          if ( v15 )
          {
            StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v15);
            v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(
                                              (__int64)&SmGlobals,
                                              *(_DWORD *)(v24 + 6016) & 0x3FF);
            ExReleaseRundownProtection(v18 + 1);
            if ( StoreStats >= 0 )
            {
              v10 = v26[3];
              v19 = &v26[11];
              v20 = 8LL;
              do
              {
                v11 += v26[3] * (unsigned __int64)*v19;
                *((_QWORD *)&v22 + 1) = v11;
                v19 += 2;
                --v20;
              }
              while ( v20 );
              v12 += (unsigned __int64)v26[8] << 12;
              *(_QWORD *)&v22 = v12;
              v14 += (unsigned __int64)v26[9] << 12;
              v23 = v14;
            }
          }
          ++v13;
        }
        while ( v13 < 0x400 );
        *(_OWORD *)a1 = v21;
        *(_OWORD *)(a1 + 16) = v22;
        *(_QWORD *)(a1 + 32) = v23;
        *a3 = 40;
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
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
