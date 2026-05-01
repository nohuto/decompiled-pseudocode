/*
 * XREFs of ??1?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800E7E44
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$2 @ 0x1800EAE82 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetAllAppTabAllotm_ea_1800EAE82.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows_::_1_::dtor$0 @ 0x1800EC5C8 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncAllAppWindows_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$26 @ 0x1800EC8F5 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_ea_1800EC8F5.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$1 @ 0x1800EC901 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_ea_1800EC901.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges_::_1_::dtor$1 @ 0x1800F252F (_winrt--Windows--Internal--Shell--implementation--WindowData--GetPendingTabChanges_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$1 @ 0x1800F2D2B (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1800F2D2B.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE45C (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::unordered_map<unsigned __int64,unsigned __int64>::~unordered_map<unsigned __int64,unsigned __int64>(
        __int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  std::vector<void *>::_Tidy(a1 + 24);
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
