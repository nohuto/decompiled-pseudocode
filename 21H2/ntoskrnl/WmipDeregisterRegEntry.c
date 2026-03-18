/*
 * XREFs of WmipDeregisterRegEntry @ 0x1403A5AF0
 * Callers:
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140810420 (WmipDeregisterDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     WmipUnreferenceRegEntry @ 0x1402E0164 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     WmipEnterSMCritSection @ 0x14045F87C (WmipEnterSMCritSection.c)
 *     WmipRemoveDS @ 0x1408104C0 (WmipRemoveDS.c)
 */

void __fastcall WmipDeregisterRegEntry(char *Entry)
{
  KIRQL v2; // dl
  signed __int32 v3; // edi
  KIRQL v4; // al
  char **v5; // r8
  PVOID *v6; // rdx
  void *v7; // rcx
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393217;
  v9[1] = v9;
  v9[0] = v9;
  WmipEnterSMCritSection();
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  *((_QWORD *)Entry + 5) = Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceRegEntry((__int64)Entry);
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  WmipEnterSMCritSection();
  v4 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v5 = *(char ***)Entry;
  --WmipInUseRegEntryCount;
  if ( v5[1] != Entry || (v6 = (PVOID *)*((_QWORD *)Entry + 1), *v6 != Entry) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (char *)v6;
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v4);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObject(*((PVOID *)Entry + 2));
  v7 = (void *)*((_QWORD *)Entry + 3);
  if ( v7 )
    ObfDereferenceObject(v7);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList(&WmipRegLookaside, Entry);
}
