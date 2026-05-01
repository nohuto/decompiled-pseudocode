/*
 * XREFs of ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x18037804C
 * Callers:
 *     ?ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXXZ @ 0x18037522C (-ReevaluateAll@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@_ea_18037522C.c)
 *     ?add@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@95@@Z @ 0x18037D740 (-add@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateI_ea_18037D740.c)
 *     ?remove@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x18037E0C0 (-remove@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@Evalua_ea_18037E0C0.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A1998 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x1803780C4 (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 */

__int64 *__fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rdx
  __int64 *result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 104);
  v3 = *v1;
  v5 = *v1;
  while ( (__int64 *)v3 != v1 )
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState(a1, *(_QWORD *)(v3 + 40));
    result = std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v5);
    v3 = v5;
  }
  return result;
}
