/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1804C49A0
 * Callers:
 *     ?Append@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x1804C3240 (-Append@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections.c)
 *     ?InsertAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUHSTRING__@@@Z @ 0x1804C4990 (-InsertAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collectio.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005B3D8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005B3F4 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801C4584 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x1801C9EC4 (memmove_s.c)
 *     ??$?0PEAUHSTRING__@@@?$AutoValue@PEAUHSTRING__@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUHSTRING__@@PEAJ@Z @ 0x1804C17D4 (--$-0PEAUHSTRING__@@@-$AutoValue@PEAUHSTRING__@@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Interna.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1804C5798 (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        HSTRING a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r9d
  int v10; // edx
  unsigned int v11; // eax
  RTL_SRWLOCK *v12; // rcx
  char v14[4]; // [rsp+30h] [rbp-20h] BYREF
  HRESULT v15; // [rsp+34h] [rbp-1Ch] BYREF
  HSTRING string; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+40h] [rbp-10h] BYREF
  HSTRING v18; // [rsp+80h] [rbp+30h] BYREF

  v18 = a3;
  v15 = 0;
  XWinRT::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>::AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>>(
    &string,
    &v18,
    &v15);
  v7 = v15;
  if ( v15 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v17, (RTL_SRWLOCK *)(a1 + 104), &v15);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v8 = *(_DWORD *)(a1 + 72);
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 72);
      if ( a2 <= v8 )
      {
        if ( v8 >= 0x7FFFFFFF )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v14);
          v7 = 0;
          v9 = *(_DWORD *)(a1 + 76);
          if ( *(_DWORD *)(a1 + 72) + 1 <= v9 )
            goto LABEL_14;
          v10 = 1;
          if ( v9 + 1 <= (v9 >> 1) + v9 )
            v10 = v9 >> 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ResizeStorage(
                 a1,
                 v9 + v10);
          if ( v7 >= 0 )
          {
LABEL_14:
            v11 = *(_DWORD *)(a1 + 72);
            if ( a2 < v11
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 88) + 8LL * (a2 + 1)),
                   8LL * (*(_DWORD *)(a1 + 76) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 88) + 8LL * a2),
                   8LL * (v11 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2) = string;
              string = 0LL;
              ++*(_DWORD *)(a1 + 72);
              ++*(_DWORD *)(a1 + 120);
            }
          }
        }
      }
      else
      {
        v7 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v17 )
    {
      v12 = v17 + 1;
      if ( LODWORD(v17->Ptr) == 1 )
        LODWORD(v12->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v12);
    }
    if ( v7 >= 0 )
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  }
  WindowsDeleteString(string);
  return (unsigned int)v7;
}
