/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1406CF720
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140346CA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     ObpReferenceDeviceMap @ 0x140625B10 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     PsReferenceImpersonationToken @ 0x14067DD20 (PsReferenceImpersonationToken.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurity @ 0x1406D6B30 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1406D6D20 (SeCreateClientSecurityEx.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // r13
  void *v13; // rsi
  char v14; // al

  if ( (*(_DWORD *)(a1 + 1296) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v13 = *(void **)(a1 + 1464)) != 0LL )
    {
      v14 = 0;
    }
    else
    {
      v13 = (void *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF8uLL);
      v14 = BYTE1(*(_DWORD *)(a1 + 1296)) & 1;
    }
    *a3 = v14;
    ObfReferenceObject(v13);
    *a5 = *(_DWORD *)(a1 + 1192) & 3;
    *a4 = (*(_BYTE *)(a1 + 1192) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v12 + 2170);
  }
  else
  {
    v13 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1280), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1280));
  KeAbPostRelease(a1 + 1280);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v13;
}
