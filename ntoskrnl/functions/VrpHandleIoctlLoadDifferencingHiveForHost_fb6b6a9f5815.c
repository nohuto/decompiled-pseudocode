__int64 __fastcall VrpHandleIoctlLoadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _WORD *Pool2; // rsi
  int v15; // edi
  __int64 v16; // rax
  signed __int8 v17; // cf
  __int64 v18; // rdi
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-20h] BYREF
  __int128 v22; // [rsp+60h] [rbp-10h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( a2 < 0x20 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned __int16 *)(a1 + 8);
  if ( (v6 & 1) != 0 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned __int16 *)(a1 + 10);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(a1 + 12);
  if ( (v8 & 1) != 0 )
    return (unsigned int)-1073741811;
  v9 = 0;
  if ( !(_WORD)v6 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  v10 = v6 + 24;
  v11 = v10 + v7;
  if ( v10 > v11 || v11 > v11 + v8 || a2 < v11 + v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    v12 = *(unsigned __int16 *)(a1 + 8);
    Src[1] = (void *)(a1 + 24);
    WORD1(Src[0]) = v12;
    LOWORD(Src[0]) = v12;
    v13 = *(unsigned __int16 *)(a1 + 10);
    WORD1(v22) = v13;
    LOWORD(v22) = v13;
    *((_QWORD *)&v22 + 1) = a1 + 24 + 2 * (v12 >> 1);
    v21.Buffer = (wchar_t *)(*((_QWORD *)&v22 + 1) + 2 * (v13 >> 1));
    v21.MaximumLength = *(_WORD *)(a1 + 12);
    v21.Length = v21.MaximumLength;
    Pool2 = (_WORD *)ExAllocatePool2(257LL, v12 + 10, 1734693462LL);
    if ( Pool2 )
    {
      Pool2[4] = Src[0];
      memmove(Pool2 + 5, Src[1], LOWORD(Src[0]));
      v15 = VrpLoadDifferencingHive(
              (const UNICODE_STRING *)Src,
              (__int64)&v22,
              &v21,
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 4) & 1,
              (*(_DWORD *)(a1 + 4) >> 1) & 1,
              0,
              *(void **)(a1 + 16));
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)v15;
      }
      else
      {
        v16 = KeAbPreAcquire((__int64)&VrpHostLoadedHivesLock, 0LL);
        v17 = _interlockedbittestandset64((volatile signed __int32 *)&VrpHostLoadedHivesLock, 0LL);
        v18 = v16;
        if ( v17 )
          ExfAcquirePushLockExclusiveEx(&VrpHostLoadedHivesLock, v16, (__int64)&VrpHostLoadedHivesLock);
        if ( v18 )
          *(_BYTE *)(v18 + 18) = 1;
        *(_QWORD *)Pool2 = VrpHostLoadedHives;
        VrpHostLoadedHives = (__int64)Pool2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
        KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v9;
}
