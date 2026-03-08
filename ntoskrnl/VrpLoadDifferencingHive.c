/*
 * XREFs of VrpLoadDifferencingHive @ 0x1407375CC
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140736830 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140A6F964 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140737CA8 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x140738090 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1407380D0 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140738110 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140738160 (VrpDereferenceDiffHiveEntry.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x140738468 (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A70420 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        const UNICODE_STRING *a1,
        __int64 a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        void *a8)
{
  HANDLE v8; // r12
  int DiffHiveEntryForMountPoint; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // r14
  unsigned int i; // ebx
  char v15; // al
  HANDLE v16; // rdx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r13
  char v20; // r15
  char v22; // [rsp+60h] [rbp-A0h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES v25; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  int v27[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v28; // [rsp+F0h] [rbp-10h]
  __int128 v29; // [rsp+100h] [rbp+0h]
  int v30[4]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v31; // [rsp+120h] [rbp+20h]
  __int128 v32; // [rsp+130h] [rbp+30h]

  *(_QWORD *)&v29 = 0LL;
  DWORD2(v29) = 0;
  v8 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  *(_QWORD *)&v32 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DWORD2(v32) = 0;
  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  memset(&v25, 0, 44);
  v22 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( a7 && a5 )
    return (unsigned int)-1073741811;
  DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(a1);
  if ( DiffHiveEntryForMountPoint >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire(24LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)0x18, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)0x18, v11, 24LL);
    v13 = 1;
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
    VrpIncrementDiffHiveEntryHardRefCount(0LL);
    if ( (MEMORY[0x38] & 1) != 0 )
    {
      DiffHiveEntryForMountPoint = 0;
LABEL_29:
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)0x18, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)0x18);
      KeAbPostRelease(0x18uLL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_31;
    }
    for ( i = 0; i < 2; ++i )
    {
      if ( (MEMORY[0x38] & 1) != 0 )
        break;
      v22 = VrpBecomeDiffHiveEntryTransitionOwner(0LL);
      if ( v22 )
        goto LABEL_11;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(0LL);
    }
    if ( (MEMORY[0x38] & 1) == 0 )
    {
      DiffHiveEntryForMountPoint = MEMORY[0x3C];
LABEL_43:
      VrpDecrementDiffHiveEntryHardRefCount(0LL);
      goto LABEL_29;
    }
LABEL_11:
    if ( (MEMORY[0x38] & 1) != 0 )
      goto LABEL_25;
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)0x18, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)0x18);
    KeAbPostRelease(0x18uLL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( a7 )
    {
      v25.RootDirectory = 0LL;
      v25.ObjectName = (PUNICODE_STRING)L"\"$";
      v25.Length = 48;
      v25.Attributes = 576;
      *(_OWORD *)&v25.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&Handle, 0x20019u, &v25);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_20;
      v8 = Handle;
    }
    if ( a3->Length )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a3;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_20;
      v16 = KeyHandle;
      if ( a5 )
        v8 = KeyHandle;
    }
    else
    {
      v16 = KeyHandle;
    }
    *(_QWORD *)&v31 = a1;
    v30[0] = 48;
    v27[0] = 48;
    *(_QWORD *)&v28 = a2;
    *(_QWORD *)&v30[2] = 0LL;
    DWORD2(v31) = 576;
    *(_QWORD *)&v27[2] = 0LL;
    DWORD2(v28) = 576;
    v32 = 0LL;
    v29 = 0LL;
    DiffHiveEntryForMountPoint = CmLoadDifferencingKey(
                                   (__int64)v30,
                                   (__int64)v27,
                                   a4,
                                   (__int64)v8,
                                   0LL,
                                   0,
                                   0LL,
                                   0,
                                   (__int64)v16,
                                   a6 != 0,
                                   a8,
                                   0);
    if ( DiffHiveEntryForMountPoint >= 0 )
      DiffHiveEntryForMountPoint = 0;
LABEL_20:
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = KeAbPreAcquire(24LL, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)0x18, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)0x18, v18, 24LL);
    if ( v19 )
      *(_BYTE *)(v19 + 18) = 1;
    MEMORY[0x38] = MEMORY[0x38] & 0xFFFFFFFE | (DiffHiveEntryForMountPoint >= 0);
    MEMORY[0x3C] = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
    {
LABEL_26:
      if ( v22 )
        VrpRelinquishDiffHiveEntryTransitionOwner(0LL);
      if ( v13 )
        goto LABEL_43;
      goto LABEL_29;
    }
LABEL_25:
    DiffHiveEntryForMountPoint = 0;
    v13 = 0;
    goto LABEL_26;
  }
LABEL_31:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DiffHiveEntryForMountPoint;
}
