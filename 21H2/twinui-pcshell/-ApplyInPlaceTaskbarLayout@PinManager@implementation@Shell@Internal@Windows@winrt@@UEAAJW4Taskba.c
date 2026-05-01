/*
 * XREFs of ?ApplyInPlaceTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@@Z @ 0x1801374A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18012A1D0 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@S.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyInPlaceTaskbarLayout(
        __int64 a1,
        __int64 a2)
{
  const char *v2; // r9
  __int64 result; // rax
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 =  CPinnedList::`vcall'{136,{flat}};
  v5 = 16;
  try
  {
    result = winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,long (CPinnedList::*)(enum TaskbarLayoutType)>(
               a1,
               a2,
               (__int64)&v4,
               a2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39F,
                           (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                           v2);
  }
  return result;
}
