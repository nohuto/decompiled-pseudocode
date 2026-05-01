/*
 * XREFs of ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800F339C
 * Callers:
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800F292C (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 * Callees:
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x1800E8738 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA-AV.c)
 *     ?_Xran@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBAXXZ @ 0x1800F337C (-_Xran@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEBAXXZ.c)
 */

__int64 __fastcall std::deque<winrt::guid>::at(_QWORD *a1, unsigned __int64 a2)
{
  __int64 **v2; // rax
  __int64 v3; // r10
  _QWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a1[4] <= a2 )
  {
    std::deque<winrt::guid>::_Xran();
    JUMPOUT(0x1800F33F8LL);
  }
  v5[2] = a1[3];
  v5[0] = *a1;
  v5[1] = 0LL;
  v2 = (__int64 **)std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+(
                     (__int64)v5,
                     v6,
                     a2);
  if ( *v2 )
    v3 = **v2;
  return *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * ((unsigned __int64)v2[2] & (*(_QWORD *)(v3 + 16) - 1LL)));
}
