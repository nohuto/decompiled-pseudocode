/*
 * XREFs of VrpLoadDifferencingHive @ 0x1405D5E44
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405D29EC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140882EA0 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     VrpUnlockDiffHiveEntry @ 0x1405D6144 (VrpUnlockDiffHiveEntry.c)
 *     VrpLockDiffHiveEntry @ 0x1405D6184 (VrpLockDiffHiveEntry.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405D642C (VrpDereferenceDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405D65C0 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405D6600 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1405D6650 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405D6690 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpIncrementDiffHiveEntryHardRefCount @ 0x1405D6ABC (VrpIncrementDiffHiveEntryHardRefCount.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x1408843A0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        PCUNICODE_STRING String1,
        __int64 a2,
        UNICODE_STRING *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v10; // r15
  int v11; // r14d
  NTSTATUS DifferencingKey; // edi
  int DiffHiveEntryForMountPoint; // eax
  _DWORD *v14; // rbx
  char v15; // si
  unsigned int i; // edi
  HANDLE v17; // rdx
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD KeyHandle[4]; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES v21; // [rsp+B0h] [rbp-58h] BYREF
  int v22[4]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-18h]
  __int128 v24; // [rsp+100h] [rbp-8h]
  int v25[4]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v26; // [rsp+120h] [rbp+18h]
  __int128 v27; // [rsp+130h] [rbp+28h]

  v10 = 0;
  v11 = 0;
  Handle = 0LL;
  *(_OWORD *)v22 = 0LL;
  memset(KeyHandle, 0, sizeof(KeyHandle));
  v23 = 0LL;
  v24 = 0LL;
  memset(&v21, 0, sizeof(v21));
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( !a7 )
  {
LABEL_6:
    DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(String1);
    v14 = (_DWORD *)*((_QWORD *)&KeyHandle[0] + 1);
    DifferencingKey = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_31;
    VrpLockDiffHiveEntry(*((_QWORD *)&KeyHandle[0] + 1));
    VrpIncrementDiffHiveEntryHardRefCount(v14);
    v15 = 1;
    if ( (v14[14] & 1) != 0 )
    {
      DifferencingKey = 0;
LABEL_30:
      VrpUnlockDiffHiveEntry(v14);
LABEL_31:
      if ( v14 )
        VrpDereferenceDiffHiveEntry(v14);
      goto LABEL_33;
    }
    for ( i = 0; i < 2; ++i )
    {
      if ( (v14[14] & 1) != 0 )
        break;
      v10 = VrpBecomeDiffHiveEntryTransitionOwner(v14);
      if ( v10 )
        goto LABEL_15;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(v14);
    }
    if ( (v14[14] & 1) == 0 )
    {
      DifferencingKey = v14[15];
      goto LABEL_29;
    }
LABEL_15:
    if ( (v14[14] & 1) != 0 )
    {
LABEL_25:
      DifferencingKey = 0;
      v15 = 0;
LABEL_26:
      if ( v10 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v14);
      if ( !v15 )
        goto LABEL_30;
LABEL_29:
      VrpDecrementDiffHiveEntryHardRefCount(v14);
      goto LABEL_30;
    }
    VrpUnlockDiffHiveEntry(v14);
    if ( a3->Length )
    {
      v21.Length = 48;
      v21.RootDirectory = 0LL;
      v21.Attributes = 576;
      v21.ObjectName = a3;
      *(_OWORD *)&v21.SecurityDescriptor = 0LL;
      DifferencingKey = ZwOpenKey(&Handle, 0x20019u, &v21);
      if ( DifferencingKey < 0 )
        goto LABEL_24;
      v17 = Handle;
      if ( a5 )
        v11 = (int)Handle;
    }
    else
    {
      v17 = Handle;
    }
    *(_QWORD *)&v26 = String1;
    v25[0] = 48;
    v22[0] = 48;
    *(_QWORD *)&v23 = a2;
    DWORD2(v26) = 576;
    DWORD2(v23) = 576;
    *(_QWORD *)&v25[2] = 0LL;
    v27 = 0LL;
    *(_QWORD *)&v22[2] = 0LL;
    v24 = 0LL;
    DifferencingKey = CmLoadDifferencingKey((int)v25, (int)v22, a4, v11, 0LL, 0, 0LL, 0, (__int64)v17, a6 != 0, a8, 0);
    if ( DifferencingKey >= 0 )
      DifferencingKey = 0;
LABEL_24:
    VrpLockDiffHiveEntry(v14);
    v14[14] = v14[14] & 0xFFFFFFFE | (DifferencingKey >= 0);
    v14[15] = DifferencingKey;
    if ( DifferencingKey < 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
  *((_QWORD *)&KeyHandle[1] + 1) = 0LL;
  LODWORD(KeyHandle[1]) = 48;
  *(_QWORD *)&KeyHandle[2] = L"\"$";
  DWORD2(KeyHandle[2]) = 576;
  KeyHandle[3] = 0LL;
  DifferencingKey = ZwOpenKey((PHANDLE)KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&KeyHandle[1]);
  if ( DifferencingKey >= 0 )
  {
    v11 = KeyHandle[0];
    goto LABEL_6;
  }
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
  if ( *(_QWORD *)&KeyHandle[0] )
    ZwClose(*(HANDLE *)&KeyHandle[0]);
  return (unsigned int)DifferencingKey;
}
