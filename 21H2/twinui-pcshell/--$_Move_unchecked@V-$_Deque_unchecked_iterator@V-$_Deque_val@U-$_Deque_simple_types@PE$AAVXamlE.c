/*
 * XREFs of ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x18035F1F4
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x18035F370 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18035B6AC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rsi
  unsigned __int64 v9; // rbx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 8);
  for ( i = a2[1]; i != v4; a2[1] = i )
  {
    v9 = a4[1];
    __abi_winrt_ptr_assign(
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v9 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL))) + 8 * (v9 & 1)),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((i >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL))) + 8 * (i & 1)));
    ++i;
    a4[1] = v9 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
