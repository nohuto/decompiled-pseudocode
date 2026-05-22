/*
 * XREFs of ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801335C0
 * Callers:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x180133578 (-NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x18002DA10 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x1800BB2E0 (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F4D0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180133478 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rdx
  HotkeyRegistrationForwarder *HotkeyRegistrationForwarder; // rax
  __int64 v12; // r8
  const char *v13; // r9
  int v14; // eax
  __int64 *v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  _DWORD v19[3]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v20; // [rsp+44h] [rbp-Ch]
  char v21; // [rsp+46h] [rbp-Ah]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v4 = a4;
  v5 = a3;
  if ( IsEdition(8778LL) )
  {
    PenEventsDispatcherPrincipal::GetShellClients(a1, (__int64 *)&v16);
    v8 = v16;
    v9 = v16;
    v10 = v17;
    if ( v16 == v17 )
    {
LABEL_5:
      v19[0] = v4;
      v19[1] = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a2 + 32) + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL))
                         + 32);
      v19[2] = 0;
      v20 = *((_WORD *)&PenEventsDispatcherPrincipal::s_hotkeyList + 2 * v5);
      v21 = *((_BYTE *)&PenEventsDispatcherPrincipal::s_hotkeyList + 4 * v5 + 2);
      HotkeyRegistrationForwarder = ISMStatics::GetHotkeyRegistrationForwarder();
      v14 = HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
              HotkeyRegistrationForwarder,
              (const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *)v19,
              v12,
              v13);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          302LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevents"
                   "dispatcherprincipal.cpp",
          (const char *)(unsigned int)v14);
      v8 = v16;
      v10 = v17;
    }
    else
    {
      while ( *v9 != a2 )
      {
        if ( ++v9 == v17 )
          goto LABEL_5;
      }
    }
    if ( v8 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
        v8,
        v10);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v18 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  return 0LL;
}
