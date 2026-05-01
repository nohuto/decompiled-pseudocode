/*
 * XREFs of __lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator()_::_1_::dtor$8 @ 0x180380330
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18035B438 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator()_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 248) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 248) &= ~1u;
    return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)(a2 + 264));
  }
  return result;
}
