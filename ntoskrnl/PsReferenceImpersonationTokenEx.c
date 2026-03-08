/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1406D6630
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140247AA0 (SepReferenceTokenUsingPseudoHandle.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x1406C0FC8 (CmpCmdHiveOpen.c)
 *     SeCreateClientSecurityEx @ 0x1406D5D70 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x1406D61E0 (SeCreateClientSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406D6370 (EtwpGetSidExtendedHeaderItem.c)
 *     PsReferenceEffectiveToken @ 0x1406D657C (PsReferenceEffectiveToken.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140721450 (ObpReferenceCurrentDeviceMap.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(
        __int64 a1,
        char a2,
        ULONG a3,
        _BYTE *a4,
        bool *a5,
        int *a6,
        _BYTE *a7)
{
  __int64 v12; // r13
  struct _KTHREAD *CurrentThread; // r15
  void *v14; // rsi
  char v15; // al

  if ( (*(_DWORD *)(a1 + 1376) & 8) == 0 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1360, 0LL);
  if ( (*(_DWORD *)(a1 + 1376) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v14 = *(void **)(a1 + 1544)) != 0LL )
    {
      v15 = 0;
    }
    else
    {
      v14 = (void *)(*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFF8uLL);
      v15 = BYTE1(*(_DWORD *)(a1 + 1376)) & 1;
    }
    *a4 = v15;
    ObfReferenceObjectWithTag(v14, a3);
    *a6 = *(_DWORD *)(a1 + 1272) & 3;
    *a5 = (*(_BYTE *)(a1 + 1272) & 4) != 0;
    if ( a7 )
      *a7 = *(_BYTE *)(v12 + 2170);
  }
  else
  {
    v14 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1360), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1360));
  KeAbPostRelease(a1 + 1360);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v14;
}
