/*
 * XREFs of ?IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x1804C4C00
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x18008C408 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8D54 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8D54.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD238 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive(
        RTL_SRWLOCK *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  bool v6; // al
  PCWSTR StringRawBuffer; // r8
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 18, &v11);
  v6 = Microsoft::WRL::operator!=<IApplicationViewCollection>(&this[17].Ptr);
  try
  {
    if ( v6 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      *a3 = (*(__int64 (__fastcall **)(PVOID, PCWSTR))(*(_QWORD *)this[17].Ptr + 56LL))(this[17].Ptr, StringRawBuffer);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA4,
                           (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v8);
  }
  return result;
}
