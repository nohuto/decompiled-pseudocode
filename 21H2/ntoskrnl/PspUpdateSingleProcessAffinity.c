/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x140908930
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x14077D040 (PspSetProcessAffinityUpdateMode.c)
 *     PsUpdateActiveProcessAffinity @ 0x140907C44 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PspWritePebAffinityInfo @ 0x1406A2104 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x140908724 (PspSetProcessAffinitySafe.c)
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
