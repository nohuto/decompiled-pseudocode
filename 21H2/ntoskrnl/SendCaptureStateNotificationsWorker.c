/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x14093FB10
 * Callers:
 *     <none>
 * Callees:
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140638DDC (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpBuildNotificationPacket @ 0x1406B89BC (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406BBC64 (EtwpUnreferenceDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(__int64 a1)
{
  __int64 v2; // rsi
  volatile signed __int64 *v3; // rdi
  unsigned int v4; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rdi
  _QWORD *GuidEntryByGuid; // rax
  __int64 v8; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // r15
  int v11; // esi
  unsigned __int16 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  char v17; // [rsp+28h] [rbp-89h]
  volatile signed __int32 *v18; // [rsp+30h] [rbp-81h] BYREF
  __int64 v19; // [rsp+38h] [rbp-79h]
  _DWORD *v20; // [rsp+40h] [rbp-71h]
  __int64 v21; // [rsp+48h] [rbp-69h]
  _DWORD v22[30]; // [rsp+50h] [rbp-61h] BYREF
  __int128 v23; // [rsp+C8h] [rbp+17h] BYREF

  v18 = 0LL;
  v23 = 0LL;
  memset(&v22[2], 0, 0x70uLL);
  v3 = (volatile signed __int64 *)(a1 + 704);
  v21 = *(_QWORD *)(a1 + 1064);
  v2 = v21;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  *(_DWORD *)(v21 + 64) = 0;
  if ( !*(_DWORD *)(a1 + 336)
    || (v4 = *(unsigned __int16 *)(v2 + 16), !(_WORD)v4)
    || (v19 = *(unsigned __int16 *)(v2 + 16),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v4, 0x74777445u),
        (v20 = PoolWithTag) == 0LL) )
  {
LABEL_24:
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_27;
  }
  memmove(PoolWithTag, *(const void **)(v2 + 24), 16LL * v4);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 704);
  KeAbPostRelease(a1 + 704);
  v22[0] = 3;
  v22[1] = 120;
  v6 = v20;
  do
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(a1 + 1080), v6, 0);
    v8 = (__int64)GuidEntryByGuid;
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v10 = *(_QWORD *)(v8 + 56);
      *(_QWORD *)(v8 + 416) = KeGetCurrentThread();
      for ( *(_OWORD *)&v22[10] = *(_OWORD *)v6; v10 != v8 + 56; v10 = *(_QWORD *)v10 )
      {
        if ( (*(_BYTE *)(v10 + 98) & 1) == 0 )
        {
          v11 = 0;
          v12 = (unsigned __int16 *)(v8 + 134);
          do
          {
            v17 = *(_BYTE *)(v10 + 100);
            if ( ((unsigned __int8)(1 << v11) & (unsigned __int8)v17) != 0 )
            {
              if ( *(_DWORD *)(v12 - 3) )
              {
                if ( *v12 == *(_DWORD *)a1 )
                {
                  EtwpComputeRegEntryEnableInfo(v10, (__int64)&v22[18]);
                  HIWORD(v22[19]) = *(_WORD *)a1;
                  v22[18] = 2;
                  if ( (int)EtwpBuildNotificationPacket(v8, v22, v17, &v18) >= 0 )
                  {
                    EtwpSendDataBlock(v10, (__int64)v18);
                    EtwpUnreferenceDataBlock(v18);
                  }
                }
              }
            }
            ++v11;
            v12 += 16;
          }
          while ( v11 < 8 );
        }
      }
      *(_QWORD *)(v8 + 416) = 0LL;
      ExReleasePushLockEx(v8 + 408, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
      EtwpUnreferenceGuidEntry((volatile signed __int64 *)v8);
    }
    v6 += 4;
    --v19;
  }
  while ( v19 );
  v16 = v21;
  v3 = (volatile signed __int64 *)(a1 + 704);
  if ( *(_DWORD *)(a1 + 336) )
  {
    *((_QWORD *)&v23 + 1) = -1LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    if ( *(_WORD *)(v16 + 16) && !*(_DWORD *)(v16 + 64) )
    {
      ExSetTimer(*(_QWORD *)(v16 + 8), *(_QWORD *)v16, 0LL, (__int64)&v23);
      *(_DWORD *)(v16 + 64) = 1;
    }
    goto LABEL_24;
  }
LABEL_27:
  EtwpReleaseLoggerContext((unsigned int *)a1, 0);
}
