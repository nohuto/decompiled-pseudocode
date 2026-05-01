/*
 * XREFs of ?Hide@RetailDemoExperienceManager@@UEAAJXZ @ 0x18025B950
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801AA084 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x18025D844 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::Hide(RetailDemoExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  try
  {
    v2 = *((_QWORD *)this + 9);
    if ( !v2 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        202LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        203LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    RetailDemoExperienceManager::_RestoreWorkingArea((RetailDemoExperienceManager *)((char *)this - 128));
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC5,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v4);
  }
  return result;
}
