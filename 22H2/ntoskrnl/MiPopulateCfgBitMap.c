/*
 * XREFs of MiPopulateCfgBitMap @ 0x1406201D8
 * Callers:
 *     MiMarkPrivateImageCfgBits @ 0x14066A340 (MiMarkPrivateImageCfgBits.c)
 *     MiMarkPrivateOpenCfgBits @ 0x14068C148 (MiMarkPrivateOpenCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1406FAA44 (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiVadDeleted @ 0x14025AB90 (MiVadDeleted.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x140636FA0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int128 *v7; // r14
  volatile signed __int64 *v9; // rbx
  unsigned __int64 v11; // rsi
  __int64 v13; // r8
  unsigned int v14; // edi
  __int128 v16; // [rsp+50h] [rbp-58h] BYREF
  int v17; // [rsp+60h] [rbp-48h]

  v6 = a1[2];
  v7 = &v16;
  v17 = 0;
  v9 = (volatile signed __int64 *)(v6 + 40);
  v11 = *a1 + ((2 * (a5 >> 4)) >> 3);
  v16 = 0LL;
  if ( a2 <= 1 )
    v7 = 0LL;
  ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v6) )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return 3221225738LL;
  }
  else
  {
    v14 = MiCopyToCfgBitMap(a1, a2, v13, a4, v11, v6, 0, v7, (2 * ((a6 - a5) >> 4)) >> 3);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return v14;
  }
}
