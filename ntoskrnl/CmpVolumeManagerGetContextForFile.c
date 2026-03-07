__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  struct _OBJECT_TYPE *v5; // r8
  NTSTATUS v6; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  int v8; // eax
  __int64 v9; // rdi
  PPRIVILEGE_SET ContextForGuidUnsafe; // rdi
  struct _PRIVILEGE_SET *v11; // rbx
  __int64 v13; // rax
  signed __int8 v14; // cf
  __int64 v15; // rdi
  PPRIVILEGE_SET *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  Object = 0LL;
  v5 = *(struct _OBJECT_TYPE **)CmIoFileObjectType;
  v21 = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 0x80u, v5, 0, &Object, 0LL);
  if ( v6 < 0 )
    goto LABEL_18;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v8 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v21);
  v6 = v8;
  if ( v8 == -1073741811 || v8 == -1073741637 || v8 == -1073741808 )
  {
    v6 = CmpVolumeContextCreate(&CmpVolumeManager, 0LL, &Privileges);
    if ( v6 >= 0 )
    {
      v17 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
      v14 = _interlockedbittestandset64((volatile signed __int32 *)&CmpVolumeManager, 0LL);
      v18 = v17;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx(&CmpVolumeManager, v17, (__int64)&CmpVolumeManager);
      if ( v18 )
        *(_BYTE *)(v18 + 18) = 1;
LABEL_27:
      v16 = (PPRIVILEGE_SET *)qword_140D552D8;
      if ( *(__int64 **)qword_140D552D8 != &qword_140D552D0 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      Privileges = 0LL;
      *(_QWORD *)&ContextForGuidUnsafe->PrivilegeCount = &qword_140D552D0;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v16;
      *v16 = ContextForGuidUnsafe;
      qword_140D552D8 = (__int64)ContextForGuidUnsafe;
LABEL_29:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpVolumeManager, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CmpVolumeManager);
      KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
LABEL_13:
      *a4 = ContextForGuidUnsafe;
      v6 = 0;
    }
LABEL_14:
    v11 = Privileges;
    if ( Privileges )
    {
      CmpVolumeContextCleanup(Privileges);
      CmSiFreeMemory(v11);
    }
    goto LABEL_16;
  }
  if ( v8 >= 0 )
  {
    v9 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpVolumeManager, 0, v9, (__int64)&CmpVolumeManager);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(&CmpVolumeManager, &v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
      goto LABEL_13;
    v6 = CmpVolumeContextCreate(&CmpVolumeManager, AttachedDeviceReference, &Privileges);
    if ( v6 >= 0 )
    {
      v13 = KeAbPreAcquire((__int64)&CmpVolumeManager, 0LL);
      v14 = _interlockedbittestandset64((volatile signed __int32 *)&CmpVolumeManager, 0LL);
      v15 = v13;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx(&CmpVolumeManager, v13, (__int64)&CmpVolumeManager);
      if ( v15 )
        *(_BYTE *)(v15 + 18) = 1;
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(&CmpVolumeManager, &v21);
      if ( ContextForGuidUnsafe )
        goto LABEL_29;
      goto LABEL_27;
    }
    goto LABEL_14;
  }
LABEL_16:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_18:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v6;
}
