/*
 * XREFs of ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x180133100
 * Callers:
 *     ?OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x1801337F8 (-OnDock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133DD4 (-OnTailButtonClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133E54 (-OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133ED8 (-OnTailButtonLongPress@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 *     ?OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180133F58 (-OnUndock@PenEventsDispatcherPrincipal@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x1800143D0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180046380 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F4D0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy.c)
 *     ??R?$_Func_class@_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@std@@QEBA_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z @ 0x180132A08 (--R-$_Func_class@_NV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N.c)
 *     ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x180133320 (-GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClien.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180133478 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall PenEventsDispatcherPrincipal::FireEvents(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  char v6; // si
  __int64 *v7; // rdi
  __int64 *v8; // r15
  void (__fastcall ***v9)(_QWORD); // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-10h]
  __int64 v19; // [rsp+A0h] [rbp+48h] BYREF
  int v20; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+58h]
  void (__fastcall ***v22)(_QWORD); // [rsp+B8h] [rbp+60h] BYREF

  v21 = a3;
  v4 = a2;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 192) && (_DWORD)a2 )
  {
    PenEventsDispatcherPrincipal::GetClientsForProcess(a1, &v16);
    v7 = v16;
    v8 = v17;
    if ( v16 != v17 )
    {
      do
      {
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          &v22,
          (void (__fastcall ***)(_QWORD))*v7);
        v9 = v22;
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          &v19,
          v22);
        if ( std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,bool>::operator()(
               a3,
               &v19,
               0) )
        {
          v20 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9[4][2] + 8LL))(v9[4][2]) + 32);
          std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
            (_QWORD *)(a1 + 128),
            v15,
            (const unsigned __int8 *)&v20);
          v10 = (_QWORD *)v15[0];
          v11 = 0LL;
          while ( v10 != (_QWORD *)v15[1] )
          {
            ++v11;
            v10 = (_QWORD *)*v10;
          }
          if ( !v11 )
            v6 = 1;
        }
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v22);
        ++v7;
      }
      while ( v7 != v8 );
      v8 = v17;
      v7 = v16;
    }
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
        v7,
        v8);
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v18 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  if ( v4 != 1 || !v6 )
  {
    PenEventsDispatcherPrincipal::GetShellClients(a1, &v16);
    v12 = v16;
    v13 = v17;
    if ( v16 != v17 )
    {
      do
      {
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          &v19,
          (void (__fastcall ***)(_QWORD))*v12);
        std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,bool>::operator()(
          a3,
          &v19,
          v6);
        ++v12;
      }
      while ( v12 != v13 );
      v13 = v17;
      v12 = v16;
    }
    if ( v12 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
        v12,
        v13);
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v18 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  v14 = *(_QWORD *)(a3 + 56);
  if ( v14 )
  {
    LOBYTE(a2) = v14 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, a2);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
