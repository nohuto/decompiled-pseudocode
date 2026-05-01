/*
 * XREFs of ?StartInCoreWindowHostingMode@IFrameworkApplicationStaticsPrivate@Xaml@UI@Windows@@UE$AAAXVWindowCreationParameters@234@PE$AAVApplicationInitializationCallback@234@@Z @ 0x1803617D8
 * Callers:
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x18035FFD8 (_lambda_05f458ff3b283a3e9a9130333ab0a931_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::IFrameworkApplicationStaticsPrivate::StartInCoreWindowHostingMode(
        __int64 *a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  v3 = *a1;
  v6 = *((_DWORD *)a2 + 4);
  v5 = v2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v3 + 48))(a1, &v5);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    __debugbreak();
  }
  return result;
}
