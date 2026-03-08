/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x140241CF0
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x140241910 (FsRtlLookupPerStreamContextInternal.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1402623C0 (ExReleaseAutoExpandPushLockShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402C1360 (FsRtlLookupPerFileObjectContext.c)
 * Callees:
 *     ExpWakePushLock @ 0x140238F70 (ExpWakePushLock.c)
 *     ExpAeStopMeasurement @ 0x1402FBDA8 (ExpAeStopMeasurement.c)
 */

int __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, _QWORD *a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // r8
  signed __int64 v5; // rtt
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  unsigned __int64 i; // rcx
  __int64 v12; // rdx
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-18h]

  CurrentThread = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    DWORD2(v14) = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    *(_QWORD *)&v14 = __rdtsc();
  }
  _m_prefetchw(a1);
  v3 = *a1;
  while ( (v3 & 2) == 0 )
  {
    v4 = 0LL;
    if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v4 = v3 - 16;
    v5 = v3;
    v3 = _InterlockedCompareExchange64(a1, v4, v3);
    if ( v5 == v3 )
    {
      if ( a2 )
        LODWORD(v3) = ExpAeStopMeasurement(&v14, a2);
      return v3;
    }
  }
  if ( (v3 & 8) != 0 )
  {
    for ( i = v3 & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v12 = *(_QWORD *)(i + 32);
      if ( v12 )
        break;
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)(v12 + 48)) > 0 )
      return v3;
    v6 = -9LL;
  }
  else
  {
    v6 = -1LL;
  }
  do
  {
    v7 = v6 + 4;
    v8 = v3 & 6;
    if ( v8 != 2 )
      v7 = v6;
    v9 = v3 + v7;
    v10 = v3;
    v3 = _InterlockedCompareExchange64(a1, v9, v3);
  }
  while ( v10 != v3 );
  if ( v8 == 2 )
    LODWORD(v3) = ExpWakePushLock(a1, v9);
  return v3;
}
