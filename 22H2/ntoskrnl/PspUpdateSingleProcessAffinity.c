/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x140908820
 * Callers:
 *     PspSetProcessAffinityUpdateMode @ 0x14077CD80 (PspSetProcessAffinityUpdateMode.c)
 *     PsUpdateActiveProcessAffinity @ 0x140907B34 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     PspWritePebAffinityInfo @ 0x140612AB4 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x140908614 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  signed __int64 *v6; // rbx
  int v7; // esi
  __int64 v8; // r8
  _DWORD *v9; // r9
  int v10; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
  {
    v6 = (signed __int64 *)(a2 + 1080);
    v10 = 0;
    v7 = 0;
    ExAcquirePushLockSharedEx(a2 + 1080, 0LL);
    if ( (*(_DWORD *)(a2 + 1120) & 0x80000) != 0 )
      v7 = PspSetProcessAffinitySafe(a2, 2, a3, 0LL, &v10);
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v7 >= 0 )
    {
      if ( v10 )
        PspWritePebAffinityInfo(a1, a2, v8, v9);
    }
  }
}
