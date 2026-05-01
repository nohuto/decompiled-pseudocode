/*
 * XREFs of ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x180311A7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___::Run @ 0x180315B10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180068B18 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x18030EA40 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18031B830 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::ActivationCompleted(RTL_SRWLOCK *this, __int64 a2)
{
  __int128 v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  unsigned int v4; // r8d
  HSTRING_HEADER *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // [rsp+20h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v12; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v13; // [rsp+40h] [rbp-30h] BYREF

  *((_QWORD *)&v2 + 1) = a2;
  *(_QWORD *)&v2 = this;
  v3 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  v12 = v3;
  if ( (int)ViewEventDispatcher::_FindPendingActivation(v2, *((_QWORD *)&v2 + 1), &v11) >= 0 )
  {
    v11 = *(_QWORD *)(v11 + 32);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v13, (const WCHAR **)off_180540F18, v4);
    Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v11,
      (HSTRING)v5[1].Reserved.Reserved1,
      v6,
      1);
    v12 = (RTL_SRWLOCK *)v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v13.Reserved.Reserved1 = (PVOID)v2;
    *(_OWORD *)&v13.Reserved.Reserved2[8] = v2;
    v12 = 0LL;
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___(
      v8,
      v7,
      *(_DWORD *)(v2 + 272),
      v9,
      v10,
      &v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
