/*
 * XREFs of VrpLoadDifferencingHive @ 0x140690FEC
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140690CFC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14092665C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140691330 (VrpDereferenceDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406913B4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1406913F4 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140691444 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1407F63D0 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140927128 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        PCUNICODE_STRING String1,
        __int64 a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        void *a8)
{
  HANDLE v9; // r12
  int DiffHiveEntryForMountPoint; // edi
  struct _KTHREAD *CurrentThread; // rax
  char v12; // si
  signed __int64 v13; // rax
  unsigned __int64 i; // rcx
  signed __int64 v15; // rtt
  char v16; // al
  HANDLE v17; // rdx
  struct _KTHREAD *v18; // rax
  char v19; // r15
  char v21; // [rsp+60h] [rbp-A0h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES v24; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  int v26[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-10h]
  __int128 v28; // [rsp+100h] [rbp+0h]
  int v29[4]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v30; // [rsp+120h] [rbp+20h]
  __int128 v31; // [rsp+130h] [rbp+30h]

  *(_QWORD *)&v28 = 0LL;
  DWORD2(v28) = 0;
  v9 = 0LL;
  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v31 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DWORD2(v31) = 0;
  *(_OWORD *)v29 = 0LL;
  v30 = 0LL;
  memset(&v24, 0, 44);
  v21 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( a7 )
  {
    if ( a5 )
      return (unsigned int)-1073741811;
    v24.Length = 48;
    v24.ObjectName = (PUNICODE_STRING)L"\"$";
    v24.RootDirectory = 0LL;
    v24.Attributes = 576;
    *(_OWORD *)&v24.SecurityDescriptor = 0LL;
    DiffHiveEntryForMountPoint = ZwOpenKey(&Handle, 0x20019u, &v24);
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_25;
    v9 = Handle;
  }
  DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(String1);
  if ( DiffHiveEntryForMountPoint >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(0x18uLL, 0LL);
    v12 = 1;
    if ( ++MEMORY[0x20] <= 1uLL )
    {
      _m_prefetchw((const void *)0x10);
      v13 = MEMORY[0x10];
      for ( i = MEMORY[0x10] + 1LL; ; i = v13 + 1 )
      {
        if ( i <= 1 )
        {
          if ( i != 1 )
            __fastfail(0xEu);
          __fastfail(0xEu);
        }
        v15 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)0x10, i, v13);
        if ( v15 == v13 )
          break;
      }
    }
    DiffHiveEntryForMountPoint = 0;
    if ( (MEMORY[0x38] & 1) != 0 )
    {
LABEL_23:
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)0x18, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
        ExfTryToWakePushLock(24LL);
      KeAbPostRelease(0x18uLL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_25;
    }
    do
    {
      if ( (MEMORY[0x38] & 1) != 0 )
        break;
      v21 = VrpBecomeDiffHiveEntryTransitionOwner(0LL);
      if ( v21 )
        goto LABEL_10;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(0LL);
      ++DiffHiveEntryForMountPoint;
    }
    while ( (unsigned int)DiffHiveEntryForMountPoint < 2 );
    if ( (MEMORY[0x38] & 1) == 0 )
    {
      DiffHiveEntryForMountPoint = MEMORY[0x3C];
LABEL_42:
      VrpDecrementDiffHiveEntryHardRefCount(0LL);
      goto LABEL_23;
    }
LABEL_10:
    if ( (MEMORY[0x38] & 1) != 0 )
    {
LABEL_19:
      DiffHiveEntryForMountPoint = 0;
      v12 = 0;
LABEL_20:
      if ( v21 )
        VrpRelinquishDiffHiveEntryTransitionOwner(0LL);
      if ( v12 )
        goto LABEL_42;
      goto LABEL_23;
    }
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)0x18, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
      ExfTryToWakePushLock(24LL);
    KeAbPostRelease(0x18uLL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( a3->Length )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a3;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_18;
      v17 = KeyHandle;
      if ( a5 )
        v9 = KeyHandle;
    }
    else
    {
      v17 = KeyHandle;
    }
    *(_QWORD *)&v30 = String1;
    v29[0] = 48;
    v26[0] = 48;
    *(_QWORD *)&v27 = a2;
    DWORD2(v30) = 576;
    DWORD2(v27) = 576;
    *(_QWORD *)&v29[2] = 0LL;
    v31 = 0LL;
    *(_QWORD *)&v26[2] = 0LL;
    v28 = 0LL;
    DiffHiveEntryForMountPoint = CmLoadDifferencingKey(
                                   (__int64)v29,
                                   (__int64)v26,
                                   a4,
                                   (__int64)v9,
                                   0LL,
                                   0,
                                   0LL,
                                   0,
                                   (__int64)v17,
                                   a6 != 0,
                                   a8,
                                   0);
    if ( DiffHiveEntryForMountPoint >= 0 )
      DiffHiveEntryForMountPoint = 0;
LABEL_18:
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(0x18uLL, 0LL);
    MEMORY[0x38] = MEMORY[0x38] & 0xFFFFFFFE | (DiffHiveEntryForMountPoint >= 0);
    MEMORY[0x3C] = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_25:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DiffHiveEntryForMountPoint;
}
