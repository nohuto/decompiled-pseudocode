/*
 * XREFs of ?ApplyPrependDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x180137520
 * Callers:
 *     <none>
 * Callees:
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x180129F38 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyPrependDefaultTaskbarLayout(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        __int64 a2)
{
  const char *v2; // r9
  __int64 result; // rax
  __int64 (__fastcall *v4)(); // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 =  IDCompThumbnail::`vcall'{128,{flat}};
  v5 = 16;
  try
  {
    result = winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<,long (CPinnedList::*)(void)>(
               (__int64)this,
               a2,
               (__int64)&v4);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x396,
                           (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                           v2);
  }
  return result;
}
