/*
 * XREFs of ?OnCachedFileUpdaterActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@ME$AAAXPE$AAVCachedFileUpdaterActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180360FC4
 * Callers:
 *     ?OnCachedFileUpdaterActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OCA@E$AAAXPE$AAVCachedFileUpdaterActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18016A3B0 (-OnCachedFileUpdaterActivated@-QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OCA@E$AAA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035C0D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

__int64 __fastcall _OnCachedFileUpdaterActivated__QIApplicationOverrides_Xaml_UI_Windows__Application_234_ME_AAAXPE_AAVCachedFileUpdaterActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplicationOverrides_Xaml_UI_Windows__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 104LL))(v5, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  return result;
}
