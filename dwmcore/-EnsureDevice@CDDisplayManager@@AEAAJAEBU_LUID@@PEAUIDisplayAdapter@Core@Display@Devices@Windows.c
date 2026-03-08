/*
 * XREFs of ?EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows@@PEAPEAUIDisplayDevice@4567@@Z @ 0x1802913D4
 * Callers:
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180291B70 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028DD30 (--$_Emplace@AEBU_LUID@@AEAV-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_return.c)
 *     ??$_Find_lower_bound@U_LUID@@@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBU_LUID@@@Z @ 0x18028E0DC (--$_Find_lower_bound@U_LUID@@@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@.c)
 */

__int64 __fastcall CDDisplayManager::EnsureDevice(
        CDDisplayManager *this,
        struct _LUID *a2,
        struct Windows::Devices::Display::Core::IDisplayAdapter *a3,
        struct Windows::Devices::Display::Core::IDisplayDevice **a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rdx
  struct Windows::Devices::Display::Core::IDisplayDevice *v9; // rdx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, struct Windows::Devices::Display::Core::IDisplayAdapter *, struct Windows::Devices::Display::Core::IDisplayDevice **); // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _BYTE v16[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  struct Windows::Devices::Display::Core::IDisplayDevice *v18; // [rsp+70h] [rbp+20h] BYREF

  v6 = 0;
  v18 = 0LL;
  std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<_LUID>(
    (__int64 *)&xmmword_1803E32E0,
    (__int64)v16,
    (unsigned __int64 *)a2);
  v8 = v17;
  if ( *(_BYTE *)(v17 + 25) || *(_QWORD *)a2 < *(_QWORD *)(v17 + 32) )
    v8 = xmmword_1803E32E0;
  if ( v8 != (_QWORD)xmmword_1803E32E0 )
  {
    v9 = *(struct Windows::Devices::Display::Core::IDisplayDevice **)(v8 + 40);
    v18 = v9;
    if ( !v9 )
    {
LABEL_10:
      v14 = 0LL;
      *a4 = v9;
      v18 = 0LL;
      goto LABEL_12;
    }
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayDevice *))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_9:
    v9 = v18;
    goto LABEL_10;
  }
  v10 = g_DDisplayManager;
  v11 = *(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayAdapter *, struct Windows::Devices::Display::Core::IDisplayDevice **))(*(_QWORD *)g_DDisplayManager + 112LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v18);
  v12 = v11(v10, a3, &v18);
  v6 = v12;
  if ( v12 >= 0 )
  {
    std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Emplace<_LUID const &,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy> &>(
      (__int64 *)&xmmword_1803E32E0,
      (__int64)v16);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x27Fu, 0LL);
  v14 = (__int64)v18;
LABEL_12:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v6;
}
