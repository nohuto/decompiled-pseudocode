/*
 * XREFs of ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1C00025E4
 * Callers:
 *     NtDCompositionGetTargetStatistics @ 0x1C0002420 (NtDCompositionGetTargetStatistics.c)
 * Callees:
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x1C0002B2C (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0091D74 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

char __fastcall DirectComposition::CConnection::QueryTargetStats(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        const struct tagCOMPOSITION_TARGET_ID *a3,
        struct tagCOMPOSITION_TARGET_STATS *a4)
{
  DirectComposition::CPushLockCriticalSection *v4; // r14
  char v9; // di
  unsigned __int64 v10; // rcx
  unsigned int v11; // r10d
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // r10d
  unsigned int v15; // r11d

  v4 = (DirectComposition::CConnection *)((char *)this + 344);
  v9 = 0;
  ExAcquirePushLockSharedEx((char *)this + 344, 0LL);
  *((_BYTE *)v4 + 8) = 0;
  v10 = 464 * (a2 % 0x12C);
  if ( *(_QWORD *)((char *)this + v10 + 400) == a2 )
  {
    v11 = 0;
    if ( *(_DWORD *)((char *)this + v10 + 396) )
    {
      v12 = *(_QWORD *)((char *)this + v10 + 432);
      while ( !(unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v12 + 104LL * v11, a3) )
      {
        v11 = v14 + 1;
        if ( v11 >= v15 )
          goto LABEL_6;
      }
      v9 = 1;
      *(_OWORD *)a4 = *(_OWORD *)(v13 + 32);
      *((_OWORD *)a4 + 1) = *(_OWORD *)(v13 + 48);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(v13 + 64);
      *((_OWORD *)a4 + 3) = *(_OWORD *)(v13 + 80);
      *((_QWORD *)a4 + 8) = *(_QWORD *)(v13 + 96);
    }
  }
LABEL_6:
  DirectComposition::CPushLockCriticalSection::Release(v4);
  return v9;
}
