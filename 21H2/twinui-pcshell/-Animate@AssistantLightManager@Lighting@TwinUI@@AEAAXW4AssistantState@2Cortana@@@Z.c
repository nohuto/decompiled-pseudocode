/*
 * XREFs of ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x1804BE1B8
 * Callers:
 *     _lambda_b1f3f535d4f0ba887956551c7aafec2d_::_lambda_invoker_cdecl_ @ 0x1804BCFE0 (_lambda_b1f3f535d4f0ba887956551c7aafec2d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801AA084 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1802932D0 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ??0?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01@@Z @ 0x1804BD8B8 (--0-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@QEAA@AEBU01.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::Animate(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // r14d
  char v8; // r15
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  std::_Ref_count_base *v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp+40h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)a1);
  v4 = *(__int64 **)(a1 + 40);
  v5 = *v4;
  v17 = *v4;
  while ( (__int64 *)v5 != v4 )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      &v14,
      (_QWORD *)(v5 + 32));
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v6);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v17);
    v5 = v17;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v7 = 0;
  v8 = 0;
  do
  {
    wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)a1);
    v9 = *(__int64 **)(a1 + 40);
    v10 = *v9;
    v17 = *v9;
    while ( (__int64 *)v10 != v9 )
    {
      std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
        &v14,
        (_QWORD *)(v10 + 32));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 8LL))(v15, (unsigned int)v7, (unsigned int)a2);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v17);
      v10 = v17;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    ++v7;
    if ( !a2 )
    {
LABEL_21:
      v8 = 1;
      continue;
    }
    if ( a2 > 0 )
    {
      if ( a2 <= 3 )
      {
        v13 = 0;
        if ( v7 <= 600 )
          v13 = a2;
        a2 = v13;
      }
      else if ( a2 == 4 )
      {
        a2 = 0;
        if ( v7 <= 200 )
          a2 = 4;
      }
      else if ( a2 == 5 )
      {
        goto LABEL_21;
      }
    }
  }
  while ( !(unsigned __int8)wil::handle_wait(*(wil **)(a1 + 64), (void *)0x32) && !v8 );
  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)a1);
  v11 = *(__int64 **)(a1 + 40);
  v12 = *v11;
  v17 = *v11;
  while ( (__int64 *)v12 != v11 )
  {
    std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>(
      &v14,
      (_QWORD *)(v12 + 32));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, 0LL);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v17);
    v12 = v17;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
