/*
 * XREFs of ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1804C3D00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180086C18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$?9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIApplicationViewCollection@@@01@$$T@Z @ 0x18008C408 (--$-9UIApplicationViewCollection@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIApplicationViewCollection@@.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180099938 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800CEA60 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8F04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8F04.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD3E8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026559C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1802655EC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??$GetAppDisplayName@AEAPEBGPEBG@AppUsageTelemetry@@SAXAEAPEBG$$QEAPEBG@Z @ 0x1804C2430 (--$GetAppDisplayName@AEAPEBGPEBG@AppUsageTelemetry@@SAXAEAPEBG$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName(
        RTL_SRWLOCK *this,
        HSTRING a2,
        HSTRING *a3)
{
  WCHAR *StringRawBuffer; // rbx
  bool v6; // al
  _QWORD *v7; // rcx
  __int64 v8; // rax
  const WCHAR *v9; // rax
  HRESULT String; // eax
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // [rsp+20h] [rbp-78h] BYREF
  WCHAR *v17; // [rsp+28h] [rbp-70h] BYREF
  RTL_SRWLOCK *v18; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-60h] BYREF
  UINT32 length; // [rsp+48h] [rbp-50h]
  _QWORD v21[4]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a3 = 0LL;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  v17 = StringRawBuffer;
  std::wstring::wstring((__int64)v19);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 18, &v18);
  v6 = Microsoft::WRL::operator!=<IApplicationViewCollection>(&this[17].Ptr);
  try
  {
    if ( v6 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, WCHAR *))(*(_QWORD *)*v7 + 88LL))(*v7, v21, StringRawBuffer);
      std::wstring::operator=((__int64)v19, v8);
      std::wstring::~wstring(v21);
    }
    else
    {
      std::wstring::operator=((char *)v19, StringRawBuffer);
    }
    v9 = (const WCHAR *)std::wstring::c_str(v19);
    String = WindowsCreateString(v9, length, a3);
    if ( String < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        182LL,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
        (const char *)(unsigned int)String);
      __debugbreak();
      return Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName_::_1_::dtor_0(
               v14,
               v13,
               v15);
    }
    v16 = std::wstring::c_str(v19);
    AppUsageTelemetry::GetAppDisplayName<unsigned short const * &,unsigned short const *>(
      (__int64 *)&v17,
      (__int64 *)&v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
    std::wstring::~wstring(v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBB,
                           (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v11);
  }
  return result;
}
