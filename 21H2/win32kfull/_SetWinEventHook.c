/*
 * XREFs of _SetWinEventHook @ 0x1C00E5D30
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00E5B40 (NtUserSetWinEventHook.c)
 * Callees:
 *     GetHmodTableIndex @ 0x1C0025248 (GetHmodTableIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070328 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     CategoryMaskFromEventRange @ 0x1C00E61DC (CategoryMaskFromEventRange.c)
 *     AddHmodDependency @ 0x1C00E6268 (AddHmodDependency.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // r13
  int HmodTableIndex; // esi
  __int64 v15; // r8
  int v16; // edi
  char *v17; // rbx
  tagDomLock *v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v30; // [rsp+28h] [rbp-70h]
  tagDomLock *v31; // [rsp+30h] [rbp-68h] BYREF
  char v32; // [rsp+38h] [rbp-60h] BYREF
  char v33; // [rsp+58h] [rbp-40h]

  v30 = a3;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v27 = 1427LL;
    goto LABEL_34;
  }
  if ( a1 > a2 )
  {
    v27 = 1426LL;
    goto LABEL_34;
  }
  if ( (a8 & 4) == 0 )
  {
    HmodTableIndex = -1;
    v30 = 0LL;
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v27 = 1428LL;
    goto LABEL_34;
  }
  if ( !a4 )
  {
    v27 = 1157LL;
    goto LABEL_34;
  }
  HmodTableIndex = GetHmodTableIndex(a4);
  if ( HmodTableIndex == -1 )
  {
    v27 = 126LL;
LABEL_34:
    UserSetLastError(v27, v12);
    return 0LL;
  }
LABEL_8:
  if ( a7 )
  {
    v26 = PtiFromThreadId(a7);
    if ( !v26 || (*(_DWORD *)(v26 + 488) & 0x1000000) == 0 )
    {
      v27 = 1444LL;
      goto LABEL_34;
    }
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v31);
  if ( !v33 )
  {
    v16 = 0;
    v17 = &v32;
    do
    {
      v18 = (tagDomLock *)*((_QWORD *)v17 - 1);
      if ( v18 )
      {
        if ( *v17 )
          tagDomLock::LockExclusive(v18);
        else
          tagDomLock::LockShared(v18);
      }
      ++v16;
      v17 += 16;
    }
    while ( !v16 );
    v33 = 1;
  }
  LOBYTE(v15) = 15;
  v19 = HMAllocObject(ThreadWin32Thread, 0LL, v15);
  if ( v33 )
  {
    if ( v31 )
    {
      if ( v32 )
        tagDomLock::UnLockExclusive(v31);
      else
        tagDomLock::UnLockShared(v31);
    }
    v33 = 0;
  }
  if ( !v19 )
    return 0LL;
  v20 = *(_DWORD *)(v19 + 40);
  *(_DWORD *)(v19 + 32) = a1;
  *(_DWORD *)(v19 + 36) = a2;
  *(_DWORD *)(v19 + 56) = a7;
  *(_QWORD *)(v19 + 48) = a6;
  *(_DWORD *)(v19 + 72) = HmodTableIndex;
  *(_DWORD *)(v19 + 40) = (2 * (a8 & 0xB)) | v20 & 0xFFFFFFE0 | ((a8 & 4) != 0 ? 8 : 0);
  if ( HmodTableIndex >= 0 )
    AddHmodDependency((unsigned int)HmodTableIndex);
  *(_QWORD *)(v19 + 64) = a5 - v30;
  *(_QWORD *)(v19 + 24) = gpWinEventHooks;
  gpWinEventHooks = v19;
  v21 = CategoryMaskFromEventRange(a1, a2, gpsi);
  *(_DWORD *)(v22 + 1892) |= v21;
  *(_DWORD *)(v19 + 76) = W32GetCurrentThreadDpiAwarenessContext(v24, v23);
  return v19;
}
