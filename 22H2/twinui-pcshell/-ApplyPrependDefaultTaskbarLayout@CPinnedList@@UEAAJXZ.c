/*
 * XREFs of ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x1801536F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800BA2B4 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180152304 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801525D8 (--0-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180152DD4 (--1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180155EAC (GetPidlsFromTaskbarLayout.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180157D10 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18015C100 (-StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C48C (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyPrependDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // r14d
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v19[5]; // [rsp+60h] [rbp-A0h] BYREF
  char v20; // [rsp+88h] [rbp-78h]
  _QWORD v21[40]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  memset_0(v21, 0, 0x138uLL);
  wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v21);
  v21[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v21);
  pv[0] = 0LL;
  pv[1] = 0LL;
  v17 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(3LL, pv, &v18, 0LL);
  v3 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    v19[4] = pv;
    v20 = 1;
    if ( v18 )
    {
      v4 = LODWORD(pv[1]) - 1;
      if ( LODWORD(pv[1]) - 1 >= 0 )
      {
        v5 = (int)pv[1];
        do
        {
          std::to_wstring((__int64)v19, v5);
          v6 = pv[0];
          v7 = *((_QWORD *)pv[0] + v4);
          *((_QWORD *)pv[0] + v4) = 0LL;
          v8 = v19;
          if ( v19[3] >= 8uLL )
            v8 = (_QWORD *)v19[0];
          v6[v4] = ILAppendHiddenStringW(v7, 3203334189LL, v8);
          v9 = *((_QWORD *)pv[0] + v4);
          if ( !(*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v9) )
          {
            v10 = CPinnedList::InternalModify((char *)this - 16, v9, 0LL, 36LL, 0);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x884,
                (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v10);
          }
          if ( (unsigned int)CPinnedList::InternalModify((char *)this - 16, 0LL, v9, 36LL, 0) )
          {
            v15 = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v15);
          }
          else
          {
            v11 = CPinnedList::InternalModify((char *)this - 16, v9, 1LL, 36LL, 0);
            if ( v11 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x88B,
                (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v11);
          }
          std::wstring::_Tidy_deallocate(v19);
          --v5;
          --v4;
        }
        while ( v4 >= 0 );
      }
      wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      v3 = 0;
    }
    else
    {
      v3 = -2147019873;
    }
    v12 = 0;
    if ( pv[1] )
    {
      v13 = 0LL;
      do
      {
        ILFree(*((LPITEMIDLIST *)pv[0] + v13));
        v13 = ++v12;
      }
      while ( (LPVOID)v12 < pv[1] );
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x868,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
  }
  if ( pv[0] )
  {
    CoTaskMemFree(pv[0]);
    pv[0] = 0LL;
  }
  pv[1] = 0LL;
  *((_QWORD *)&v17 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v21);
  return v3;
}
