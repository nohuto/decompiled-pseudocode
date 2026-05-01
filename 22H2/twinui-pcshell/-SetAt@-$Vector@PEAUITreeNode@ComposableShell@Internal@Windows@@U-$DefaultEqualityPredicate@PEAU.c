/*
 * XREFs of ?SetAt@?$Vector@PEAUITreeNode@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUITreeNode@ComposableShell@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@3674@U?$VectorOptions@PEAUITreeNode@ComposableShell@Internal@Windows@@$0A@$00$0A@@3674@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITreeNode@ComposableShell@25@@Z @ 0x1802C18C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005B3D8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005B3F4 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1801BF43C (-Release@ReferencedGitCookie@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@deta.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801C4584 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x1801C9EC4 (memmove_s.c)
 *     ??$?0PEAUITreeNode@ComposableShell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUITreeNode@ComposableShell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITreeNode@ComposableShell@Internal@Windows@@PEAJ@Z @ 0x1802B8AA4 (--$-0PEAUITreeNode@ComposableShell@Internal@Windows@@@-$AutoValue@V-$GitStorageType@UITreeNode@C.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::ITreeNode *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::ITreeNode *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r12
  volatile signed __int32 *v5; // r14
  int v6; // edi
  __int64 v7; // r15
  volatile signed __int32 *v8; // rsi
  RTL_SRWLOCK *v9; // rcx
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp-40h] BYREF
  void *v12[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]
  __int128 Destination; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+40h] BYREF
  int v16; // [rsp+B8h] [rbp+48h] BYREF

  v15 = a3;
  v3 = a2;
  v16 = 0;
  v5 = 0LL;
  *(_QWORD *)&v13 = 0LL;
  BYTE8(v13) = 0;
  XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::ITreeNode *>>(
    (__int64)v12,
    &v15,
    &v16);
  v6 = v16;
  if ( v16 < 0 )
  {
    v8 = (volatile signed __int32 *)v12[0];
    goto LABEL_18;
  }
  XWinRT::SerializingLockPolicy::Write(&v11, (RTL_SRWLOCK *)(a1 + 104), &v16);
  v6 = v16;
  if ( v16 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 72) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
      v6 = 0;
      *(_QWORD *)&Destination = 0LL;
      BYTE8(Destination) = 0;
      v7 = 16 * v3;
      if ( !memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 88)), 0x10uLL) )
      {
        *(_OWORD *)(v7 + *(_QWORD *)(a1 + 88)) = *(_OWORD *)v12;
        v8 = 0LL;
        LOBYTE(v12[1]) = 0;
        ++*(_DWORD *)(a1 + 120);
        v13 = Destination;
        if ( *(_BYTE *)(v7 + *(_QWORD *)(a1 + 88) + 8) )
          ++*(_DWORD *)(a1 + 80);
        v5 = (volatile signed __int32 *)v13;
        if ( BYTE8(Destination) )
          --*(_DWORD *)(a1 + 80);
        goto LABEL_9;
      }
      v6 = -2147418113;
      RoOriginateError(2147549183LL, 0LL);
    }
  }
  v8 = (volatile signed __int32 *)v12[0];
LABEL_9:
  if ( v11 )
  {
    v9 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      LODWORD(v9->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v9);
  }
LABEL_18:
  if ( LOBYTE(v12[1]) )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v8);
  }
  else if ( v8 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( BYTE8(v13) )
  {
    XWinRT::detail::GitStorageType<Windows::Internal::ComposableShell::ITreeNode>::ReferencedGitCookie::Release(v5);
  }
  else if ( v5 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
