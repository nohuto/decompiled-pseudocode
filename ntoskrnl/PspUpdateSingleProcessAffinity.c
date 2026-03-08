/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x1409ACC60
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x1409AB80C (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1409ACA80 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PspWritePebAffinityInfo @ 0x14070687C (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x1409AC928 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  signed __int64 *v6; // rbx
  int v7; // esi
  int v8; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
  {
    v6 = (signed __int64 *)(a2 + 1080);
    v8 = 0;
    v7 = 0;
    ExAcquirePushLockSharedEx(a2 + 1080, 0LL);
    if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
      v7 = PspSetProcessAffinitySafe(a2, 2, a3, 0LL, &v8);
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v7 >= 0 )
    {
      if ( v8 )
        PspWritePebAffinityInfo(a1, a2);
    }
  }
}
