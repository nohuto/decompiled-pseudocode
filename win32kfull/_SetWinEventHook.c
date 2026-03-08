/*
 * XREFs of _SetWinEventHook @ 0x1C003952C
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00397B0 (NtUserSetWinEventHook.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C00394D8 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     CategoryMaskFromEventRange @ 0x1C00399F4 (CategoryMaskFromEventRange.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     AddHmodDependency @ 0x1C009D860 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C009D950 (GetHmodTableIndex.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        char a8)
{
  struct tagTHREADINFO *v12; // r15
  int HmodTableIndex; // esi
  __int64 v14; // r8
  int v15; // edi
  char *v16; // rbx
  tagDomLock *v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v26; // [rsp+28h] [rbp-70h]
  tagDomLock *v27; // [rsp+30h] [rbp-68h] BYREF
  char v28; // [rsp+38h] [rbp-60h] BYREF
  char v29; // [rsp+58h] [rbp-40h]

  v26 = a3;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  v12 = PtiCurrentShared();
  if ( (*((_DWORD *)v12 + 122) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v23 = 1427LL;
    goto LABEL_34;
  }
  if ( a1 > a2 )
  {
    v23 = 1426LL;
    goto LABEL_34;
  }
  if ( (a8 & 4) == 0 )
  {
    HmodTableIndex = -1;
    v26 = 0LL;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v23 = 1428LL;
    goto LABEL_34;
  }
  if ( !a4 )
  {
    v23 = 1157LL;
    goto LABEL_34;
  }
  HmodTableIndex = GetHmodTableIndex(a4);
  if ( HmodTableIndex == -1 )
  {
    v23 = 126LL;
LABEL_34:
    UserSetLastError(v23);
    return 0LL;
  }
LABEL_8:
  if ( a7 )
  {
    v22 = PtiFromThreadId(a7);
    if ( !v22 || (*(_DWORD *)(v22 + 488) & 0x1000000) == 0 )
    {
      v23 = 1444LL;
      goto LABEL_34;
    }
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v27);
  if ( !v29 )
  {
    v15 = 0;
    v16 = &v28;
    do
    {
      v17 = (tagDomLock *)*((_QWORD *)v16 - 1);
      if ( v17 )
      {
        if ( *v16 )
          tagDomLock::LockExclusive(v17);
        else
          tagDomLock::LockShared(v17);
      }
      ++v15;
      v16 += 16;
    }
    while ( !v15 );
    v29 = 1;
  }
  LOBYTE(v14) = 15;
  v18 = HMAllocObject(v12, 0LL, v14);
  if ( v29 )
  {
    if ( v27 )
    {
      if ( v28 )
        tagDomLock::UnLockExclusive(v27);
      else
        tagDomLock::UnLockShared(v27);
    }
    v29 = 0;
  }
  if ( !v18 )
    return 0LL;
  *(_DWORD *)(v18 + 32) = a1;
  v19 = *(_DWORD *)(v18 + 40) & 0xFFFFFFF0;
  *(_DWORD *)(v18 + 36) = a2;
  *(_DWORD *)(v18 + 56) = a7;
  *(_QWORD *)(v18 + 48) = a6;
  *(_DWORD *)(v18 + 72) = HmodTableIndex;
  *(_DWORD *)(v18 + 40) = (2 * (a8 & 0xB)) | v19 & 0xFFFFFFEF | ((a8 & 4) != 0 ? 8 : 0);
  if ( HmodTableIndex >= 0 )
    AddHmodDependency((unsigned int)HmodTableIndex);
  *(_QWORD *)(v18 + 64) = a5 - v26;
  *(_QWORD *)(v18 + 24) = gpWinEventHooks;
  gpWinEventHooks = v18;
  *(_DWORD *)(gpsi + 1892LL) |= CategoryMaskFromEventRange(a1, a2);
  *(_DWORD *)(v18 + 76) = W32GetCurrentThreadDpiAwarenessContext(v20);
  return v18;
}
