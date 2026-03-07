__int64 __fastcall VrpHandleIoctlUnloadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rdi
  BOOLEAN v14; // al
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = 0LL;
  String1 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned __int16 *)(a1 + 4);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 )
    return (unsigned int)-1073741811;
  v8 = v7 + 6;
  if ( v8 < 6 || a2 < v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    String1.Buffer = (wchar_t *)(a1 + 6);
    String1.MaximumLength = *(_WORD *)(a1 + 4);
    String1.Length = String1.MaximumLength;
    v9 = KeAbPreAcquire((__int64)&VrpHostLoadedHivesLock, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&VrpHostLoadedHivesLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&VrpHostLoadedHivesLock, v9, (__int64)&VrpHostLoadedHivesLock);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v12 = VrpHostLoadedHives;
    v13 = &VrpHostLoadedHives;
    if ( VrpHostLoadedHives )
    {
      while ( 1 )
      {
        String2.Buffer = (wchar_t *)(v12 + 10);
        String2.Length = *(_WORD *)(v12 + 8);
        String2.MaximumLength = String2.Length;
        v14 = RtlEqualUnicodeString(&String1, &String2, 1u);
        v15 = *(_QWORD *)v12;
        if ( v14 )
          break;
        v13 = (__int64 *)v12;
        v12 = *(_QWORD *)v12;
        if ( !v15 )
          goto LABEL_20;
      }
      *v13 = v15;
      v5 = (_QWORD *)v12;
      *(_QWORD *)v12 = 0LL;
    }
LABEL_20:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
    KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
    if ( v5 )
    {
      v16 = VrpUnloadDifferencingHive(&String1);
      if ( v16 == -1073741772 || (v6 = v16, v16 >= 0) )
      {
        ExFreePoolWithTag(v5, 0);
        return 0;
      }
      else
      {
        v17 = KeAbPreAcquire((__int64)&VrpHostLoadedHivesLock, 0LL);
        v10 = _interlockedbittestandset64((volatile signed __int32 *)&VrpHostLoadedHivesLock, 0LL);
        v18 = v17;
        if ( v10 )
          ExfAcquirePushLockExclusiveEx(&VrpHostLoadedHivesLock, v17, (__int64)&VrpHostLoadedHivesLock);
        if ( v18 )
          *(_BYTE *)(v18 + 18) = 1;
        *v5 = VrpHostLoadedHives;
        VrpHostLoadedHives = (__int64)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
        KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v6;
}
