/*
 * XREFs of ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x1801539D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013ABFC (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18015248C (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180152E20 (--1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x180155EAC (GetPidlsFromTaskbarLayout.c)
 *     GetPinSourceForPinnedItem @ 0x180156BE4 (GetPinSourceForPinnedItem.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x18015C1BC (-StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C278 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F120 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9B20 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPinnedList::ApplyReorderTaskbarLayout(__int64 a1, unsigned int a2, int a3)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, __int64 **); // rbx
  int v9; // eax
  __int64 v10; // rax
  bool v11; // bl
  int PinSourceForPinnedItem; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rsi
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // rax
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+80h] [rbp-80h] BYREF
  LPVOID *v31; // [rsp+88h] [rbp-78h]
  char v32; // [rsp+90h] [rbp-70h]
  _QWORD v33[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v33, 0, 0x138uLL);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"TaskbarLayoutReorderActivity");
  v33[0] = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::StartActivity(v33, a2);
  pv[0] = 0LL;
  pv[1] = 0LL;
  v29 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v30, 0LL);
  v7 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89E,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    goto LABEL_30;
  }
  v31 = pv;
  v32 = 1;
  if ( !v30 )
  {
    v7 = -2147019873;
    goto LABEL_27;
  }
  v27 = 0LL;
  v26 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a1 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v27);
  v9 = v8(a1, &v27);
  v7 = v9;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      v10 = *v27;
      v23 = &v26;
      v24 = 0LL;
      v25 = 1;
      v11 = (*(unsigned int (__fastcall **)(__int64 *, __int64, __int64 *))(v10 + 24))(v27, 1LL, &v24) == 0;
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v23);
      if ( !v11 )
      {
        if ( !a3 || (v14 = LODWORD(pv[1]) - 1, LODWORD(pv[1]) - 1 < 0) )
        {
LABEL_25:
          wil::ActivityBase<TaskbarLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v33);
          v7 = 0;
          goto LABEL_26;
        }
        while ( 2 )
        {
          v15 = *((_QWORD *)pv[0] + v14);
          if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, v15) )
          {
            v16 = CPinnedList::InternalModify(a1 - 16, 0LL, v15, 14LL, 0);
            v17 = retaddr;
            if ( v16 < 0 )
            {
              v18 = 2243LL;
              goto LABEL_23;
            }
            v16 = CPinnedList::InternalModify(a1 - 16, v15, 1LL, 14LL, 0);
            v17 = retaddr;
            if ( v16 < 0 )
            {
              v18 = 2245LL;
LABEL_23:
              wil::details::in1diag3::_Log_Hr(
                v17,
                (void *)v18,
                (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v16);
            }
          }
          if ( --v14 < 0 )
            goto LABEL_25;
          continue;
        }
      }
      PinSourceForPinnedItem = GetPinSourceForPinnedItem(v26, &v22);
      if ( PinSourceForPinnedItem < 0 )
        break;
      if ( v22 && (v22 != 1 || !a2) )
      {
        PinSourceForPinnedItem = CPinnedList::InternalModify(a1 - 16, v26, 0LL, 14LL, 0);
        if ( PinSourceForPinnedItem < 0 )
        {
          v13 = 2231LL;
LABEL_15:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)PinSourceForPinnedItem);
        }
      }
    }
    v13 = 2226LL;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8AC,
    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)(unsigned int)v9);
LABEL_26:
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(&v26, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v27);
LABEL_27:
  v19 = 0;
  if ( pv[1] )
  {
    v20 = 0LL;
    do
    {
      ILFree(*((LPITEMIDLIST *)pv[0] + v20));
      v20 = ++v19;
    }
    while ( (LPVOID)v19 < pv[1] );
  }
LABEL_30:
  if ( pv[0] )
  {
    CoTaskMemFree(pv[0]);
    pv[0] = 0LL;
  }
  pv[1] = 0LL;
  *((_QWORD *)&v29 + 1) = 0LL;
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity *)v33);
  return v7;
}
