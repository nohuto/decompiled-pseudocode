/*
 * XREFs of ?ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180137430
 * Callers:
 *     <none>
 * Callees:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x180129F08 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyReorderTaskbarLayout(
        __int64 a1,
        __int64 a2,
        char a3)
{
  const char *v3; // r9
  __int64 result; // rax
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 =  winrt::impl::abi<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,void>::type::`vcall'{144,{flat}};
  v6 = 16;
  try
  {
    result = winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,int,long (CPinnedList::*)(enum TaskbarLayoutType,int)>(
               a1,
               a2,
               (__int64)&v5,
               a2,
               a3);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A9,
                           (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                           v3);
  }
  return result;
}
