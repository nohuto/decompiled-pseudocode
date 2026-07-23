/*
 * XREFs of SmcGetCacheStats @ 0x14092DB40
 * Callers:
 *     SmcProcessStatsRequest @ 0x14092ACD8 (SmcProcessStatsRequest.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140414300 (memset.c)
 *     SmKmFileInfoGetPath @ 0x14092B604 (SmKmFileInfoGetPath.c)
 *     SmcCacheReference @ 0x14092D864 (SmcCacheReference.c)
 */

__int64 __fastcall SmcGetCacheStats(__int64 a1, _DWORD *a2)
{
  struct _EX_RUNDOWN_REF v4; // rax
  unsigned __int64 Count; // rsi
  int Path; // edi
  unsigned int v7; // ecx
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbp
  _DWORD *v11; // rsi
  __int64 v12; // rdx

  memset(a2 + 2, 0, 0x460uLL);
  v4.Count = SmcCacheReference(a1, a2[1]).Count;
  Count = v4.Count;
  if ( v4.Count )
  {
    v7 = a2[7] & 0xFFFFFFC0 | 1;
    a2[7] = v7;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v4.Count + 16);
    a2[5] = *(_DWORD *)(v4.Count + 8);
    a2[6] = *(_DWORD *)(v4.Count + 24);
    a2[25] = *(_DWORD *)(v4.Count + 32);
    a2[7] = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v4.Count + 28) << 6)) & 0x40;
    if ( (*a2 & 0x100) != 0 || (Path = SmKmFileInfoGetPath(v4.Count + 40, a2 + 26, 0x400u), Path >= 0) )
    {
      a2[24] = 0;
      v8 = 0;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v10 = (signed __int64 *)(Count + 160);
      ExAcquirePushLockSharedEx(Count + 160, 0LL);
      v11 = (_DWORD *)(Count + 168);
      v12 = 16LL;
      do
      {
        if ( *v11 != -1 )
        {
          a2[v8 + 8] = *v11;
          if ( (v11[1] & 3) == 0 )
            a2[24] |= 1 << v8;
          ++v8;
        }
        v11 += 6;
        --v12;
      }
      while ( v12 );
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegion();
      a2[4] = v8;
      Path = 0;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (a2[1] & 0xF) + a1 + 8));
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return (unsigned int)Path;
}
